#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int A, B;
	printf("Введите число А: \n");
	scanf_s("%d", &A);
	printf("Введите число В: \n");
	scanf_s("%d", &B);
	if ((A % 2 == 0) && (B % 2 == 0)){
		printf("Всё в порядке! Оба числа четные!");
	}
		else {
			printf("Сирена!!! Одно из чисел или оба они нечетны\n");
	}
}