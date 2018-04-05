# include <stdio.h>
# include <ctype.h>

int main(){
	char c;
	int count_alpha = 0;
	int count_digit = 0;

	while ((c = getc(stdin)) != EOF){
		if (isalpha(c))
			count_alpha++;
		else if (isdigit(c))
			count_digit++;
	}

	printf ("Latin symbols: %d \n", count_alpha);
	printf ("Digits: %d \n", count_digit);
	return 0;
}