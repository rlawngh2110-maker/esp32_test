const int LDR = 14;
const int LED = 26;

int LDRStates = 0;

void setup() {
  Serial.begin(750);
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  int LDRStates = analogRead(LDR);
  Serial.println(LDRStates);

  if (LDRStates < 1000) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

}
