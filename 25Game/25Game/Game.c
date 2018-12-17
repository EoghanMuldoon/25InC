#include <stdio.h>
#include <stdlib.h>

void main()
{
	char cards [52][4] = {"1S","2S","3S","4S","5S","6S","7S","8S","9S","10S","11S","12S","13S",
						  "1C","2C","3C","4C","5C","6C","7C","8C","9C","10C","11C","12C","13C",
						  "1D","2D","3D","4D","5D","6D","7D","8D","9D","10D","11D","12D","13D", 
						  "1H","2H","3H","4H","5H","6H","7H","8H","9H","10H","11H","12H","13H" };

	int i;
	int random;
	char temp1[4], temp2[4];

	for (i=0;i<= 51;i++)
	{
		random=rand() % 52;
		//printf("%d \n", random);
		//printf("%s \n" ,cards[i]);
		temp1[4] = cards[i];
		printf("%s \n" , temp1[4]);

	}
}