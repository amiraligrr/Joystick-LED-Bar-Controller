


void setup() {
  pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
pinMode(A1,INPUT);
pinMode(53,INPUT);
Serial.begin(9600);
digitalWrite(53,1);
digitalWrite(A0,1);
}
void loop() {
if(analogRead(A1)<147&&analogRead(A1)>-1)
 {
   digitalWrite(8,1);
    digitalWrite(2,0);
     digitalWrite(3,0);
      digitalWrite(4,0);
       digitalWrite(5,0);
        digitalWrite(6,0);
         digitalWrite(7,0);
   
  }
  else
  {
   digitalWrite(8,0);
  
}

  

if(analogRead(A1)<294&&analogRead(A1)>147)
 {
   digitalWrite(8,0);
    digitalWrite(2,1);
     digitalWrite(3,0);
      digitalWrite(4,0);
       digitalWrite(5,0);
        digitalWrite(6,0);
         digitalWrite(7,0);
   
  }
  else
  {
   digitalWrite(2,0);
  
}
if(analogRead(A1)<441&&analogRead(A1)>294)
 {
   digitalWrite(8,0);
    digitalWrite(2,0);
     digitalWrite(3,1);
      digitalWrite(4,0);
       digitalWrite(5,0);
        digitalWrite(6,0);
         digitalWrite(7,0);
   
  }
  else
  {
   digitalWrite(3,0);
  
}
if(analogRead(A1)<588&&analogRead(A1)>441)
 {
   digitalWrite(8,0);
    digitalWrite(2,0);
     digitalWrite(3,0);
      digitalWrite(4,1);
       digitalWrite(5,0);
        digitalWrite(6,0);
         digitalWrite(7,0);
   
  }
  else
  {
   digitalWrite(4,0);
  
}
if(analogRead(A1)<735&&analogRead(A1)>588)
 {
   digitalWrite(8,0);
    digitalWrite(2,0);
     digitalWrite(3,0);
      digitalWrite(4,0);
       digitalWrite(5,1);
        digitalWrite(6,0);
         digitalWrite(7,0);
   
  }
  else
  {
   digitalWrite(5,0);
  
}
if(analogRead(A1)<879&&analogRead(A1)>735)
 {
   digitalWrite(8,0);
    digitalWrite(2,0);
     digitalWrite(3,0);
      digitalWrite(4,0);
       digitalWrite(5,0);
        digitalWrite(6,1);
         digitalWrite(7,0);
   
  }
  else
  {
   digitalWrite(6,0);
  
}
if(analogRead(A1)<1024&&analogRead(A1)>879)
 {
   digitalWrite(8,0);
    digitalWrite(2,0);
     digitalWrite(3,0);
      digitalWrite(4,0);
       digitalWrite(5,0);
        digitalWrite(6,0);
         digitalWrite(7,1);
   
  }
  else
  {
   digitalWrite(7,0);
  
}
if(digitalRead(53)==0)
 {
   digitalWrite(8,0);
    digitalWrite(2,0);
     digitalWrite(3,0);
      digitalWrite(4,0);
       digitalWrite(5,0);
        digitalWrite(6,0);
         digitalWrite(7,0);
          digitalWrite(8,1);
         delay(0.2);
                  digitalWrite(8,0);
                   digitalWrite(2,1);
                            delay(100);
                  digitalWrite(2,0);
                   digitalWrite(3,1);
                
                            delay(100);
                  digitalWrite(3,0);
                   digitalWrite(4,1);
                 
                            delay(100);
                  digitalWrite(4,0);
                   digitalWrite(5,1);
                            delay(100);
                  digitalWrite(5,0);
                   digitalWrite(6,1);
                            delay(100);
                  digitalWrite(6,0);
                   digitalWrite(7,1);
                            delay(100);
                  digitalWrite(7,0);
                   digitalWrite(6,1);
                            delay(100);
                  digitalWrite(6,0);
                   digitalWrite(5,1);
                            delay(100);
                  digitalWrite(5,0);
                   digitalWrite(4,1);
                            delay(100);
                  digitalWrite(4,0);
                   digitalWrite(3,1);
                            delay(100);
                  digitalWrite(3,0);
                   digitalWrite(2,1);
                            delay(100);
                  digitalWrite(2,0);
                   digitalWrite(8,1);
                   delay(100);
  digitalWrite(8,1);
    digitalWrite(2,1);
     digitalWrite(3,1);
      digitalWrite(4,1);
       digitalWrite(5,1);
        digitalWrite(6,1);
         digitalWrite(7,1);
         delay(1000);
   digitalWrite(8,0);
    digitalWrite(2,0);
     digitalWrite(3,0);
      digitalWrite(4,0);
       digitalWrite(5,0);
        digitalWrite(6,0);
         digitalWrite(7,0);
          delay(1000);
          digitalWrite(8,1);
    digitalWrite(2,1);
     digitalWrite(3,1);
      digitalWrite(4,1);
       digitalWrite(5,1);
        digitalWrite(6,1);
         digitalWrite(7,1);
         delay(1000);
   digitalWrite(8,0);
    digitalWrite(2,0);
     digitalWrite(3,0);
      digitalWrite(4,0);
       digitalWrite(5,0);
        digitalWrite(6,0);
         digitalWrite(7,0);
          delay(1000);
   
  }
}
void re()
{
  Serial.println(A1);
  delay(500);
  
}
