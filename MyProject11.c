

//Define Matrix Character Information as 8 byte array
unsigned char font[8]={0x3E,0x7e,0xC8,0xC8,0x7E,0x3E,0x00,0x00}; // A
unsigned char row_select[8]={1,2,4,8,16,32,64,128};
unsigned char i ;
 void main ()
{
TRISB=0;
TRISC=0;
PORTB=0;
PORTC=0;

  while(1)
  {
   for(i=0 ; i<8 ; I++)
   {
   PORTB=row_select[i]; //select row as array element
   PORTC=~font[i];//send data to port C as array element
   delay_ms(5); // short delay
  }
      }
}