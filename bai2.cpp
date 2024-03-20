#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
	int squareRoot = sqrt(num);
	return (squareRoot * squareRoot == num);
}


void printPerfectSquares(int n) {
	printf("Cac so chinh phuong nho hon %d la:\n", n);
	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Nhap khong hop le. Vui long nhap so nguyen duong.\n");
		return 1;
	}

	printPerfectSquares(n);

	return 0;
}