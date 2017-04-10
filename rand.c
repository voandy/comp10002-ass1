#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM_POINTS 99
#define MAX_NUM_DIMENSIONS 3

int
main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	int i, j;
	float x;
	float a = 500;

	printf("%d\n", MAX_NUM_DIMENSIONS);

	for (i = 0; i < MAX_NUM_POINTS; i++) {
		for (j = 0; j < MAX_NUM_DIMENSIONS; j++) {
			x = (float)rand()/(float)(RAND_MAX/a);
			printf("%0.2f", x);
			if (j < MAX_NUM_DIMENSIONS - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}

}