
int led=12;
int led2=8;
int push1=13;


void setup() {
  pinMode(led,OUTPUT);
  pinMode(push1,INPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(push1)==1){ // if button got pushed once
for(int i=1;i<=5;i++){ //means the light will turn on and off 5 times

    digitalWrite(led,i); //led1
    delay(250);
    
    digitalWrite(led,LOW);
    delay(250);
         
    digitalWrite(led2,i); //led2
    delay(250);
    
    digitalWrite(led2,LOW);
    delay(250);
  }
  }
  }
