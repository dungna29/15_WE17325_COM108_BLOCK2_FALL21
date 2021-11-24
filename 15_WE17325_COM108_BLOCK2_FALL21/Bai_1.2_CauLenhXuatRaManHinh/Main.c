#include <stdio.h>
/*
 * Bài 1.2 Câu lệnh printf(); giúp in ra màn hình
 */
int main()
{
	/*
	 * Phần 1: Cách sử dụng
	 * printf("Chuỗi giá trị");// Dùng để in 1 giá trị ra màn hình
	 * printf("%d",<giá trị>);// In giá trị của biến ra màn hình
	 * %d - Số nguyên %f- số thực %s- String %c- ký tự %lf - double
	 */
	printf_s("Chao cac ban dang hoc Lap Trinh C \n");//\n xuống dòng
	int namNhapHoc = 2021, namRaTruong = 2023;
	printf_s("Nam nhap hoc %d thi toi chua co NY \n	Nam %d khi sap ra truong toi se co NY khong nhu anh Sang Nganh UD", namNhapHoc, namRaTruong);
}