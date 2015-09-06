int pushButton = 3;
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 2;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);
  if (buttonState == 1) {
    analogWrite(led1, random(0,255));
    analogWrite(led2, random(0,255));
    analogWrite(led3, random(0,255));
    analogWrite(led4, random(0,255));
    analogWrite(led5, random(0,12));
    analogWrite(led6, random(0,98));
    delay(50);
  }else {
    analogWrite(led1, 0);
    analogWrite(led2, 0);
    analogWrite(led3, 0);
    analogWrite(led4, 0);
    analogWrite(led5, 0);
    analogWrite(led6, 0);
  }
}
