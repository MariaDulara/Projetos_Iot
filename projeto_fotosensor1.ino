// C++ code
//
int ler_pino_anal_C3_B3gico = 0;

int luminosidade = 0;

int unnamed = 0;

int i = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  luminosidade = analogRead(A0);
  Serial.println(luminosidade);
  if (luminosidade >= 336) {
    digitalWrite(9, LOW);
  } else {
    digitalWrite(9, HIGH);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}