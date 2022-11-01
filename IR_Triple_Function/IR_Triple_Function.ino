int sensorpin1 = 1;                
int sensorpin2 = 2;
int sensorpin3 = 3;
int Lsensor;
int Msensor;
int Rsensor;

void setup(){
    Serial.begin(9600);
}

void loop(){
}

int scanner(){ // returns either distance to ball if ball sensed || 100000
    Lsensor = analogRead(sensorpin1);
    Msensor = analogRead(sensorpin2);
    Rsensor = analogRead(sensorpin3);
    int ballSize = 150; //half of the ball, depend on curve
    if((abs(Msensor-Lsensor)>ballSize) && (abs(Msensor-Rsensor)>ballSize)){
      //Serial.println("TENNIS");
      //Serial.println(Msensor); //gives distance to ball -> drive ___ dist to ball
      //delay(1000);
      return Msensor
    }
    else{
      //Serial.println("KEEP SCANNING");
      //delay(1000);
      return 100000
    }
 }
