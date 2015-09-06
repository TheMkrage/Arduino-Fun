int pushButton = 2;
int led1 = 13;
int led2 = 12;
int led3 = 11;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);
  if (buttonState == 1) {
    analogWrite(led1, random(0,100));
    analogWrite(led2, random(0,100));
    analogWrite(led3, random(0,100));
    delay(random(250,500));
  }else {
    analogWrite(led1, 0);
    analogWrite(led2, 0);
    analogWrite(led3, 0);
  }
}
