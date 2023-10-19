void setup() {

  Serial.begin(9600);
  pinMode(10, 0);
  pinMode(9, 0);
  pinMode(8, 0);
  pinMode(7, 0);
  pinMode(6, 0);
  pinMode(5, 0);
  pinMode(11, 0);
  pinMode(12, 0);
  pinMode(13, 0);
  pinMode(3, 0);
  pinMode(2, 0);

}

void loop() {
  int readValue2 = digitalRead(10);
  int readValue3 = digitalRead(9);
  int readValue4 = digitalRead(8);
  int readValue5 = digitalRead(7);
  int readValue6 = digitalRead(6);
  int readValue7 = digitalRead(5);

if(readValue7 == LOW){
  if(readValue2 == HIGH) {
    tone(4, 987, 100);
  }
  if(readValue3 == HIGH) {
    tone(4, 880, 100);
  }
  if(readValue4 == HIGH) {
    tone(4, 783, 100);
  }
  if(readValue5 == HIGH) {
    tone(4, 698, 100);
  }
  if(readValue6 == HIGH) {
    tone(4, 659, 100);
  } 
}
if(readValue7 == HIGH){
  if(readValue2 == HIGH) {
    tone(4, 987, 100);
    digitalWrite(11, 1);
    delay(300);
    digitalWrite(11, 0);
  }
  if(readValue3 == HIGH) {
    tone(4, 880, 100);
    digitalWrite(12, 1);
    delay(300);
    digitalWrite(12, 0);
  }
  if(readValue4 == HIGH) {
    tone(4, 783, 100);
    digitalWrite(13, 1);
    delay(300);
    digitalWrite(13, 0);
  }
  if(readValue5 == HIGH) {
    tone(4, 698, 100);
    digitalWrite(3, 1);
    delay(300);
    digitalWrite(3, 0);
  }
  if(readValue6 == HIGH) {
    tone(4, 659, 100);
    digitalWrite(2, 1);
    delay(300);
    digitalWrite(2, 0);
  } 
}
}
