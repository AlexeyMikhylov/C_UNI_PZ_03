#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	run();
}

int run(void)
{
	int exnum, num, a, b;
	char s[100], sym;

	printf("\nexercises [1-7]\n0 - exit\nInput *number* to run: ");
	scanf_s("%d", &exnum);

	switch (exnum)
	{
	case 1:
		scanf_s("%d", &num);
		printf("result: %d", ex1(num)); run();
	case 2:
		printf("Input int a: "); scanf_s("%d", &a);
		printf("Input int b: "); scanf_s("%d", &b);

		printf("result: %d", ex2_2(a, b)); run();
	case 3:
		printf("Input int a: "); scanf_s("%d", &a);
		printf("Result: %d", ex3(a)); run();
	case 4:
		printf("Enter a number: "); scanf_s("%d", &num);
		printf("Sum of digits: %d", ex4(num)); run();
	case 5:
		printf("Input string : "); gets(s);
		printf("Input symbol : "); sym = getchar();
		func(s, sym); run();
	case 0:
		printf("<exit>"); exit(1);
	default:
		printf("<Incorrect input>"); run();
	}
}

int check(num)
{
	if (scanf_s("%d", &num) != 1) {
		fprintf(stderr, "<Incorrect Input>\n");
		exit(1);
	}
	return 1;
}
	
int ex1(int num) //+
{
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int ex2_2(int a, int b) //+
{
	int temp;

	if (b < a) {
		temp = b;
		b = a;
		a = temp;
	}

	for (int i = a; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}

	return 1;
}

int ex3(int a) //+
{
	for (int i = 1; i < a; i++) {
		if (pow(i, 2) == a) {
			return 1;
		}
	}
	return 0;
}

int ex4(int num) //+
{
	int sum = 0, temp;

	while (num != 0)
	{
		temp = num % 10;
		sum += temp;
		num /= 10;
	}

	return sum;
}

float ex5(char s[100], char sym) //+-
{
	int i, all = 0;
	float count = 0, prcnt;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == sym)
			count++;

		if (s[i] != ' ') {
			all++;
		}
	}

	printf("In string: \n");
	puts(s);

	printf("Total letters: %d", all);
	printf("\nsymbol '");
	putchar(sym); // Вывод символа
	printf("' is met %.00lf times\n", count);

	printf("percentage is: %.00f %%", (count * 100) / all);
	printf("\n");

	prcnt = ((count * 100) / all);

	return (float)prcnt;
}

float func(char s[100], char sym)
{
	int i, all = 0;
	float count = 0, prcnt;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == sym)
			count++;

		if (s[i] != ' ') {
			all++;
		}
	}

	printf("In string: \n");
	puts(s);

	printf("Total letters: %d", all);

	printf("\nsymbol '");
	putchar(sym);
	printf("' is met %.00lf times\n", count);

	printf("percentage is: %.00f %%", (count * 100) / all);
	printf("\n");

	prcnt = ((count * 100) / all);

	return (float)prcnt;
}