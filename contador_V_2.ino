#define BTN_PIN 2
#define LED 4

#define Ad 13
#define Bd 12
#define Cd 11
#define Dd 10
#define Ed 9
#define Fd 8
#define Gd 7
#define Be 6
#define Ce 5

#define ON 0
#define OFF 1

int estado_btn = 0;
int Memoria = 0;
void setup() {
  pinMode(Ad, OUTPUT);
  pinMode(Bd, OUTPUT);
  pinMode(Cd, OUTPUT);
  pinMode(Dd, OUTPUT);
  pinMode(Ed, OUTPUT);
  pinMode(Fd, OUTPUT);
  pinMode(Gd, OUTPUT);
  pinMode(Be, OUTPUT);
  pinMode(Ce, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Memoria = 0;
}
void loop() {
  int leitura_btn = digitalRead(BTN_PIN);
  if (leitura_btn == 0) {
    Memoria++;
    Serial.println (Memoria);
    digitalWrite(LED, 1);
    switch (Memoria) {
      case 0: {
          digitalWrite(Ad, ON);
          digitalWrite(Bd, ON);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, ON);
          digitalWrite(Ed, ON);
          digitalWrite(Fd, ON);
          digitalWrite(Gd, OFF);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF);
          break;
        }
      case 1: {
          digitalWrite(Ad, OFF);
          digitalWrite(Bd, ON);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, OFF);
          digitalWrite(Ed, OFF);
          digitalWrite(Fd, OFF);
          digitalWrite(Gd, OFF);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF); break;
        }
      case 2: {
          digitalWrite(Ad, ON);
          digitalWrite(Bd, ON);
          digitalWrite(Cd, OFF);
          digitalWrite(Dd, ON);
          digitalWrite(Ed, ON);
          digitalWrite(Fd, OFF);
          digitalWrite(Gd, ON);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF); break;
        }
      case 3: {
          digitalWrite(Ad, ON);
          digitalWrite(Bd, ON);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, ON);
          digitalWrite(Ed, OFF);
          digitalWrite(Fd, OFF);
          digitalWrite(Gd, ON);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF); break;
        }
      case 4: {
          digitalWrite(Ad, OFF);
          digitalWrite(Bd, ON);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, OFF);
          digitalWrite(Ed, OFF);
          digitalWrite(Fd, ON);
          digitalWrite(Gd, ON);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF);
          break;
        }
      case 5: {
          digitalWrite(Ad, ON);
          digitalWrite(Bd, OFF);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, ON);
          digitalWrite(Ed, OFF);
          digitalWrite(Fd, ON);
          digitalWrite(Gd, ON);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF);
          break;
        }
      case 6: {
          digitalWrite(Ad, ON);
          digitalWrite(Bd, OFF);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, ON);
          digitalWrite(Ed, ON);
          digitalWrite(Fd, ON);
          digitalWrite(Gd, ON);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF);
          break;
        }
      case 7: {
          digitalWrite(Ad, ON);
          digitalWrite(Bd, ON);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, OFF);
          digitalWrite(Ed, OFF);
          digitalWrite(Fd, OFF);
          digitalWrite(Gd, OFF);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF);
          break;
        }
      case 8: {
          digitalWrite(Ad, ON);
          digitalWrite(Bd, ON);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, ON);
          digitalWrite(Ed, ON);
          digitalWrite(Fd, ON);
          digitalWrite(Gd, ON);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF);
          break;
        }
      case 9: {
          digitalWrite(Ad, ON);
          digitalWrite(Bd, ON);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, ON);
          digitalWrite(Ed, OFF);
          digitalWrite(Fd, ON);
          digitalWrite(Gd, ON);

          digitalWrite(Be, OFF);
          digitalWrite(Ce, OFF);
          break;
        }
      case 10: {
          digitalWrite(Ad, ON);
          digitalWrite(Bd, ON);
          digitalWrite(Cd, ON);
          digitalWrite(Dd, ON);
          digitalWrite(Ed, ON);
          digitalWrite(Fd, ON);
          digitalWrite(Gd, OFF);

          digitalWrite(Be, ON);
          digitalWrite(Ce, ON);
          break;
        }
      default: {
          break;
        }

    }
    delay(1000);
  } else {
    Memoria = 0;

    digitalWrite(LED, 0);

    digitalWrite(Ad, ON);
    digitalWrite(Bd, ON);
    digitalWrite(Cd, ON);
    digitalWrite(Dd, ON);
    digitalWrite(Ed, ON);
    digitalWrite(Fd, ON);
    digitalWrite(Gd, OFF);

    digitalWrite(Be, OFF);
    digitalWrite(Ce, OFF);
    Serial.println (Memoria);
    delay(1000);
  }
  if (Memoria >= 10) {
    Memoria = 0;
    digitalWrite(LED, 0);
    digitalWrite(Ad, ON);
    digitalWrite(Bd, ON);
    digitalWrite(Cd, ON);
    digitalWrite(Dd, ON);
    digitalWrite(Ed, ON);
    digitalWrite(Fd, ON);
    digitalWrite(Gd, OFF);

    digitalWrite(Be, OFF);
    digitalWrite(Ce, OFF);
    Serial.println (Memoria);
    delay(1000);
  }

}
