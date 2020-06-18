
int i=0;
void setup()

{

pinMode(13, OUTPUT);

Serial.begin(9600);

}

void loop()
{
	i++;
	digitalWrite(13, HIGH);
	delay(2000);
 
    digitalWrite(13, LOW);
	delay(2000);
 	if (i==5)
      exit(0);



}

 