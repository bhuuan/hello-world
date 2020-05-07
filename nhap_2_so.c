#include<stdio.h>

int main ()
{
	int num1, num2;
	printf("Nhap gia tri thu nhat: ");
	scanf("%d", &num1);
	printf("Nhap gia tri thu hai: ");
	scanf("%d", &num2);

	printf("\n Tong 2 so: %d", num1 + num2);
	printf("\n Hieu 2 so: %d", num1 - num2);
	printf("\n Tich 2 so: %d", num1 * num2);
	printf("\n Thuong 2 so: %d", num1 / num2);
	getch();
	return 0;
}
