void main() {
trisb = 0; portb = 0; // B as outbut



 loop:
 
 portb = 0b11111111; //outbut 1 B0



 delay_ms(200);
 
 portb = 0b00000000; //outbut 0 B0

 
 delay_ms(200);
 
 goto loop;
 

}