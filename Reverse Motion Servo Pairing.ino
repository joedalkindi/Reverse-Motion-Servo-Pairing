#include <Servo.h>

Servo servo1;  
Servo servo2;  

int pos;

void setup() {
  servo1.attach(9, 500, 2500);
  servo2.attach(8, 500, 2500);
}

void loop() {
  for (pos = 0; pos <= 180; pos++) {
    servo1.write(pos);
    servo2.write(180 - pos);  // Opposite direction if mounted face-to-face
    delay(15);
  }

  for (pos = 180; pos >= 0; pos--) {
    servo1.write(pos);
    servo2.write(180 - pos);
    delay(15);
  }
}
