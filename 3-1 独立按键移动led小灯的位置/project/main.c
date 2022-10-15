#include <STC89C5xRC.H>


void Delay100ms()		//@11.0592MHz
{
	unsigned char i, j;

	i = 180;
	j = 73;
	do
	{
		while (--j);
	} while (--i);
}

void main()
{  char a;
	 P2=~0x01;
	while(1)
	{if(P32==0||P33==0)
			{	Delay100ms();
				while(P30==0||P31==0);
				Delay100ms();
				a++;
				if(a>=8)
				{a=0;}
				P2=~(0x01<<a);
		}
		else if(P30==0||P31==0)
			{		Delay100ms();
				while(P32==0||P33==0);
				Delay100ms();
				a--;
				if(a<0){a=7;}
				P2=~(0x01<<a);
		}
		
		
	
	
	
	}








}



