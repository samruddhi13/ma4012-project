int sensorpin = 0;                 // analog pin used to connect the sharp sensor
int val = 0;                 // variable to store the values from sensor(initially zero)
int ballTime = 0;
int checkBallTime =0;
int tennisState;

void setup(){
    Serial.begin(9600);
}

void loop(){
  switch(tennisState){
    case 0://initial state
      val = analogRead(sensorpin);
      if(270>val>230){
        tennisState = 1;
        ballTime = millis();
      }
      break;
    case 1://eval state
      if(millis()-ballTime>999) tennisState = 2;
      if(val>270 || ) tennisState = 0;
      break;
    case 2://value accepted
      Serial.println("TENNIS");
  }
}
