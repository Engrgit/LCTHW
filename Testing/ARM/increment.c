#include <stdio.h>

void inc_number(int number[]);

int main(int argc, char *argv[])
{
	int number[4] = {0,0,2,1};

	int value = number[0]*1000 + number[1]*100
		+ number[2]*10 + number[3];

	printf("User input: %d\n", value);

	//printf("1: %s\n",(**char)1);

	// Think about using weighting factors?
	//int W[4] = {1000,100,10,1};

	inc_number(number);
	return 0;
}


void inc_number(int number[])
{
	register unsigned int value = number[0]*1000 + number[1]*100
		+ number[2]*10 + number[3] + 1;

	//value++;

	//unsigned int output[] = {0,0,0,0};

	register unsigned int i = 0;
	register unsigned int div = 10;

	for(i=3; value > 0; i--) {
		number[i] = value % div;
		value /= div;
	}

	printf("output = %d%d%d%d\n", number[0], number[1],
			number[2], number[3]);
}