#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

int lancar () 
{
	return (rand () % 2);
}

int main () 
{
	int face[2] = {0, 0}, i;
	srand(time(NULL));
	for (i = 0 ; i < 1000; i++)
	{
		face[lancar()]++;
	}

	printf("Cara: %d\nCoroa: %d\n", face[0], face[1]);
	return 0;
}