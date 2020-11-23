#include <stdio.h>
#include <math.h>

const int n = 9;
const int m = 9;

void display(int a[9][9]) {

	static int a;
	a++;

	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9; j++) {

			printf("%i ", a[i][j]);

		}
		printf("\n");
	}
	printf("\n");

}

int turn_90_dg(int a[9][9]) {
	int k = 0;

	for (int i = 0; i <= n / 2; i++) {
	
		for (int j = 0; j < (n - 1); j++) {

			if (j >= k && j < ((n-1) - k)) {

				int temp1 = a[j][(n-1)-i];
				a[j][(n - 1) - i] = a[i][j];
				int temp2 = a[(n - 1) - i][(n - 1) - j];
				a[(n - 1) - i][(n - 1) - j] = temp1;
				int temp3 = a[(n - 1) - j][i];
				a[(n - 1) - j][i] = temp2;
				a[i][j] = temp3;
				
			}

		}
		k++;
	
	}
	display(a);

}

void main() {

	int x[9][9];

	int* a = &x;


	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9; j++) {

			scanf_s("%i", &x[i][j]);
		

		}

	}
	display(&x);

	turn_90_dg(&x);
}