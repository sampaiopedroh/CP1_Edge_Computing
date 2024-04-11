#define ldr A1
#define ledR 2
#define ledG 4
#define ledB 3
#define som 9
int vldr = 0;

void setup(){
  pinMode(ldr, OUTPUT);
	pinMode(ledR, OUTPUT);
	pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(som, OUTPUT);
  Serial.begin(9600);
}

void vermelho(){
	digitalWrite(ledR, HIGH);
  digitalWrite(ledG, LOW);
	digitalWrite(ledB, LOW);
}

void verde(){
	digitalWrite(ledR, LOW);
	digitalWrite(ledG, HIGH);
	digitalWrite(ledB, LOW);
}

void amarelo(){
	digitalWrite(ledR, HIGH);
	digitalWrite(ledG, HIGH);
	digitalWrite(ledB, LOW);
}

void buzina(){
  tone(som, 200, 3000);
  delay(10000);
}

void loop(){
  noTone(som);
  vldr = analogRead(ldr);
  if(vldr >= 10){
    vermelho();
    buzina();
  }
  else if(vldr < 10 && vldr > 5){
    amarelo();
  }
  else if(vldr <= 5){
    verde();
  }
  Serial.println(vldr);
  delay(100);
}