#include <stdio.h>

int main() {
	int n;

	printf("Type a time \n");

	scanf("%d", &n);

	int v = 3*n*n - 6*n;

	printf("Actual speed is: %d \n", v);

	return 0;
}
