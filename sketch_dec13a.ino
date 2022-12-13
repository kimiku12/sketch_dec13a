#define ledpin1 D0    // Define pin A206
#define ledpin2 D4
#define ledpin3 D5
void setup() 
{
  pinMode(ledpin1,OUTPUT);   //Set D1 pin as output
  pinMode(ledpin2,OUTPUT);   //Set D2 pin as output
  pinMode(ledpin3,OUTPUT);   //Set D3 pin as output

}

void loop() 
{
  digitalWrite(ledpin1, 0);  //Set display pattern off-off-on
  digitalWrite(ledpin2, 0);
  digitalWrite(ledpin3, 1);
  delay(1000);               //Delay 1 second
  digitalWrite(ledpin1, 0);  //Set display pattern off-on-on
  digitalWrite(ledpin2, 1);
  digitalWrite(ledpin3, 1);
  delay(1000);               //Delay 1 second
  digitalWrite(ledpin1, 1);  //Set display pattern on-on-on
  digitalWrite(ledpin2, 1);
  digitalWrite(ledpin3, 1);
  delay(1000);               //Delay 1 second
  digitalWrite(ledpin1, 0);  //Turn off all
  digitalWrite(ledpin2, 0);
  digitalWrite(ledpin3, 0);
  delay(1000);               //Delay 1 second
}
