/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**  NOM: Josep González Martínez                         DATA: 11/02/2019        **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led1 = 7;          // donar nom al pin 7 de l’Arduino
const int led2 = 8;          // donar nom al pin 8 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
const int led6 = 12;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(led1, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);     //Sem A i B vermells
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);   
  
  delay(500);                  
  
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);     //Sem A vermell, B verd
  digitalWrite(led4, LOW);     
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);    
  
  delay(500);                  
 
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);     //Sem A vermell, B verd
  digitalWrite(led4, LOW);     
  digitalWrite(led5, LOW);     
  digitalWrite(led6, HIGH);     

  delay(500);

  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);     //Sem A vermell, B verd
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);    

  delay(500);

  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);     //Sem A vermell, B verd
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, HIGH);    

  delay(500);

  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);     //Sem A vermell, B ambar
  digitalWrite(led4, LOW);    
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, LOW);    

  delay(500);

  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);     //Sem A vermell, B vermell
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    

  delay(500);

  digitalWrite(led1, LOW);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);     //Sem A verd, B vermell
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    

  delay(500);

  digitalWrite(led1, LOW);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);     //Sem A verd, B vermell
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    

  delay(500);

  digitalWrite(led1, LOW);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);     //Sem A verd, B vermell
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    

  delay(500);

  digitalWrite(led1, LOW);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, HIGH);     //Sem A verd, B vermell
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    

  delay(500);

  digitalWrite(led1, LOW);     
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, LOW);     //Sem A ambar, B vermell
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    

  delay(500);

  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);     //Sem A vermell, B vermell
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    

  delay(500);
}
