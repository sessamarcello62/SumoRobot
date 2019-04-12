# SumoRobot
#define LEFTA 5
#define LEFTB 6
#define RIGHTA 9
#define RIGHTB 10

void setup() {
  pinMode(LEFTA, OUTPUT);
  pinMode(LEFTB, OUTPUT);
  pinMode(RIGHTA, OUTPUT);
  pinMode(RIGHTB, OUTPUT);
}

void loop() {
motor_control
}

motor_control () {
  digitalWrite(LEFTA, HIGH);
  digitalWrite(LEFTB, LOW);
  digitalWrite(RIGHTA, HIGH);
  digitalWrite(RIGHTB, LOW);
}
