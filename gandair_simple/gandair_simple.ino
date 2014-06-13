
void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, INPUT);
  digitalWrite(11,1);
  digitalWrite(13,0);
  digitalWrite(12,0);
}

void loop()
{
while(digitalRead(11) == 1 ){}

digitalWrite(13,1);
digitalWrite(12,1);
delay(3600000);
digitalWrite(13,0);
digitalWrite(12,0);


}
