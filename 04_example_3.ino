#define PIN_LED 13
unsigned int count,toggle;  

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED , OUTPUT)
  ;Serial.begin(115220);
  while (!Serial){
    ;
  }
  Serial.println("Hello World");
  count=toggle=0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED,toggle);
  delay(1000);

  // put your main code here, to run repeatedly:

}

int toggle_state(int toggle){
  if(toggle==1)
    return 0;`
  else return 1;
  return toggle;
}
