#include <REGX52.H>
#include <INTRINS.H>
void Delay1ms(unsigned int ms)		//@11.0592MHz
{                                           //Use non-negative integer ms
	while(ms)                              //When ms is true, go through a loop and subtract one
	{                                        //Therefore, you can customize the interval length
		unsigned char i, j;

		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		ms--;
	}
}
	

void main()
{
while(1)
{
	P2=0XFE;
	Delay1ms(500);
	P2=0XFD;
	Delay1ms(1000);
	P2=0XFB;
	Delay1ms(500);
	P2=0XF7;
	Delay1ms(1000);
	P2=0XEF;
	Delay1ms(500);
	P2=0XDF;
	Delay1ms(300);
	P2=0XBF;
	Delay1ms(200);
	P2=0X7F;
	Delay1ms(100);
	
}
}