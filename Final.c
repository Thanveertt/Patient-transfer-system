#define RPWM1 5
#define LPWM1 6
#define R_EN1 7
#define L_EN1 8


#define RPWM2 10
#define LPWM2 11
#define R_EN2 3
#define L_EN2 4

const int switch1 = 12;
const int switch2 = 13;

void setup()
{
  pinMode(RPWM1, OUTPUT);
  pinMode(LPWM1, OUTPUT);
  pinMode(R_EN1, OUTPUT);
  pinMode(L_EN1, OUTPUT);

  pinMode(RPWM2, OUTPUT);
  pinMode(LPWM2, OUTPUT);
  pinMode(R_EN2, OUTPUT);
  pinMode(L_EN2, OUTPUT);
  
  pinMode(switch1, INPUT_PULLUP);
  pinMode(switch2, INPUT_PULLUP);

  digitalWrite(R_EN1, HIGH);
  digitalWrite(L_EN1, HIGH);

  digitalWrite(R_EN2, HIGH);
  digitalWrite(L_EN2, HIGH);
}

void loop() 
{
  int switchState1 = digitalRead(switch1);
  int switchState2 = digitalRead(switch2);

  if (switchState1 == LOW)

  {
    analogWrite(RPWM1, 255);

    analogWrite(RPWM2, 255);
  }
  else
  {
    analogWrite(RPWM1, 0);
    analogWrite(RPWM2, 0);
  }

  if (switchState2 == LOW)

  {
    analogWrite(LPWM1, 255);
    analogWrite(LPWM2, 255);
  }
   else
  {
    analogWrite(LPWM1, 0);
    analogWrite(LPWM2, 0);
  }
}
