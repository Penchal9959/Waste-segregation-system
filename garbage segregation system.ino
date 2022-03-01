    #include <SimpleTimer.h>
    #include <Servo.h>
    #define ir3 8
    #define ir1 12
    #define ir2 11
    #define mois A1 // moisture
    #define buzzer 3
    int wet=0,moisture=0,object;
    Servo myservo1;
    //Servo myservo2; 
    void setup() 
    {
     Serial.begin(9600);
     pinMode(ir1,INPUT);
     pinMode(ir2,INPUT);
     pinMode(ir3,INPUT);
     pinMode(mois,INPUT);
     pinMode(buzzer,OUTPUT);
     myservo1.attach(6);                        // attaches the servo on pin  to the servo object
     //myservo1.write(0);
     myservo1.write(45);
     //myservo2.attach(9);
     //myservo2.write(0);  
    }
    void loop() 
    {
       moisture=analogRead(mois);
       Serial.print("......moisture = ");
       Serial.println(moisture);
       delay(500);
       moisture=analogRead(mois);
       int irvalue1 = digitalRead(ir1);
       int irvalue2 = digitalRead(ir2);
       int irvalue3 = digitalRead(ir3);
//
//      if(irvalue3 == 0)
//      {
//         myservo2.write(0);
//         delay(1000);
//         
//         
//      }
//
//      if(irvalue3 == 1)
//      {
//        myservo2.write(90);
//        delay(1000);
//      }
//////////////////////////////////////////////////////////////////////////////////////////       
      if(irvalue1 == 0)
    {
      digitalWrite(buzzer, HIGH);
      delay(2000);
      //Serial.println("Dry Dust FULL"); 
    }     
      else
      {
         digitalWrite(buzzer, LOW);
         delay(500);
         //Serial.println("Dry Dust EMPTY");
      }   
  
   if(irvalue2 == 0)
  {
      digitalWrite(buzzer, HIGH);
      delay(2000);
      //Serial.println("WET Dust FULL");

  }
     else
      {
         digitalWrite(buzzer, LOW);
         delay(500);
         //Serial.println("WET Dust EMPTY");
      }
 


///////////////////////////////////////////////////////////////////////////////////////////////////////////


 if(irvalue3 == 0)
 {     //moisture=analogRead(mois);
        if(moisture>990)                        
      {
         Serial.println(" WET  GARBAGE");
         myservo1.write(0);
         delay(5000);
         myservo1.write(50);
         delay(2000);
      
       }
       else if(moisture<989)
       {  
          Serial.print(" dry  GARBAGE");
          myservo1.write(95); 
          delay(5000);
         myservo1.write(50);
          delay(2000);
         
       }    
      }
    }
 
