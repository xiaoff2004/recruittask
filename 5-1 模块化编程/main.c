#include <STC89C5xRC.H>
#include "Delay.h"
#include "nixie.h"


void main()
{
	while(1)
	{		nixie(1,1);
			delay(5);
			nixie(2,2);
			delay(5);
		  nixie(3,3);
			delay(5);
			nixie(4,4);
			delay(5);
	
	}
	
}