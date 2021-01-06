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
  pinMode(leftMotorForward, OUTPUT);
  pinMode(leftMotorBackward, OUTPUT);
  pinMode(rightMotorForward, OUTPUT);
  pinMode(rightMotorBackward, OUTPUT);
  /*Sensors*/
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
}

void loop() {
  int sensor1 = digitalRead(3); //sensor1
  int sensor2 = digitalRead(4); //sensor2
  int sensor3 = digitalRead(5); //sensor3

  /*Ideal*/
  if (sensor2 == LOW) {
    digitalWrite(leftMotorForward, HIGH);
    digitalWrite(rightMotorForward, HIGH);
    Serial.println("God speed Rebels!"); 
  }
  /*Turn left*/
  else if ((sensor2 == HIGH) && (sensor1 == LOW)) {
    while (sensor2 == HIGH) {
        digitalWrite(rightMotorForward, HIGH);
        digitalWrite(leftMotorBackward, HIGH);
        Serial.println("Tilting to the left!"); 
      }
  }
  /*Turn right*/
  else if ((sensor2 == HIGH) && (sensor3 == LOW)) {
    while (sensor2 == HIGH) {
        digitalWrite(rightMotorBackward, HIGH);
        digitalWrite(leftMotorForward, HIGH);
        Serial.println("Tilting to the right!"); 
      }
  }
  else {
      digitalWrite(rightMotorForward, LOW);
      digitalWrite(leftMotorForward, LOW);
      digitalWrite(rightMotorBackward, LOW);
      digitalWrite(leftMotorBackward, LOW);
    }
}
