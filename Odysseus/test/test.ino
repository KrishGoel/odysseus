/*
    +-------------------------------------------+
                         |||  ---> Black Line
                         |||
                         |||
                1         2         3
      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                       SENSORS
*/
#define leftMotorForward 8
#define leftMotorBackward 9
#define rightMotorForward 10
#define rightMotorBackward 11

//HIGH -> white
//LOW -> black

void setup() {
  Serial.begin(9600);
  pinMode(leftMotorForward, OUTPUT);
  pinMode(leftMotorBackward, OUTPUT);
  pinMode(rightMotorForward, OUTPUT);
  pinMode(rightMotorBackward, OUTPUT);
}

void loop() {
  digitalWrite(leftMotorForward, HIGH);
  
}
