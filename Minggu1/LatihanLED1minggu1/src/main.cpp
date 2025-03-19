#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampu1 = 26;
int lampu2 = 32;
int lampu3 = 33;
void setup() {

    // Atur pin sebagai OUTPUT
    pinMode(lampu1, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}

void loop() {
    // Nyalakan kedua LED
    digitalWrite(lampu1, HIGH);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    
    delay(1000); // Tunggu 1 detikxcccccv        v v

    // Matikan kedua LED
    digitalWrite(lampu1, LOW);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, LOW);
    
    delay(1000); // Tunggu 1 detik sebelum mengulang

    digitalWrite(lampu1, LOW);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, HIGH);
    
    delay(1000);
}
