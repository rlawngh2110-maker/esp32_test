const int buttonpin = 2;
const int ledpin = 0;

int buttonstates = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonpin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop(){
  buttonstates = digitalRead(buttonpin);
  Serial.println(buttonstates);

  if (buttonstates == LOW) {
    Serial.println("Button not pressed");
    digitalWrite(ledpin, LOW);

  } else {
    Serial.println("Button pressed");
    digitalWrite(ledpin, HIGH);
  }
}