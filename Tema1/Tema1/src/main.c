#include <Arduino.h>
void setup() {
	pinMode(10,OUTPUT);
	pinMode(9,OUTPUT);
	pinMode(8,OUTPUT);
	pinMode(7,OUTPUT);
   	pinMode(6,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(3,INPUT_PULLUP);
    	pinMode(2,INPUT_PULLUP);

}
unsigned int o=10,ok=0;
void loop() {
	
if(o==10)
    digitalWrite(5,HIGH);

if(digitalRead(2) == LOW){ 
    digitalWrite(5,LOW);            //Led-ul RGB devine rosu cand incepe procesul
    digitalWrite(6,HIGH);
        for (int i = 0; i < 4; i++) {
            if(digitalRead(3)==LOW){
                o=10;i=0;ok=0;
                break;
            }
       int q=0;
       while(q<3 && o >=7){             //Incep led-urile sa se incarce
            digitalWrite(o, HIGH);
            delay(250);
            digitalWrite(o, LOW);
            delay(250);
             q++;
        }
        
        if(o >=7)
            digitalWrite(o, HIGH  );        //Ramane ultimul led aprins
        o--;

        if(digitalRead(3) == LOW){          
            delay(100);
            if(digitalRead(3) == LOW){
                i=0;o=10;ok=1;
            }
            
        }
    }   
    if(ok==0){
        for (int i = 0; i < 4; i++) {           //Led-urile incep toate sa se aprinda si stinga
            digitalWrite(10,HIGH);
            digitalWrite(9,HIGH);
            digitalWrite(8,HIGH);
            digitalWrite(7,HIGH);
            delay(300);
            digitalWrite(10,LOW);
            digitalWrite(9,LOW);
            digitalWrite(8,LOW);
            digitalWrite(7,LOW);
            delay(300);
        }
    }else{
            digitalWrite(10,LOW);
            digitalWrite(9,LOW);
            digitalWrite(8,LOW);
            digitalWrite(7,LOW);
    }
                                                //Led-ul RGB devine verde inapoi
        digitalWrite(6,LOW);
        digitalWrite(5,HIGH);
        o=10;
        ok=0;
}
}
