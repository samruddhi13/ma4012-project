int val1;
int val2;
int val3;

void setup()
{
  Serial.begin(9600);               // starts the serial monitor
}
 
void loop()
{
  val1 = analogRead(1);       // reads the value of the sharp sensor
  val2 = analogRead(2);
  val3 = analogRead(3);
  Serial.print(val1);
  Serial.print("//");
  Serial.print(val2);
  Serial.print("//");
  Serial.println(val3);
  delay(1000);                    // wait for this much time before printing next value
}
