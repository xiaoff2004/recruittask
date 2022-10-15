#include <STC89C5xRC.H>
#include <INTRINS.H>

void Delayxms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
		xms--;
}


void main(){
	while(1){
		P20=0;
		Delayxms(500);
		P21=0;
		Delayxms(500);
		P22=0;
		Delayxms(400);
		P23=0;
		Delayxms(400);
		P24=0;
		Delayxms(300);
		P25=0;
		Delayxms(300);
		P26=0;
		Delayxms(200);
		P27=0;
		Delayxms(200);
		P27=1;
		Delayxms(100);
		P26=1;
		Delayxms(90);
		P25=1;
		Delayxms(80);
		P24=1;
		Delayxms(70);
		P23=1;
		Delayxms(60);
		P22=1;
		Delayxms(50);
		P21=1;
		Delayxms(40);
		P20=1;
		Delayxms(30);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		


	}
	
		
}