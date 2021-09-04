#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i;
	int high[10];
	int sum = 0;
	float avg;

	for (i = 0; i < 10; i++) {
		printf("The height of the student[%d] = ", i+1);
		scanf("%d", &high[i]);
		sum += high[i];
	}
	avg = sum / (float)10;
	printf("Average height of all students = %f", avg);
	return 0;
}