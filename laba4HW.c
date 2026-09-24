#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int A, B, res;
	printf("=== СИСТЕМА КОНТРОЛЯ ДОСТУПА ===\n");
	printf("Введите два целых числа: ");
	scanf("%d %d", &A, &B);
	res = (A % 2 == 0) && (B % 2 == 0);
	printf("Доступ разрешен (1 - да , 0 - нет): %d\n", res);
	return 0;
}
