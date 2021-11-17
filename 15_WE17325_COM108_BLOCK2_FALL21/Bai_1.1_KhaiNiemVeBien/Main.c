#include <stdio.h>
/*
 * BÀI 1.1 KHÁI NIỆM VỀ BIẾN
 * 1. Biến dùng để lữu trữ giá trị trong lập trình
 * 2. Biến được lưu vào RAM máy tính khi chương trình bắt đầu chạy và sẽ mất đi khi dừng chương trình
 * 3. Biến cần phải có kiểu dữ liệu ví dụ: int, float, char......
 */
int main()
{
	/*
	 * Phần 1: Công thức khai báo biến
	 * + <Kiểu dữ liệu> <Tên biến>;//Cách khai báo 1
	 * + <Kiểu dữ liệu> <Tên biến 1>,<Tên biến 2>,<Tên biến 3>;//Khai báo nhiều biến có cùng kiểu dữ liệu
	 * + <Kiểu dữ liệu> <Tên biến> =(toán tử gán) <giá trị>;
	 *
	 * <Kiểu dữ liệu>: Dùng để định nghĩa kiểu dữ liệu cho giá giá trị cần lưu trữ.
	 */
	//Ví dụ 1:
	int a;//Khai báo 1 biến a có kiểu dữ liệu là số nguyên và không khởi tạo giá trị ban đầu
	a = 5;//Gán giá trị cho biến a thông qua toán tử =
	printf_s("%d",a);
}