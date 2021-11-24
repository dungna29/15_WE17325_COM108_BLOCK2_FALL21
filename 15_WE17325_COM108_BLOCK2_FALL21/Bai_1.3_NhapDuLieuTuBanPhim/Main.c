#include <stdio.h>
/// NHẬP DỮ LIỆU TỪ BÀN PHÍM
/// scanf_s("%d",&<biến để hứng giá trị>);- Xác định muốn hứng giá trị có kiểu dữ liệu gì?
/// Vẫn có tương tự như printf
/// %d, %s, %f, %c, %lf
int main()
{
	//Bài 1: Viết 1 chương trình nhập vào năm sinh và in năm sinh đó ra.

	//Bước 1: Xác định bài toán cần bao nhiêu biến và có kiểu dữ liệu là gì
	int ns;//Khai báo biến

	//Bước 2: Chỉ dẫn cho người dùng cần làm gì tiếp theo
	printf_s("Moi ban nhap vao nam sinh: ");
	scanf_s("%d", &ns);

	//Bước 3: Thực thi
	printf_s("Nam sinh ban vua nhap %d", ns);
	//In thêm cuổi của người vừa nhập
	printf_s("Tuoi ban la: %d \n", 2021-ns);
}