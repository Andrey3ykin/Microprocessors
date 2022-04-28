#include <8051.h>

void tput(unsigned char c1)
{
SBUF = c1; 
while(!TI); 
TI = 0; 
}
void main()
{
char z;
int i;

unsigned char src[]={'P','r','a','c','t','i','k','a','S','i','x'};

PCON = 0xF8;// F = 19,2 kGc => SMOD = 1 => PCON = 7 => 7 = 0xF8
TMOD = 0x20;
TR1 = 1; 
TH1 = -3;// K
for(i=0; i<11; i++)
{
ACC = src[i]; 
SCON = 0x50;// XX

tput (src[i]);
}
while(1){} 
}