#include <stdio.h>
#include <limits.h>

int main(){
	char value = CHAR_MIN;

	printf("original value: %d\n", value);
	value = value - 1;
	printf("value after subtracting 1: %d\n", value);

	return 0;
}
