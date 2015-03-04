//set pin to 13
int led = 13;
//set up code
void setup() {                
//output on pin 13
  pinMode(led, OUTPUT);     
}

//led starts on, waits a second, then turns off for a second.
void loop() {
  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(1000);              
}
//end code
