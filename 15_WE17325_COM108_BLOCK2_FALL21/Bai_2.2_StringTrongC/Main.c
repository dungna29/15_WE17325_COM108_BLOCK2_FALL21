#include <stdio.h>
/*
 * Chuỗi trong C nó là 1 mảng ký tự
 * Java - String, C# - string (chuỗi)
 */
int main()
{
	//Nguyen Ba Ton = Chuỗi = Tập hợp của nhiều ký tự = Mảng Ký tự.

	char arrName[] = { 'T','O','N' };
	//Khai báo 1 mảng kiểu char
	char name[100];
	printf_s("Moi ban nhap ten: ");
	//scanf_s("%s", name, 100); Không in được sau khoảng trắng.
	//scanf_s("%[^\n]", name, 100);//Sử dụng Regex	
	//fgets(name, 100, stdin);
	gets_s(name, 100);//Sử dụng cách này khi đi thi
	printf_s("Chao ban %s", name);

	/*
	 * Nhập các thông tin SV FPOLY sau:
	 *	1. Tên đầy đủ
	 *	2. Năm sinh
	 *	3. Sdt
	 *	4. Điểm Thi C
	 *	Sau đó in ra màn hình như sau:
	 *	Tên + Năm sinh + Tuổi + SDT + Diểm C - (Qua môn hoặc học lại)	 
	 */
}