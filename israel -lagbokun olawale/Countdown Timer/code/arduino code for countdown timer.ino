int digit[10] = {0b0111111, 0b0000110, 0b1011011, 0b1001111, 0b1100110, 0b1101101, 0b1111101, 0b0000111, 0b1111111, 0b1101111};

          int digit1, digit2;  
  
           void setup()   
         {  
           for (int a = 2; a < 9; a++)   
             {  
              pinMode(a, OUTPUT);  
             }  
              pinMode(12, OUTPUT);  
              pinMode(13, OUTPUT);  
         }   
          void loop() {  
             for (int c = 30; c >= 0; c--)   
              {  
                digit2 = c / 10;  
                 digit1 = c % 10;  
            for ( int o = 0; o < 30; o++)  
             {  
               digitalWrite(12, HIGH);  
               digitalWrite(13, LOW);  
               dis(digit2);  
               delay(10);  
               digitalWrite(13, HIGH);  
               digitalWrite(12, LOW);  
               dis(digit1);  
               delay(10);  
           }   
         }  
        }  
         void dis(int num)   
          {  
            for (int a = 2; a < 9; a++)   
             {  
              digitalWrite(a, bitRead(digit[num], a - 2));   
             }  
          }
