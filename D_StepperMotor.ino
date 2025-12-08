/**/

int stepSequence[8][4] = { {1, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 1, 0}, {0, 0, 1, 0}, {0, 0, 1, 1}, {0, 0, 0, 1}, {1, 0, 0, 1} };

int stepCount = 8;         // 8-step sequence
int delayTime = 3;         // Speed (lower = faster)

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // Rotate forward
  for (int i = 0; i < 512; i++) {   // 512 steps ≈ 1 full rotation
    stepMotor(i % stepCount);
    delay(delayTime);
  }

  delay(500);

  // Rotate backward
  for (int i = 512; i > 0; i--) {
    stepMotor(i % stepCount);
    delay(delayTime);
  }

  delay(500);
}

// Function to energize coils
void stepMotor(int stepIndex) {
  digitalWrite(IN1, stepSequence[stepIndex][0]);
  digitalWrite(IN2, stepSequence[stepIndex][1]);
  digitalWrite(IN3, stepSequence[stepIndex][2]);
  digitalWrite(IN4, stepSequence[stepIndex][3]);
}
