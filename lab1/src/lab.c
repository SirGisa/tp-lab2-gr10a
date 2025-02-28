#include <stdio.h>

// And there is actual code. I found it painful to right all of this without highlighting compile problems. Half an hour searched for what is segmentation error.
int main() {
	int n;

	printf("Type a time \n");

	scanf("%d", &n);

	int v = 3*n*n - 6*n;

	printf("Actual speed is: %d \n", v);

	return 0;
}
