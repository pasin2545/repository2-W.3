#include<stdio.h>
int main() {
	int X, Y, T;
	scanf_s("%d %d", &X, &Y);
	if (X >= 1 && X <= 1000 && Y >= 1 && Y <= 1000) {
		if (Y % X == 0) {
			T = Y / X;
			printf("%d", T);
		}
		else {
			T = Y / X;
			T = T + 1;
			printf("%d", T);
		}
	}
	return 0;
}