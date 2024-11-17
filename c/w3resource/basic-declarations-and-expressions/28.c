#include <stdio.h>

int main() {
	int arr[5];
	printf("Input the first number: ");
	scanf("%d", &arr[0]);
	printf("Input the second number: ");
	scanf("%d", &arr[1]);
	printf("Input the third number: ");
	scanf("%d", &arr[2]);
	printf("Input the fourth number: ");
	scanf("%d", &arr[3]);
	printf("Input the fifth number: ");
	scanf("%d", &arr[4]);

	int count, sum;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > 0) {
			count++;
			sum += arr[i];
		}
	}
	printf("Number of positive numbers: %d\n", count);
	printf("Average value of positive numbers: %f\n", (double)sum / count);
	return 0;
}
