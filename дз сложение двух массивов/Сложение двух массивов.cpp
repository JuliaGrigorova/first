#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define N 10

int main(void)
{
	setlocale(LC_ALL, "Rus");

	int mas_A[N];
	int mas_B[N];
	int mas_sum[N];

	srand(time(NULL));

	for (int i = 0; i < N; i++) {
		mas_A[i] = rand() % 100;
		printf("%d ", mas_A[i]);
	}

	printf("\n");

	for (int i=0;i<N;i++) {
		mas_B[i] = rand() % 100;
		printf("%d ", mas_B[i]);
	}
	printf("\n");

	printf("Сумма: ");
	for (int i = 0; i < N; i++) {
		mas_sum[i] = mas_A[i] + mas_B[i];
		printf("%d ", mas_sum[i]);
	}

	printf("\n");
	return 0;
}