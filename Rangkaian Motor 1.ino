
int ldr = A0;
int datasensor;
int pinEnable = 4;
int motorin1 = 5;
int motorin2 = 6;


void setup()
{
  pinMode(ldr, INPUT);
  pinMode(3, OUTPUT);
  pinMode(pinEnable, OUTPUT);
  pinMode(motorin1, OUTPUT);
  pinMode(motorin2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  datasensor = analogRead(ldr);
  Serial.println(datasensor);
  if(datasensor >= 300){
    digitalWrite(3, HIGH);
    digitalWrite(pinEnable, HIGH);
    digitalWrite(motorin1, HIGH);
    digitalWrite(motorin2, LOW);
  }
  else{
    digitalWrite(3, LOW);
    digitalWrite(motorin1, LOW);
    digitalWrite(motorin2, LOW);
  }
}