#define LIGHT 13 // define pint 2 for sensor
#define led 15 // define pin 9 as for led
void setup() {
  // Light LDR Sensor Code by Robojax.com 20180210
  Serial.begin(115200);// setup Serial Monitor to display information
  pinMode(LIGHT, INPUT_PULLUP);// define pin as Input  sensor
  pinMode(led, OUTPUT);// define pin as OUTPUT for led
}
void loop() {
  // Light LDR Sensor Code by Robojax.com 20180210
  int L =digitalRead(LIGHT);// read the sensor  
      if(L == 1){
    Serial.println(" light is ON");
    digitalWrite(led,HIGH);// turn the led ON
  }else{
     Serial.println("  === light is OFF");
     digitalWrite(led,LOW);// turn the relay OFF
  }
  delay(500);

}
