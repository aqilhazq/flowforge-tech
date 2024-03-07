#define out 4
#define in 5

void setup() {
  pinMode(out, OUTPUT);
  pinMode(in, INPUT);
}

void loop() {
  int data = digitalRead(in);
  if (data == HIGH){
    digitalWrite(out, HIGH);
    delay(5000);
    digitalWrite(out, LOW);
  }
  else{
    digitalWrite(out, LOW);
  }
}
