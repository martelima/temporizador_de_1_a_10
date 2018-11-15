#define BTN_PIN 2
#define LED 4
int estado_btn = 0;
#define Ad 13
#define Bd 12
#define Cd 11
#define Dd 10
#define Ed 9
#define Fd 8
#define Gd 7
#define Be 6
#define Ce 5

#define tempo 1000

#define ON 0
#define OFF 1



void setup() {
  pinMode(BTN_PIN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  pinMode(Ad, OUTPUT);
  pinMode(Bd, OUTPUT);
  pinMode(Cd, OUTPUT);
  pinMode(Dd, OUTPUT);
  pinMode(Ed, OUTPUT);
  pinMode(Fd, OUTPUT);
  pinMode(Gd, OUTPUT);
  pinMode(Be, OUTPUT);
  pinMode(Ce, OUTPUT);
}

void contador() {
  //digito 1
  digitalWrite(Ad, OFF);
  digitalWrite(Bd, ON);
  digitalWrite(Cd, ON);
  digitalWrite(Dd, OFF);
  digitalWrite(Ed, OFF);
  digitalWrite(Fd, OFF);
  digitalWrite(Gd, OFF);

  digitalWrite(Be, OFF);
  digitalWrite(Ce, OFF);
  delay(tempo);
  //digito 2
  digitalWrite(Ad, ON);
  digitalWrite(Bd, ON);
  digitalWrite(Cd, OFF);
  digitalWrite(Dd, ON);
  digitalWrite(Ed, ON);
  digitalWrite(Fd, OFF);
  digitalWrite(Gd, ON);

  digitalWrite(Be, OFF);
  digitalWrite(Ce, OFF);
  delay(tempo);
  //digito 3
  digitalWrite(Ad, ON);
  digitalWrite(Bd, ON);
  digitalWrite(Cd, ON);
  digitalWrite(Dd, ON);
  digitalWrite(Ed, OFF);
  digitalWrite(Fd, OFF);
  digitalWrite(Gd, ON);

  digitalWrite(Be, OFF);
  digitalWrite(Ce, OFF);
  delay(tempo);
  //DIGITO 4
  digitalWrite(Ad, OFF);
  digitalWrite(Bd, ON);
  digitalWrite(Cd, ON);
  digitalWrite(Dd, OFF);
  digitalWrite(Ed, OFF);
  digitalWrite(Fd, ON);
  digitalWrite(Gd, ON);

  digitalWrite(Be, OFF);
  digitalWrite(Ce, OFF);
  delay(tempo);
  //DIGITO 5
  digitalWrite(Ad, ON);
  digitalWrite(Bd, OFF);
  digitalWrite(Cd, ON);
  digitalWrite(Dd, ON);
  digitalWrite(Ed, OFF);
  digitalWrite(Fd, ON);
  digitalWrite(Gd, ON);

  digitalWrite(Be, OFF);
  digitalWrite(Ce, OFF);
  delay(tempo);
  //DIGITO 6
  digitalWrite(Ad, ON);
  digitalWrite(Bd, OFF);
  digitalWrite(Cd, ON);
  digitalWrite(Dd, ON);
  digitalWrite(Ed, ON);
  digitalWrite(Fd, ON);
  digitalWrite(Gd, ON);

  digitalWrite(Be, OFF);
  digitalWrite(Ce, OFF);
  delay(tempo);
  //DIGITO 7
  digitalWrite(Ad, ON);
  digitalWrite(Bd, ON);
  digitalWrite(Cd, ON);
  digitalWrite(Dd, OFF);
  digitalWrite(Ed, OFF);
  digitalWrite(Fd, OFF);
  digitalWrite(Gd, OFF);

  digitalWrite(Be, OFF);
  digitalWrite(Ce, OFF);
  delay(tempo);
  //DIGITO 8
  digitalWrite(Ad, ON);
  digitalWrite(Bd, ON);
  digitalWrite(Cd, ON);
  digitalWrite(Dd, ON);
  digitalWrite(Ed, ON);
  digitalWrite(Fd, ON);
  digitalWrite(Gd, ON);

  digitalWrite(Be, OFF);
  digitalWrite(Ce, OFF);
  delay(tempo);
  //DIGITO9
  digitalWrite(Ad, ON);
  digitalWrite(Bd, ON);
  digitalWrite(Cd, ON);
  digitalWrite(Dd, ON);
  digitalWrite(Ed, OFF);
  digitalWrite(Fd, ON);
  digitalWrite(Gd, ON);

  digitalWrite(Be, OFF);
  digitalWrite(Ce, OFF);
  delay(tempo);
  //DIGITO 10
  digitalWrite(Ad, ON);
  digitalWrite(Bd, ON);
  digitalWrite(Cd, ON);
  digitalWrite(Dd, ON);
  digitalWrite(Ed, ON);
  digitalWrite(Fd, ON);
  digitalWrite(Gd, OFF);

  digitalWrite(Be, ON);
  digitalWrite(Ce, ON);
  delay(tempo);
  loop();
}
void loop() {
  int leitura_btn = digitalRead(BTN_PIN);
 

  if (leitura_btn == 1) {
    digitalWrite(LED, LOW);
    digitalWrite(Ad, ON);
    digitalWrite(Bd, ON);
    digitalWrite(Cd, ON);
    digitalWrite(Dd, ON);
    digitalWrite(Ed, ON);
    digitalWrite(Fd, ON);
    digitalWrite(Gd, OFF);

    digitalWrite(Be, ON);
    digitalWrite(Ce, ON);
  }
  if (leitura_btn == 0) {
    digitalWrite(LED, HIGH);
    delay(10);
    contador();

  }

}
