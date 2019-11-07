void main() {

  trisb.RA0 = 1; //RA0 AS INBUT
  
  TRISb.RA1 = 0; PORTB.RA1= 0; // RA1 AS OUTBUT
  

   loop:
  
     if (PORTB.RA0 == 0) // IF SWITCH HAS  PRSSED
     {
        portb.RA1 = 1;   //tern on led
      }

  goto loop;
  
}