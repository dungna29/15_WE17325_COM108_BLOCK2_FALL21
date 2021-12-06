#include <stdio.h>
/*
* Hàm trả về
*	1. Không tham số
*	2. Có tham số
* Cách sử dụng:
*	1. Tên hàm phải có nghĩa
*	2. Tên hàm luôn có động từ đứng trước:
*		Ví dụ: tinhTong(),layDsSinhVien, getLstSinhVien.....
  Công thức:
  <Kiểu dữ liệu> <Tên hàm> (<Các tham số truyền vào>)
  {
	return <Giá trị phải đúng với kiểu dữ liệu của hàm>;
  }
*/
//Hàm void
void tinhTong2A(int a, int b)
{
	printf_s("%d + %d = %d \n", a, b, a + b);
}
//Hàm trả về số nguyên
int tinhTong2B(int a, int b)
{
	printf_s("%d + %d = %d \n", a, b, a + b);
	return a + b;
}
char ham1()
{
	char c = 'a';
	return c;
}
double ham2()
{
	return 8.6;
}
double pi()
{
	return 3.14;
}
int main()
{
	tinhTong2A(10, 5);//In ra
	tinhTong2B(10, 10);//Không thể tự in ra màn hình
	printf_s("Tong = %d \n", tinhTong2B(10, 10));

	///printf_s("Tong = %d \n", tinhTong2A(10, 10)); Lỗi không thể in void ra màn hình
	double S = 8.6,kq;
	kq = pi()*S;//Gán lại số pi cho a

	//Lưu ý: Khi mới học thì hãy coi cả hàm trả về là 1 giá trị.
}