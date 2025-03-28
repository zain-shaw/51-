#include <REGX52.H>
#include <INTRINS.H>//Add a header file to define nop
void Delay500ms()		 //@11.0592MHz
{                         //Set a half second loop
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
}

void main()
{
	
	while(1)
	{
		P2=0xEF;
		Delay500ms();//Use declared functions
		P2=0xFF;
		Delay500ms();
	}
}