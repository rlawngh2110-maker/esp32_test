#define LED_PIN1 18
#define LED_PIN2 19

unsigned long previousMillis = 0;   // 마지막으로 LED 상태를 바꾼 시간
const long interval = 1000;         // LED 깜빡임 간격 (밀리초)

bool led1State = LOW;
bool led2State = HIGH;

void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  Serial.begin(115200);   // 시리얼 통신 시작
}

void loop() {
  unsigned long currentMillis = millis();

  // 일정 시간(interval)마다 LED 상태를 토글
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    // LED 상태 토글
    led1State = !led1State;
    led2State = !led2State;

    digitalWrite(LED_PIN1, led1State);
    digitalWrite(LED_PIN2, led2State);

    // 상태 출력
    Serial.print("LED1: ");
    Serial.print(led1State ? "ON" : "OFF");
    Serial.print(" | LED2: ");
    Serial.println(led2State ? "ON" : "OFF");
  }

  // 여기서 다른 작업도 동시에 실행 가능
  // ex) 센서 읽기, 데이터 처리 등
}
