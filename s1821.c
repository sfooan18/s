void main()
 {
   trisb.b0 = 1; // B0 as input
   trisb.b7 = 0; portb.b7 = 0; //B7 as outbut

   loop:

    if(portb.b0 == 0) //if switch has prssed
    {
       portb.b7 = 1;   //turn on led
    }

    goto loop;
  }