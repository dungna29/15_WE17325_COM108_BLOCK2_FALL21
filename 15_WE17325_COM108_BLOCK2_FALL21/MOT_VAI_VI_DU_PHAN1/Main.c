#include <stdio.h>

int main()
{
	char c;
	int a;
	// while (1)
	// {
		printf_s("Moi ban nhap so: ");
		scanf_s("%d", &a);//Nếu sau khi nhập số xong mà sau đó phải nhập ký tự hoặc chuỗi sẽ bị trôi lệnh.
		/*
		 * Để xử lý trôi lệnh đặt getChar(); sau khi bạn nhập số hoặc trước chỗ nhập ký tự hoặc chuỗi.
		 */
		printf_s("1. Nhap 1 so \n");
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%c", &c);
		switch (c)
		{
		case '1':		
			//getchar();
			printf_s("So ban vua nhap la: %d \n",a);
			break;
		}
	// }
			
}