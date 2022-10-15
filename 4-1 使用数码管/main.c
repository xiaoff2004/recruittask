#include <STC89C5xRC.H>
#include <INTRINS.H>


unsigned char NixieTable[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};


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


void Nixie(unsigned char Location,Number)
{
	switch(Location)		
	{
		case 1:P24=1;P23=1;P22=1;break;
		case 2:P24=1;P23=1;P22=0;break;
		case 3:P24=1;P23=0;P22=1;break;
		case 4:P24=1;P23=0;P22=0;break;
		case 5:P24=0;P23=1;P22=1;break;
		case 6:P24=0;P23=1;P22=0;break;
		case 7:P24=0;P23=0;P22=1;break;
		case 8:P24=0;P23=0;P22=0;break;
	}
	P0=NixieTable[Number];	
//	Delay(1);				
//	P0=0x00;				
}

void main()
{ 
	while(1)
	{
		Nixie(1,5);		
		Delay(5);
		Nixie(2,2);		
		Delay(5);
		Nixie(3,0);		
		Delay(5);
	}
}
