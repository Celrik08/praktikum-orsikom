int tombol = 2;
int segA = 3;
int segB = 4;
int segC = 5;
int segD = 6;
int segE = 7;
int segF = 8;
int segG = 9;
int merah = 10;
int hijau = 11;

int mode = 0;
unsigned long pencetMulai = 0;
unsigned long terakhirUpdate = 0; // untuk jeda antar kenaikan angka
bool tombolDitekan = false;
bool modeTekanLama = false;

void setup() {
  pinMode(tombol, INPUT_PULLUP);
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(merah, OUTPUT);
  pinMode(hijau, OUTPUT);

  tampilAngka(0);
  digitalWrite(merah, HIGH);
  digitalWrite(hijau, LOW);
}

void loop() {
  int tombolState = digitalRead(tombol);

  // Tombol baru ditekan
  if (tombolState == LOW && !tombolDitekan) {
    tombolDitekan = true;
    pencetMulai = millis();
    modeTekanLama = false;
  }

  // Tombol dilepas
  if (tombolState == HIGH && tombolDitekan) {
    unsigned long pressDuration = millis() - pencetMulai;
    tombolDitekan = false;
    modeTekanLama = false;

    if (pressDuration < 500) {
      // Tekan singkat
      digitalWrite(merah, LOW);
      digitalWrite(hijau, HIGH);
      delay(1000);
      digitalWrite(hijau, LOW);
      digitalWrite(merah, HIGH);

      mode++;
      if (mode > 9) mode = 0;
      tampilAngka(mode);
    } else {
      // Setelah dilepas dari tekan lama, lampu merah nyala lagi
      digitalWrite(hijau, LOW);
      digitalWrite(merah, HIGH);
    }
  }

  // Tombol ditekan lama
  if (tombolState == LOW && tombolDitekan) {
    unsigned long pressDuration = millis() - pencetMulai;

    if (pressDuration >= 800) {
      // Masuk mode tekan lama
      modeTekanLama = true;
      digitalWrite(merah, LOW);
      digitalWrite(hijau, HIGH);

      // Naik angka setiap 1 detik selama tombol ditekan lama
      if (millis() - terakhirUpdate >= 1000) {
        terakhirUpdate = millis();
        mode++;
        if (mode > 9) mode = 0;
        tampilAngka(mode);
      }
    }
  }

  // Kalau tombol tidak ditekan sama sekali
  if (tombolState == HIGH && !tombolDitekan && !modeTekanLama) {
    digitalWrite(hijau, LOW);
    digitalWrite(merah, HIGH);
  }
}

void tampilAngka(int angka) {
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);

  if (angka == 0) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
  } 
  else if (angka == 1) {
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
  } 
  else if (angka == 2) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segG, HIGH);
  } 
  else if (angka == 3) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segG, HIGH);
  }
  else if (angka == 4) {
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }
  else if (angka == 5) {
    digitalWrite(segA, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }
  else if (angka == 6) {
    digitalWrite(segA, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }
  else if (angka == 7) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
  }
  else if (angka == 8) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }
  else if (angka == 9) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }
}