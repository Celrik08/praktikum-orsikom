#include <Servo.h>

Servo myServo;

int tombol = 2;
int segA = 4;
int segB = 5;
int segC = 6;
int segD = 7;
int segE = 8;
int segF = 9;
int segG = 10;
int hijau = 11;
int merah = 12;

int i = 1;
int model = 0;
int tekananTerakhir = 0;
int servo = 0;

void setup() {
  pinMode(merah, OUTPUT);
  pinMode(hijau, OUTPUT);
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(tombol, INPUT);
  myServo.attach(3);
  myServo.write(0);
}

void loop() {
  int tombolstate = digitalRead(tombol);

  if (tombolstate == HIGH) {
    int waktu = 0;

    while (digitalRead(tombol) == HIGH) {
      delay(10);
      waktu += 10;

      if (waktu >= 1000) {
        digitalWrite(merah, LOW);
        digitalWrite(hijau, LOW);
        digitalWrite(segA, LOW);
        digitalWrite(segB, LOW);
        digitalWrite(segC, LOW);
        digitalWrite(segD, LOW);
        digitalWrite(segE, LOW);
        digitalWrite(segF, LOW);
        digitalWrite(segG, LOW);

        myServo.detach();
        while (digitalRead(tombol) == HIGH) { }
        myServo.attach(3);
        myServo.write(0);

        model = 0;
        tekananTerakhir = 0;
        servo = 0;

        delay(200);
        return;
      }
    }

    if (waktu > 0 && waktu < 1000) {
      model += 1;
      servo += 20;
      if (model > 9) {
        model = 1;
        servo = 20;
      }
      if (servo > 180) servo = 180;
      delay(200);
    }
  }

  if (model != tekananTerakhir) {

    if (model == 1) {
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);

      myServo.write(servo);

      for (int i = 1; i <= 1; i++) {
        digitalWrite(hijau, HIGH);
        delay(500);
        digitalWrite(hijau, LOW);
        delay(200);
      }
    }

    else if (model == 2) {
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);

      myServo.write(servo);

      for (int i = 1; i <= 2; i++) {
        if (i % 2 == 1) {
          digitalWrite(hijau, HIGH);
          delay(500);
          digitalWrite(hijau, LOW);
        } else {
          digitalWrite(merah, HIGH);
          delay(500);
          digitalWrite(merah, LOW);
        }
        delay(200);
      }
    }

    else if (model == 3) {
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);

      myServo.write(servo);

      for (int i = 1; i <= 3; i++) {
        if (i % 2 == 1) {
          digitalWrite(hijau, HIGH);
          delay(500);
          digitalWrite(hijau, LOW);
        } else {
          digitalWrite(merah, HIGH);
          delay(500);
          digitalWrite(merah, LOW);
        }
        delay(200);
      }
    }

    else if (model == 4) {
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);

      myServo.write(servo);

      for (int i = 1; i <= 4; i++) {
        if (i % 2 == 1) {
          digitalWrite(hijau, HIGH);
          delay(500);
          digitalWrite(hijau, LOW);
        } else {
          digitalWrite(merah, HIGH);
          delay(500);
          digitalWrite(merah, LOW);
        }
        delay(200);
      }
    }

    else if (model == 5) {
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);

      myServo.write(servo);

      for (int i = 1; i <= 5; i++) {
        if (i % 2 == 1) {
          digitalWrite(hijau, HIGH);
          delay(500);
          digitalWrite(hijau, LOW);
        } else {
          digitalWrite(merah, HIGH);
          delay(500);
          digitalWrite(merah, LOW);
        }
        delay(200);
      }
    }

    else if (model == 6) {
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);

      myServo.write(servo);

      for (int i = 1; i <= 6; i++) {
        if (i % 2 == 1) {
          digitalWrite(hijau, HIGH);
          delay(500);
          digitalWrite(hijau, LOW);
        } else {
          digitalWrite(merah, HIGH);
          delay(500);
          digitalWrite(merah, LOW);
        }
        delay(200);
      }
    }

    else if (model == 7) {
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);

      myServo.write(servo);

      for (int i = 1; i <= 7; i++) {
        if (i % 2 == 1) {
          digitalWrite(hijau, HIGH);
          delay(500);
          digitalWrite(hijau, LOW);
        } else {
          digitalWrite(merah, HIGH);
          delay(500);
          digitalWrite(merah, LOW);
        }
        delay(200);
      }
    }

    else if (model == 8) {
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);

      myServo.write(servo);

      for (int i = 1; i <= 8; i++) {
        if (i % 2 == 1) {
          digitalWrite(hijau, HIGH);
          delay(500);
          digitalWrite(hijau, LOW);
        } else {
          digitalWrite(merah, HIGH);
          delay(500);
          digitalWrite(merah, LOW);
        }
        delay(200);
      }
    }

    else if (model == 9) {
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);

      myServo.write(servo);

      for (int i = 1; i <= 9; i++) {
        if (i % 2 == 1) {
          digitalWrite(hijau, HIGH);
          delay(500);
          digitalWrite(hijau, LOW);
        } else {
          digitalWrite(merah, HIGH);
          delay(500);
          digitalWrite(merah, LOW);
        }
        delay(200);
      }
    }
  }

  tekananTerakhir = model;
}