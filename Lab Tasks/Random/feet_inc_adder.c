#include <stdio.h>

typedef struct Distance {
	int feet;
	int inch;
} distance;

int main()
{
	distance D[3];
	int i;
	for(i=0; i<2; i++)
	{
		printf("Enter feets: ");
		scanf("%d",&D[i].feet);
		printf("Enter inches: ");
		scanf("%d",&D[i].inch);
	}
	D[i].inch=D[0].inch+D[1].inch;
	D[i].feet=D[0].feet+D[1].feet;
	D[i].feet+=D[i].inch/12;
	D[i].inch%=12;
	
	printf("\n\nResult: %d' %d''",D[i].feet,D[i].inch);
	return 0;
}

