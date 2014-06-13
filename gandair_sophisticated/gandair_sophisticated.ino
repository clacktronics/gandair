
  int please_count,only_once;
  unsigned long mark_point,time_since_trigger;
  
  void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, INPUT);
  digitalWrite(11,1);
  digitalWrite(13,0);
  digitalWrite(12,0);
  

}

void loop()
{


 
 time_since_trigger = millis() - mark_point ;
  
  if(digitalRead(11) == 0 & !only_once ) {
    
                  digitalWrite(13,1);
                  digitalWrite(12,1);
                  mark_point = millis();
                  only_once = 1;
                  please_count = 1;
                            
                            }
  else if (digitalRead(11) == 1 & only_once ) { 
                  only_once = 0;
                            }
                            
  if( time_since_trigger >= 3800000 & please_count ) //
                {                   
                  digitalWrite(13,0);
                  digitalWrite(12,0);
                  please_count = 0;
                } 
                
}
