#include <stdio.h>

int main() {
	int i, j, k;

	for(i = 0; i < 10; i++){
		printf(" %4d", i);
		if (i == 9)
			printf("\n");
	}

	for (j = 1; j < 10; j++){
		printf("%d", j);

		for (k = 0; k < 10; k++){
			printf(" %4d", (j*10+k)*(j*10+k));
			if (k == 9)
				printf("\n");
		}
	}

	return 0;
}