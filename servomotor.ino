// Libreria de Servo para el Servomotor
#include <ESP32Servo.h>
// Instanciamos
Servo servo; 

// Pin donde va el GPIO2 del Servo
int pinServo = 2;

void setup() {
  // Inicio la posicion del servo
  servo.attach(pinServo, 500, 2500);
}

void loop() {
  // Inicializamos la posicion (grados) del servo
  int pos = 0; //(lo usamos para el ciclo for)
  // Ciclo que poscionara el servo desde 0 hasta 180 grados
  for (pos = 0; pos <= 180; pos += 1) {
    // Movemos el servo a los grados que le entreguemos
    servo.write(pos);
    delay(15);
  }

  // Hacemos el ciclo for a la invertida. De 180 grados hasta 0

    for (pos = 180; pos >= 0; pos += -1) {
    // Movemos el servo a los grados que le entreguemos
    servo.write(pos);
    delay(15);
  }
}
