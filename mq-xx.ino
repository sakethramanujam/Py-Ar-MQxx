int mq2 = A0;
int mq5 = A1;
int mq9 = A2;
int mq135 = A3;
int mq2_val, mq9_val, mq5_val, mq135_val;

void setup() {
  Serial.begin(9600);
}

void loop() {
  mq2_val = analogRead(mq2);
  mq5_val = analogRead(mq5);
  mq9_val = analogRead(mq9);
  mq135_val = analogRead(mq135);
  Serial.print(mq2_val);
  Serial.print(",");
  Serial.print(mq5_val);
  Serial.print(",");
  Serial.print(mq9_val);
  Serial.print(",");
  Serial.println(mq135_val);
  delay(200);
}
