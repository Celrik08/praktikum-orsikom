int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 8;
int merah = 9;

void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(merah, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("=== Kontrol Seven Segment ===");
  Serial.println("Masukkan angka 0–9 (huruf akan menyebabkan LED error)");
  while (Serial.available() == 0) {}  // tunggu input

  // 🔹 Baca input sebagai String
  String input = Serial.readStringUntil('\n');
  input.trim(); // hapus spasi dan enter

  // 🔹 Cek apakah input hanya berisi digit (0-9)
  bool isNumber = true;
  for (int i = 0; i < input.length(); i++) {
    if (!isDigit(input[i])) {
      isNumber = false;
      break;
    }
  }

  if (isNumber) {
    int angka = input.toInt();
    if (angka >= 0 && angka <= 9) {

      // reset LED dulu
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      digitalWrite(merah, LOW);

      if (angka == 0) {
        digitalWrite(segA, HIGH);
        digitalWrite(segB, HIGH);
        digitalWrite(segC, HIGH);
        digitalWrite(segD, HIGH);
        digitalWrite(segE, HIGH);
        digitalWrite(segF, HIGH);
        digitalWrite(segG, LOW);
      }

      if (angka == 1) {
        digitalWrite(segA, LOW);
        digitalWrite(segB, HIGH);
        digitalWrite(segC, HIGH);
        digitalWrite(segD, LOW);
        digitalWrite(segE, LOW);
        digitalWrite(segF, LOW);
        digitalWrite(segG, LOW);
      }

      if (angka == 2) {
        digitalWrite(segA, HIGH);
        digitalWrite(segB, HIGH);
        digitalWrite(segC, LOW);
        digitalWrite(segD, HIGH);
        digitalWrite(segE, HIGH);
        digitalWrite(segF, LOW);
        digitalWrite(segG, HIGH);
      }

      if (angka == 3) {
        digitalWrite(segA, HIGH);
        digitalWrite(segB, HIGH);
        digitalWrite(segC, HIGH);
        digitalWrite(segD, HIGH);
        digitalWrite(segE, LOW);
        digitalWrite(segF, LOW);
        digitalWrite(segG, HIGH);
      }

      if (angka == 4) {
        digitalWrite(segA, LOW);
        digitalWrite(segB, HIGH);
        digitalWrite(segC, HIGH);
        digitalWrite(segD, LOW);
        digitalWrite(segE, LOW);
        digitalWrite(segF, HIGH);
        digitalWrite(segG, HIGH);
      }

      if (angka == 5) {
        digitalWrite(segA, HIGH);
        digitalWrite(segB, LOW);
        digitalWrite(segC, HIGH);
        digitalWrite(segD, HIGH);
        digitalWrite(segE, LOW);
        digitalWrite(segF, HIGH);
        digitalWrite(segG, HIGH);
      }

      if (angka == 6) {
        digitalWrite(segA, HIGH);
        digitalWrite(segB, LOW);
        digitalWrite(segC, HIGH);
        digitalWrite(segD, HIGH);
        digitalWrite(segE, HIGH);
        digitalWrite(segF, HIGH);
        digitalWrite(segG, HIGH);
      }

      if (angka == 7) {
        digitalWrite(segA, HIGH);
        digitalWrite(segB, HIGH);
        digitalWrite(segC, HIGH);
        digitalWrite(segD, LOW);
        digitalWrite(segE, LOW);
        digitalWrite(segF, LOW);
        digitalWrite(segG, LOW);
      }

      if (angka == 8) {
        digitalWrite(segA, HIGH);
        digitalWrite(segB, HIGH);
        digitalWrite(segC, HIGH);
        digitalWrite(segD, HIGH);
        digitalWrite(segE, HIGH);
        digitalWrite(segF, HIGH);
        digitalWrite(segG, HIGH);
      }

      if (angka == 9) {
        digitalWrite(segA, HIGH);
        digitalWrite(segB, HIGH);
        digitalWrite(segC, HIGH);
        digitalWrite(segD, HIGH);
        digitalWrite(segE, LOW);
        digitalWrite(segF, HIGH);
        digitalWrite(segG, HIGH);
      }

    } else {
      // jika angka tidak 0–9, LED error nyala
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      digitalWrite(merah, HIGH);
      Serial.println("Error: Input melebih batas atau kurang angkanya!");
    }

  } else {
    // 🔴 Jika input bukan angka (misal: huruf/string)
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    digitalWrite(merah, HIGH);
    Serial.println("Error: Input bukan angka!");
  }

  delay(1500); // jeda biar tidak spam
}