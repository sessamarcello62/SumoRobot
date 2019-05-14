#define forward 1
#define reverse 2
#define turnr 3
#define turnl 4
int spd = 255;

void setup() {
  pinMode (2, INPUT);
  pinMode (3, INPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  Serial.begin (9600);
}


void loop() {
  int x = analogRead (2);
  int y = analogRead (3);
  int z = digitalRead (4);
  Serial.print (x);
  Serial.print ("\t");
  Serial.println (y);
  delay (40);

  
  if (x < 100) {
    motor_speed(reverse);
    delay(1000);
    motor_speed(turnl);
   delay(900);
  }
  if (y < 100) {
    motor_speed(reverse);
    delay(1000);
    motor_speed(turnr);
   delay(900);
  }
  else {
    motor_speed(forward);
  }
  /*
    if ((x == x > 1023) && (y == x > 1023)) {
      motor_speed (forward);
    }
    else {
      motor_speed (reverse);
      delay (1000);
      motor_speed (turn);
      delay (750);

      if (z == 0) {
        motor_speed (forward);
  */
}

void motor_speed (int bertha) {
  if (bertha == 1) {
    analogWrite (6, 255);
    digitalWrite (5, LOW);
    analogWrite (9, spd);
    digitalWrite (10, LOW);
  }
  if (bertha == 2) {
    digitalWrite (6, LOW);
    analogWrite (5, 255);
    digitalWrite (9, LOW);
    analogWrite (10, spd);
  }
  if (bertha == 3) {
    digitalWrite (6, 255);
    analogWrite (5, LOW);
    digitalWrite (9, LOW);
    analogWrite (10, spd);
  }
   if (bertha == 4) {
    digitalWrite (6, LOW);
    analogWrite (5, 255);
    digitalWrite (9, spd);
    analogWrite (10, LOW);
  }
}

