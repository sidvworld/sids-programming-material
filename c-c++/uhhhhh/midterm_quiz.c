#include <stdio.h>

int main (void) {
	int age = 19;
	int result = 33;
	
	if (age >= 21)
		if (age <= 65)
			result = 77;
		
	else
		result = 99;
		
	printf("%i", result);
}
