#define led 11

void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
 
for(int i=0;i<255;i++){
  analogWrite(led,i);
  delay(100);
  }
  for(int j=255;j>0;j--){
    analogWrite(led,j);
    delay(100);
  }
}
