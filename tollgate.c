#include <Servo.h>

Servo gate1;
Servo gate2;

int ir1 = 2;
int ir2 = 3;

void setup() {

  gate1.attach(9);     // Servo for Gate 1
  gate2.attach(10);    // Servo for Gate 2

  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);

  gate1.write(0);      // Gate 1 closed
  gate2.write(0);      // Gate 2 closed
}

void loop() {

  if (digitalRead(ir1) == LOW) {   // Vehicle at Gate 1
    gate1.write(90);               // Open Gate 1
    delay(3000);
    gate1.write(0);                // Close Gate 1
  }

  if (digitalRead(ir2) == LOW) {   // Vehicle at Gate 2
    gate2.write(90);               // Open Gate 2
    delay(3000);
    gate2.write(0);                // Close Gate 2
  }

}
