#include <stdio.h>
#include "IOHomework_Scan.h"

void main()
{
	char ID[20], city[30];
	printf("\nPlease give me your id : ");
	scanf("%[^\n]",ID);
	getchar();
	printf("You have entered your id as %s\n",ID);
	printf("\nPlease give me your city you live in : ");
	scanf("%[^\n]",city);
	printf("You live in %s",city);
}
