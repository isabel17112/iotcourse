int my_button = D1;


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(my_button, INPUT);
}

void loop() {
  int button_status = digitalRead(my_button); 
  if(button_status == LOW) {
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }

}
