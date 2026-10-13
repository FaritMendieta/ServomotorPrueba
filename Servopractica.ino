#include <ESP32Servo.h>
//libreria ESP32servo.h o tambien se puedo usar Servo.h
int pos = 0;

Servo servo_4;

void setup()
{
  servo_4.attach(4, 500, 2500);
} 

void loop()
{
  // mover servo de 0 a 180
  for (pos = 0; pos <= 180; pos += 1) {
    // Le dice a servo que vaya la posicion de la variable pos
    servo_4.write(pos); 
    // Esperar 15 ms para que el servo llegue a la posicion
    delay(15); // Espera 15 millisegundos(s)
  }
  delay(2000);  
  for (pos = 180; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_4.write(pos);
    // Le dice a servo que vaya la posicion de la variable posn
    delay(15); // Espera 15 millisegundos(s)
  }
   delay(2000); 
}