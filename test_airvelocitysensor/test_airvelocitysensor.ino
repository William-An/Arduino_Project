int data=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
data=analogRead(0);
Serial.println(data);
delay(100);
}
