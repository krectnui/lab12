#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");
	// 1
	int* pi, i = 5;
	float* pf, f = 2.1f;
	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));

	// 2
	float PI = 3.14159, * p1, * p2;
	p1 = p2 = &PI;
	printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
	printf("По адресу p2=%p хранится *p2=%g\n\n\n", p2, *p2);

	// 3
	int* pa;
	int x = 5;
	pa = &x;
	printf("По адресу %p хранится *ptr=%d\n", pa, *pa);
	pa++;
	printf("По адресу %p хранится *ptr=%d\n", pa, *pa);
	pa--;
	printf("По адресу %p хранится *ptr=%d\n\n\n", pa, *pa);

	// 3.1
	double* pa2;
	double x2 = 5.0;
	pa2 = &x2;
	printf("По адресу %p хранится *ptr=%lf\n", pa2, *pa2);
	pa2++;
	printf("По адресу %p хранится *ptr=%lf\n", pa2, *pa2);
	pa2--;
	printf("По адресу %p хранится *ptr=%lf\n\n\n", pa2, *pa2);

	// 3.2
	char* pa3;
	char x3 = 'h';
	pa3 = &x3;
	printf("По адресу %p хранится *ptr=%c\n", pa3, *pa3);
	pa3++;
	printf("По адресу %p хранится *ptr=%c\n", pa3, *pa3);
	pa3--;
	printf("По адресу %p хранится *ptr=%c\n\n\n", pa3, *pa3);

	// 3.3
	short unsigned int* p5;
	short unsigned int x5 = 3;
	p5 = &x5;
	printf("По адресу %p хранится *ptr=%d\n", p5, *p5);
	p5++;
	printf("По адресу %p хранится *ptr=%d\n", p5, *p5);
	p5--;
	printf("По адресу %p хранится *ptr=%d\n\n\n", p5, *p5);

	// 4
	float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
	float* ptr_a;
	printf("&array[0] = %p, &array = %p\n", &array[0], &array);
	ptr_a = &array;
	printf("ptr_a = %p\n", ptr_a);
	for (int i = 0; i < 10; i++) {
		printf("ptr_a = %p; *ptr_a = %f\n", ptr_a, *ptr_a);
		ptr_a++;
	}
	ptr_a = &array[9];
	for (int i = 10; i > 0; i--) {
		printf("ptr_a = %p; *ptr_a = %f\n", ptr_a, *ptr_a);
		ptr_a--;
	}
	puts("\n\n\n");

	// 5
	int x1 = 0x12345678;
	int* prt;
	unsigned char* a1, * a2, * a3, * a4;
	unsigned char* a;

	prt = &x1;
	a = (unsigned char*)prt;

	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
}