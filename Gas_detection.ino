// scientist BENIEL'S LAB
// GAS DETECTOR

int Input = A0;
int R_LED = 2;
int G_LED = 3;
int Buzzer = 4;
// VAL INTEGER
int val;
int MAX = 400;

void setup() {
  Serial.begin(9600);
  pinMode(Input ,INPUT);
  pinMode(R_LED ,OUTPUT);
  pinMode(G_LED ,OUTPUT);
  pinMode(Buzzer ,OUTPUT);
}

void loop() {
  val = analogRead(A0);
  if (val >= MAX) {
    digitalWrite(R_LED ,HIGH);
    digitalWrite(Buzzer ,HIGH);
    digitalWrite(G_LED ,LOW);
    Serial.println("GAS LEAKING");
  }
  else {
    digitalWrite(R_LED ,LOW);
    digitalWrite(Buzzer ,LOW);
    digitalWrite(G_LED ,HIGH);
    Serial.println("NORMAL");
  }
}
