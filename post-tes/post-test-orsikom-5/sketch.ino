#include <Servo.h>

Servo servo1;
Servo servo2;

int tombol = 2;
int segA = 4;
int segB = 6;
int segC = 7;
int segD = 8;
int segE = 9;
int segF = 10;
int segG = 11;
int merah = 12;
int hijau = 13;

int segmentPins[7] = {segA, segB, segC, segD, segE, segF, segG};

bool programStarted = false;

void tampilAngka(int digit) {
  int pola[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}
  };
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], pola[digit][i]);
  }
}

void setup() {
  pinMode(tombol, INPUT);
  for (int i = 0; i < 7; i++) pinMode(segmentPins[i], OUTPUT);
  pinMode(merah, OUTPUT);
  pinMode(hijau, OUTPUT);
  Serial.begin(9600);

  for (int i = 0; i < 7; i++) digitalWrite(segmentPins[i], LOW);
  digitalWrite(merah, HIGH);
  digitalWrite(hijau, LOW);
  servo1.attach(3);
  servo2.attach(5);
  servo1.write(90);
  servo2.write(90);
}

void loop() {

  if (!programStarted) {
    Serial.println("Smart Lock Siap. Tekan tombol untuk memulai");
    while (digitalRead(tombol) == LOW) {}
    delay(50);
    while (digitalRead(tombol) == HIGH) {}
    delay(200);
    programStarted = true;
  }

  String input = "";
  bool adaInput = false;

  while (true) {
    while (Serial.available() > 0) Serial.read();
    delay(100);
    Serial.println("Masukkan Password:");

    bool kembaliKeInput = false;
    for (int detik = 5; detik >= 1; detik--) {
      tampilAngka(detik);
      delay(1000);

      if (Serial.available() > 0) {
        input = Serial.readStringUntil('\n');
        input.trim();

        if (input.length() == 0) continue;

        adaInput = true;
        break;
      }

      if (detik == 1 && !adaInput) {
        Serial.println("Waktu habis!");
        for (int j = 0; j < 7; j++) digitalWrite(segmentPins[j], LOW);
        digitalWrite(merah, HIGH);
        digitalWrite(hijau, LOW);

        Serial.println("");
        Serial.println("Smart Lock Siap. Tekan tombol untuk memulai");

        while (digitalRead(tombol) == LOW) {}
        delay(50);
        while (digitalRead(tombol) == HIGH) {}
        delay(300);

        input = "";
        adaInput = false;
        delay(500);

        kembaliKeInput = true;
        break;
      }
    }

    if (kembaliKeInput) continue;

    if (adaInput && input.length() > 0) {
      bool isNumber = true;
      for (int i = 0; i < input.length(); i++) {
        if (!isDigit(input[i])) {
          isNumber = false;
          break;
        }
      }

      if (isNumber) {
        int angka = input.toInt();
        if (angka == 117) {
          Serial.println("Password benar!");
          digitalWrite(hijau, HIGH);
          digitalWrite(merah, LOW);
          servo1.write(180);
          servo2.write(0);

          for (int detik = 9; detik >= 1; detik--) {
            tampilAngka(detik);
            delay(1000);
            if (detik == 1) {
              servo1.write(90);
              servo2.write(90);
            }
          }

          for (int i = 0; i < 7; i++) digitalWrite(segmentPins[i], LOW);
          digitalWrite(merah, HIGH);
          digitalWrite(hijau, LOW);

          Serial.println("");
          Serial.println("Smart Lock Siap. Tekan tombol untuk memulai");

          while (digitalRead(tombol) == LOW) {}
          delay(50);
          while (digitalRead(tombol) == HIGH) {}
          delay(300);
          programStarted = true;
          continue;
        }
        
        else {
          Serial.println("Password salah!");
          for (int i = 0; i < 7; i++) digitalWrite(segmentPins[i], LOW);
          digitalWrite(merah, HIGH);
          digitalWrite(hijau, LOW);

          Serial.println("");
          Serial.println("Smart Lock Siap. Tekan tombol untuk memulai");

          while (digitalRead(tombol) == LOW) {}
          delay(50);
          while (digitalRead(tombol) == HIGH) {}
          delay(300);
          continue;
        }
      }
      
      else {
        Serial.println("Input bukan angka!");
        for (int i = 0; i < 7; i++) digitalWrite(segmentPins[i], LOW);
        digitalWrite(merah, HIGH);
        digitalWrite(hijau, LOW);

        Serial.println("");
        Serial.println("Smart Lock Siap. Tekan tombol untuk memulai");

        while (digitalRead(tombol) == LOW) {}
        delay(50);
        while (digitalRead(tombol) == HIGH) {}
        delay(300);
        continue;
      }
    }

    while (digitalRead(tombol) == HIGH) {}
    delay(200);
  }
}