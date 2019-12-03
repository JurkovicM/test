#include<stdio.h>
//Rovno ramenný trojuhonik
//Miroslav Jurkoviè
int main()
{
	
	int n;
	scanf_s("%d", &n);
	if (n<1 && n>15 || n%2==0)
	{
		printf("Zly vstup");
	}
	else
	{
		int z;
		z = 1;
		int h1;
		h1 = 1;
		int p1;
		p1 = n - 1;
		int h2;
		h2 = n - 1;
		int p2;
		p2 = 1;
		
		for(int q = 1; q <= ((2*n)-1); q++)
		{
			if (z <= n)
			{	
				
				for (int w = 0; w != h1 ; w++)
				{
					putchar('*');
				}
				h1++;
				for (int e = 0; e != p1 ; e++)
				{
					putchar('-');
				}
				p1--;
				

			}
			else
			{
				for (int w = 0; w != h2; w++)
				{
					putchar('*');
				}
				h2--;
				for (int e = 0; e != p2; e++)
				{
					putchar('-');
				}
				p2++;
			}
			printf("\n");
			z++;
		}
	}
	return 0;
}