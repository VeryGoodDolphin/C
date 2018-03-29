#include <stdio.h>

int main() {
	float a;
	float b;
	float c;
	scanf("%f %f %f", &a, &b, &c);

	if (a*a == (b*b+c*c) || b*b == (a*a+c*c) || c*c == (a*a+b*b)){
		printf("TRUE\n");
	}

	else {
		printf("FALSE\n");
	}
	
	return 0;
}