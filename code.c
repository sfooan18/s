/******************************************************
LED Matrix Display  , MIKROC , Basic Program
Display one fixed led : led
Rows scanning = PORTB connected to anodes ,
Data connected to PORTC , cathodes
*******************************************************/

//led Bits Information as 8 byte array
//{0b00111110,0b01111110,0b11001000,0b11001000,0b01111110,0b00111110,0b00000000,0b00000000}, // led
 signed int led[8]; //8
signed int i=4 ;
 signed int j=0;
 signed int A=0;
void main ()
{

TRISD=0XFF;


TRISB=0;
TRISC=0;

PORTB=0B00010000;


  while(1)
  {
  A++;
   if(A>2)
  {
   PORTB=PORTB <<1;
  }
  if(A>2)
  {
    PORTB=PORTB <<0;
    }

   if(A<2)
   {
    PORTB=PORTB >>2;
   }
   if(A<3)
   {
    PORTB=PORTB >>1;
   }

   
  j++;
  if(j<9)
  {
   if(PORTD.RD0==0)
   {
   i++;
      if(i>8)
   {
   PORTB=0b01000000;
   }
   
   
   
   PORTB = PORTB <<1;

   delay_ms(250);
   }

   if(PORTD.RD1==0)
   {
   i--;
      if(i<3)
   {
   PORTB=0b00000010;
   }
   
   PORTB = PORTB >>1;
   delay_ms(250);
   }


     if(j<9)
   {
   led[0]=portb;
   }
  PORTC=0b10000000;       //Send inverse led data byte
  delay_ms(250);
  ///------------------------------
   if(PORTD.RD0==0)
   {
   i++;
   if(i>8)
   {
   PORTB=0b01000000;
   }
   PORTB = PORTB <<1;
   delay_ms(250);
   }
   if(PORTD.RD1==0)
   {
   i--;
      if(i<3)
   {
   PORTB=0b00000010;
   }
   PORTB = PORTB>>1;
   delay_ms(250);
   }

      if(j<8)
   {
   led[1]=portb;
   }
  PORTC=0b01000000;       //Send inverse led data byte
  delay_ms(250);
  ///------------------------------
       if(PORTD.RD0==0)
   {
   i++;
    if(i>8)
   {
   PORTB=0b01000000;
   }
   PORTB = PORTB <<1;
   delay_ms(250);
   }
   if(PORTD.RD1==0)
   {
    i--;
      if(i<3)
   {
   PORTB=0b00000010;
   }
   PORTB = PORTB >>1;
   delay_ms(250);
   }

        if(j<7)
   {
   led[2]=portb;
   }
  PORTC=0b00100000;       //Send inverse led data byte
  delay_ms(250);
  ///------------------------------
        if(PORTD.RD0==0)
   {
   i++;
   if(i>8)
   {
   PORTB=0b01000000;
   }
   PORTB = PORTB <<1;
   delay_ms(250);
   }
   if(PORTD.RD1==0)
   {
   i--;
      if(i<3)
   {
   PORTB=0b00000010;
   }
   PORTB = PORTB >>1;
   delay_ms(250);
   }

       if(j<6)
   {
   led[3]=portb;
   }
  PORTC=0b00010000;       //Send inverse led data byte
  delay_ms(250);
   ///------------------------------
        if(PORTD.RD0==0)
   {
   i++;
   if(i>8)
   {
   PORTB=0b01000000;
   }
   PORTB = PORTB <<1;
   delay_ms(250);
   }
   if(PORTD.RD1==0)
   {
    i--;
      if(i<3)
   {
   PORTB=0b00000010;
   }
   PORTB = PORTB >>1;
   delay_ms(250);
   }

      if(j<5)
   {
   led[4]=portb;
   }
  PORTC=0b00001000;       //Send inverse led data byte
  delay_ms(250);
   ///------------------------------
          if(PORTD.RD0==0)
   {
   i++;
   if(i>8)
   {
   PORTB=0b01000000;
   }
   PORTB = PORTB <<1;
   delay_ms(250);
   }
   if(PORTD.RD1==0)
   {
   i--;
      if(i<3)
   {
   PORTB=0b00000010;
   }
   PORTB = PORTB >>1;
   delay_ms(250);
   }

   if(j<4)
   {
   led[5]=portb;
   }
  PORTC=0b00000100;       //Send inverse led data byte
  delay_ms(250);
  ///------------------------------
         if(PORTD.RD0==0)
   {
   i++;
    if(i>8)
   {
   PORTB=0b01000000;
   }
   PORTB = PORTB <<1;
   delay_ms(250);
   }
   if(PORTD.RD1==0)
   {
    i--;
      if(i<3)
   {
   PORTB=0b00000010;
   }
   PORTB = PORTB >>1;
   delay_ms(250);
   }

   if(j<3)
   {
   led[6]=portb;
   }
  PORTC=0b00000010;       //Send inverse led data byte
  delay_ms(250);
  ///------------------------------
        if(PORTD.RD0==0)
   {
    i++;
    if(i>8)
   {
   PORTB=0b01000000;
   }
   PORTB = PORTB <<1;
   delay_ms(250);
   }
   if(PORTD.RD1==0)
   {
   i--;
      if(i<3)
   {
   PORTB=0b00000010;
   }
   PORTB = PORTB >>1;
   delay_ms(250);
   }

   if(j<2)
   {
   led[7]=portb;
   }
  PORTC=0b00000001;       //Send inverse led data byte
  delay_ms(250);
  }


  while(j>8)
  {
  PORTC=0b10000000;
  PORTB=LED[7];
    delay_ms(1);
  PORTC=0b01000000;
  PORTB=LED[6];
   delay_ms(1);
  PORTC=0b00100000;
  PORTB=LED[5];
    delay_ms(1);
  PORTC=0b00010000;
  PORTB=LED[4];
    delay_ms(1);
  PORTC=0b00001000;
  PORTB=LED[3];
    delay_ms(1);
  PORTC=0b00000100;
  PORTB=LED[2];
   delay_ms(1);
  PORTC=0b00000010;
  PORTB=LED[1] ;
    delay_ms(1);
  PORTC=0b00000001;
  PORTB=LED[0] ;
   delay_ms(1);
  }

}
}