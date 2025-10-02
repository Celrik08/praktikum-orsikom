int Merah_1 = 13;
int Kuning_1 = 12;
int Hijau_1 = 11;

int Merah_2 = 10;
int Kuning_2 = 9;
int Hijau_2 = 8;

int Merah_3 = 7;
int Kuning_3 = 6;
int Hijau_3 = 5;

int Merah_4 = 4;
int Kuning_4 = 3;
int Hijau_4 = 2;

void setup() {
  pinMode(Merah_1, OUTPUT);
  pinMode(Kuning_1, OUTPUT);
  pinMode(Hijau_1, OUTPUT);

  pinMode(Merah_2, OUTPUT);
  pinMode(Kuning_2, OUTPUT);
  pinMode(Hijau_2, OUTPUT);

  pinMode(Merah_3, OUTPUT);
  pinMode(Kuning_3, OUTPUT);
  pinMode(Hijau_3, OUTPUT);

  pinMode(Merah_4, OUTPUT);
  pinMode(Kuning_4, OUTPUT);
  pinMode(Hijau_4, OUTPUT);

}

void loop() {

  //Lampu ke 4 Hijaunya Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3,HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, LOW);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, HIGH);
  delay(1000);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 4 Kuning Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, LOW);
  digitalWrite(Kuning_4, HIGH);
  delay(1000);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 4 Merah Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 1 Merah Nyala
  digitalWrite(Merah_1, HIGH);
  delay(400);
  digitalWrite(Merah_1, LOW);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 1 Kuning Nyala
  digitalWrite(Merah_1, LOW);
  digitalWrite(Kuning_1, HIGH);
  delay(400);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 1 Hijau Nyala
  digitalWrite(Merah_1, LOW);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, HIGH);
  delay(1000);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 1 Kuning Nyala
  digitalWrite(Merah_1, LOW);
  digitalWrite(Kuning_1, HIGH);
  delay(1000);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 1 Merah Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 2 Merah Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  delay(400);
  digitalWrite(Merah_2, LOW);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 2 Kuning Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, LOW);
  digitalWrite(Kuning_2, HIGH);
  delay(400);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 2 Hijau Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, LOW);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, HIGH);
  delay(1000);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 2 Kuning Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, LOW);
  digitalWrite(Kuning_2, HIGH);
  delay(1000);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 2 Merah Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);
  delay(1000);

  // Lampu ke 3 Merah Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  delay(400);
  digitalWrite(Merah_3, LOW);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 3 Kuning Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, LOW);
  digitalWrite(Kuning_3, HIGH);
  delay(400);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 3 Hijau Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, LOW);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, HIGH);
  delay(1000);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 3 Kuning Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, LOW);
  digitalWrite(Kuning_3, HIGH);
  delay(1000);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 3 Merah Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);
  delay(1000);

  // Lampu ke 4 Merah Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, HIGH);
  delay(400);
  digitalWrite(Merah_4, LOW);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);

  // Lampu ke 4 Kuning Nyala
  digitalWrite(Merah_1, HIGH);
  digitalWrite(Kuning_1, LOW);
  digitalWrite(Hijau_1, LOW);

  digitalWrite(Merah_2, HIGH);
  digitalWrite(Kuning_2, LOW);
  digitalWrite(Hijau_2, LOW);

  digitalWrite(Merah_3, HIGH);
  digitalWrite(Kuning_3, LOW);
  digitalWrite(Hijau_3, LOW);

  digitalWrite(Merah_4, LOW);
  digitalWrite(Kuning_4, HIGH);
  delay(400);
  digitalWrite(Kuning_4, LOW);
  digitalWrite(Hijau_4, LOW);
}
