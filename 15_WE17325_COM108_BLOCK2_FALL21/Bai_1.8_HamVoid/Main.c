#include <stdio.h>
/*
* Hàm không trả về - void
*	1. Không tham số
*	2. Có tham số
* Cách sử dụng:
*	1. Tên hàm phải có nghĩa
*	2. Tên hàm luôn có động từ đứng trước:
*		Ví dụ: tinhTong(),layDsSinhVien, getLstSinhVien.....
  Công thức:
  <Kiểu hàm> <Tên hàm> (<Các tham số truyền vào>)
  {
		//Body code
  }
*/
double a, b;//Biến toàn cục
void menu()
{
	printf_s("+. Phep cong \n");
	printf_s("-. Phep tru \n");
	printf_s("x. Phep chia \n");
	printf_s(":. Phep nhan \n");
	printf_s("Moi ban chon chuc nang: ");
}
void nhap2So()
{
	printf_s("Moi ban nhap a: ");
	scanf_s("%lf", &a);
	printf_s("Moi ban nhap b: ");
	scanf_s("%lf", &b);
}
//Biến được khai báo bên trong 1 hàm được gọi là biến cục bộ. Và nó chỉ có thể được sử dụng bên trong phươn thức đó.
//Biến được khai báo bên ngoài 1 hàm được gọi là biến toàn cục. Biến toàn cục có thể được sử dụng bên trong các hàm khác.
int main()
{
	//double a, b;//Biến cục bộ
	char choice;
	while (1)//Vòng lặp vô hạn để lặp lại bài toán
	{
		
		//Xử lý trôi lệnh ngay sau khi nhập số
		//getchar();		
		menu();
		scanf_s("%c", &choice);
		switch (choice)
		{
		case '+':
			printf_s("Moi ban nhap a: ");
			scanf_s("%lf", &a);
			printf_s("Moi ban nhap b: ");
			scanf_s("%lf", &b);
			printf_s("%.0lf + %.0lf = %.0lf \n", a, b, a + b);
			
			break;
		case '-':
			printf_s("Moi ban nhap a: ");
			scanf_s("%lf", &a);
			printf_s("Moi ban nhap b: ");
			scanf_s("%lf", &b);
			printf_s("%.0lf - %.0lf = %.0lf \n", a, b, a - b);
			getchar();
			break;
		case 'x':
			printf_s("Moi ban nhap a: ");
			scanf_s("%lf", &a);
			printf_s("Moi ban nhap b: ");
			scanf_s("%lf", &b);
			printf_s("%.0lf x %.0lf = %.0lf \n", a, b, a * b);
			
			break;
		case ':':
			printf_s("Moi ban nhap a: ");
			scanf_s("%lf", &a);
			printf_s("Moi ban nhap b: ");
			scanf_s("%lf", &b);
			printf_s("%.0lf : %.0lf = %.1lf \n", a, b, a / b);
			
			break;
		default:
			printf_s("Chuc nang ban chon khong ton tai \n");
			break;
		}
	}
}