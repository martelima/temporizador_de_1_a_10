#define BTN_PIN 2
#define LED 13
int estado_btn = 0;
void setup() {
  pinMode(BTN_PIN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  int leitura_btn = digitalRead(BTN_PIN);
  if (leitura_btn == 0) {
    estado_btn = !estado_btn;
    delay(500);
  } 
  
  if (estado_btn == 0) {
    digitalWrite(LED, 0);
  }
  if (estado_btn == 1) {
    digitalWrite(LED, 1);
  }

}
