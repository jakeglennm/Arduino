const int pin_2 = 2;
const int pin_3 = 3;
int count;
void setup() {
  pinMode(pin_2, INPUT);
  pinMode(pin_3, OUTPUT);
}
//must only tap button quickly, not hold it down
//can have time between taps be pretty quick, but not too quick, or super long
void loop() {
int value = digitalRead(pin_2);
if(value == 1)
{
  count = count + 1;
  delay(300);
}
if(count==3){
  digitalWrite(pin_3,HIGH);
  delay(1000);
  count = 0;
}
else{
  digitalWrite(pin_3,LOW);
}

}
