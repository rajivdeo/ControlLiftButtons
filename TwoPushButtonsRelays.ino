int pbutton1Pin = 2;// connect output to push button
int relay1Pin = 10;// Connected to relay (LED)
int pbutton2Pin = 3;// connect output to push button
int relay2Pin = 11;// Connected to relay (LED)

int val = LOW; // push value from input pin 

void setup() {
  // Robojax.com code and video tutorial for push button ON and OFF
  Serial.begin(115200);
  pinMode(pbutton1Pin, INPUT_PULLUP); 
  pinMode(relay1Pin, OUTPUT);
  digitalWrite(relay1Pin, HIGH);// keep the load OFF at the begining. If you wanted to be ON, change the HIGH to LOW
  pinMode(pbutton2Pin, INPUT_PULLUP); 
  pinMode(relay2Pin, OUTPUT);
  digitalWrite(relay2Pin, HIGH);// keep the load OFF at the begining. If you wanted to be ON, change the HIGH to LOW
}

void loop() {
  val = digitalRead(pbutton1Pin);// read the push button value
  if (val == LOW) {
    Serial.print("Sensor 1");
    Serial.println(val);
    digitalWrite(relay1Pin, LOW); 
    delay(1000);
  }
  val = digitalRead(pbutton2Pin);// read the push button value
  if (val == LOW) {
    Serial.print("Sensor 2");
    Serial.println(val);
    digitalWrite(relay2Pin, LOW); 
    delay(1000);
  }
  digitalWrite(relay1Pin, HIGH); 
  digitalWrite(relay2Pin, HIGH); 
  delay(100);
}
