#include <stdio.h>

int main() {
	float a;
	float b;
	float c;
	scanf("%f %f %f", &a, &b, &c);

	if (a > (b+c) || b > (a+c) || c > (a+b)){
		printf("invalid triangle\n");
	}

	else{

		if (a*a == (b*b+c*c) || b*b == (a*a+c*c) || c*c == (a*a+b*b)){
			printf("TRUE\n");
		}

		else {
			printf("FALSE\n");
		}
	}
	
	return 0;
}
