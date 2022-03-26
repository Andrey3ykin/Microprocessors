#include <8051.h>
void main()
{
	unsigned char i,j; 
	unsigned char massiv [11]=
	{
	   0x90,
       0x80,
       0xF8,
       0x82,
       0x92,
       0x99,
       0xB0,
       0xA4,
       0xF9,
       0xC0,
       0xFF
	};

	P1=massiv [10]; 	

	while(1)
	{
		if(P30 == 1)
			for(i=0;i<10;i++) 
			{
				P2=massiv[i]; 
				//delay
				for(j=0;j<100;j++)
					continue;
			}
		P2=massiv[10];
	}
}