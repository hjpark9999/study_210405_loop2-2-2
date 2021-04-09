#include <stdio.h>

using namespace std;

void main()
{
	int i = 4;
	int j = 1;
	while (i <= 13)
	{
		j = 1;
		while (j < i/2 )
			{
				printf("*");
				j++;
			}
			i++; 
			printf("\n");
		}
	fgetc(stdin);
}