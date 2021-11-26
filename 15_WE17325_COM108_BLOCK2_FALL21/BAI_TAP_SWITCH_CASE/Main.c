#include <stdio.h>
/*
 *  Bài tập máy tính bỏ túi FPOLY
 *	1. Phep cong 2 so
 *	2. Phep tru 2 so
 *	3. Phep nhan 2 so
 *	4. Phep chia 2 so
 */
int main()
{
	double a, b;
	char choice;
	while (1)//Vòng lặp vô hạn để lặp lại bài toán
	{
		printf_s("Moi ban nhap a: ");
		scanf_s("%lf", &a);
		printf_s("Moi ban nhap b: ");
		scanf_s("%lf", &b);
		printf_s("+. Phep cong \n");
		printf_s("-. Phep tru \n");
		printf_s("x. Phep chia \n");
		printf_s(":. Phep nhan \n");
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%c", &choice);
		switch (choice)
		{
		case '+':
			
			//printf_s("%lf + %lf = %.1lf", a, b, a + b);
			break;
		case '-':
			break;
		case 'x':
			break;
		case ':':
			break;
		default:
			break;
		}
	}
}