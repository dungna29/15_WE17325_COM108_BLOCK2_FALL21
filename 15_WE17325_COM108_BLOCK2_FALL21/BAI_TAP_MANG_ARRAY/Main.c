#include <stdio.h>
#define size
/*
 * Bài 1: Khai báo 1 mảng số nguyên gồm các phần tử sau
 * int arrNumberFpoly[] = {88,7,9,6,5,8};	 
 *  - In số 5 ra màn hình bằng câu printf.
 *  - In tất cả các phần tử có ở trong mảng ra màn hình
 *  - In tất cả các giá trị chẵn ra màn hình.
 *
 *	Bài 2: Cho người dùng nhập vào 1 mảng số nguyên và in tổng dãy số người dùng đã nhập ra màn hình.
 *
 *	Bài 3: Cho người dùng nhập vào 1 mảng số nguyên rồi in ra số lớn nhất trong mảng
 *
 *	Bài 4: Cho người dùng nhập vào 1 mảng số nguyên cho in ra các số chẵn lẻ trên 2 dòng riêng biệt.
 *
 *	Bài 5: Cho người dùng nhập vào 1 mảng chẵn nếu là số lẻ nhập vào bắt nhập lại.
 * 
 *  Bài 6: Nhập vào cân nặng các người yêu cũ tìm ra vị trí người có số cân nặng bé nhất.
 *
 *	Bài 7: Nhập vào năm sinh các người yêu cũ in ra người yêu cũ có tuổi lớn nhất và thứ tự nhập vào.
 *	Ví dụ: Năm 2000 Tuổi 21 Người yêu thứ 3.
 *
 *
 */
void BaiMau()
{
	int arrNumber[100], soLuong;
	printf_s("Moi ban nhap so luong: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; ++i)
	{
		printf_s("Moi ban nhap gia tri tai Index[%d]: ", i);
		scanf_s("%d", &arrNumber[i]);
	}
	for (int i = 0; i < soLuong; ++i)
	{
		printf_s("Index[%d] = %d \n", i, arrNumber[i]);
	}
}
int main()
{
	

}
