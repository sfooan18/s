void main() {
trisb.b0 = 0; // B0 as outbut



 loop:
 
 portb.b0 = 1; //outbut 1 B0

 delay_ms(200);
 
 portb.b0 = 0; //outbut 0 B0
 
 delay_ms(200);
 
 goto loop;
}