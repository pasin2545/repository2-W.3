#include<stdio.h>

int main() {
	unsigned int num[1000], a, b;
	scanf_s("%u", &a);
	b = a - 1;
	if (a >= 2 && a <= 1000) {
		for (int i = 0; i < a; i++) {
			scanf_s("%u", &num[i]);
		}
		for (int i = 0; i < a; i++) {
			//digit
			if (num[i] >= 0 && num[i] <= 9) {
				for (int j = 0; j < a; j++) {
					if (num[j] > num[j + 1] && j + 1 < a) {
						int temp = 0;
						temp = num[j];
						num[j] = num[j + 1];
						num[j + 1] = temp;
					}
					else {
						continue;
					}
				}
			}
			else {
				continue;
			}
		}
		for (int i = 0; i < a; i++) {
			if (num[i] >= 0 && num[i] <= 9) {
				printf("%u ", num[i]);
			}
		}
	}
	return 0;
}