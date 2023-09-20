#define PIN_LED 7
unsigned int count,toggle;  

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED , OUTPUT)
  ;Serial.begin(115220);

}

void loop() {
  digitalWrite(PIN_LED, LOW);
  delay(1000);
  for (int j=1; j<6; j++){;
    digitalWrite(PIN_LED,HIGH);
    delay(100);
    digitalWrite(PIN_LED, LOW);
    delay(100);
  }
  digitalWrite(PIN_LED,HIGH);
  while(1){};
}

int toggle_state(int toggle){
  if(toggle==1)
    return 0;
  else return 1;
    return toggle;
}
