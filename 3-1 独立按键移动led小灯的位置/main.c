#include <STC89C5xRC.H>

#include <STC89C5xRC.H>
#include <INTRINS.H>

void Delay(unsigned int xms)
{
	unsigned char i, j;
	while(xms--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}


void main(){
	while(1){
		P20=0;
			Delayxms(50);
		P21=0;
			Delayxms(50);
		P22=0;
			Delayxms(50);
		P23=0;
			Delayxms(50);
		P24=0;
			Delayxms(50);
		P25=0;
			Delayxms(50);
		P26=0;
			Delayxms(50);
		P27=0;
			Delayxms(50);
		P27=1;
		Delayxms(100);
		P26=1;
			Delayxms(50);
		P25=1;
			Delayxms(50);
		P24=1;
			Delayxms(50);
		P23=1;
			Delayxms(50);
		P22=1;
			Delayxms(50);
		P21=1;
			Delayxms(50);
		P20=1;
			Delayxms(50);

	}
	
		
}