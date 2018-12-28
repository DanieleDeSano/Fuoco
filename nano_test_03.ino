int ledPinR1 = 10;
int ledPinY1 = 9;
int ledPinR2 = 11;

void setup()
{
pinMode(ledPinR1, OUTPUT);
pinMode(ledPinY1, OUTPUT);
pinMode(ledPinR2, OUTPUT);
}

void loop() {
analogWrite(ledPinR1, random(10,200));
delay(random(50));
analogWrite(ledPinY1, random(10,200));
delay(random(50));
analogWrite(ledPinR2, random(10,200));
delay(random(50));
}
