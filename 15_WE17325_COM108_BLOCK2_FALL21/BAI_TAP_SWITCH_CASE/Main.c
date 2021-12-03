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
		//Xử lý trôi lệnh ngay sau khi nhập số
		getchar();
		printf_s("+. Phep cong \n");
		printf_s("-. Phep tru \n");
		printf_s("x. Phep chia \n");
		printf_s(":. Phep nhan \n");
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%c", &choice);		
		switch (choice)
		{
		case '+':			
			 printf_s("%.0lf + %.0lf = %.0lf \n", a, b, a + b);
			
			break;
		case '-':
			printf_s("%.0lf - %.0lf = %.0lf \n", a, b, a - b);
			break;
		case 'x':
			printf_s("%.0lf x %.0lf = %.0lf \n", a, b, a * b);
			break;
		case ':':
			printf_s("%.0lf : %.0lf = %.1lf \n", a, b, a / b);
			break;
		default:
			printf_s("Chuc nang ban chon khong ton tai \n");
			break;
		}
	}
	
}