#include <stdio.h>
/*
 *  Mảng - ARRAY
 *	1. Mảng dùng để lưu trữ 1 tập giá trị có cùng kiểu dữ liệu
 *	2. Mảng trong lập trình là mảng tĩnh không co giãn
 *	3. Để truy xuất và gán phần tử trong mảng cần biết index và index luôn bắt đầu từ 0
 */
int main()
{
	//Khai báo biến lưu trữ đc 1 giá trị
	int a = 5;
	a = 99;

	//Phần 1: Cách dùng và khởi tạo
	// <kiểu dữ liệu> <arr + tên mảng>[] = {giá trị 1,giá trị 2...}; 
	// <kiểu dữ liệu> <arr + tên mảng>[kích thước mảng số nguyên];

	int arrNumbers[] = { 99,11,22 };//Khởi tạo 1 mảng số nguyên có sẵn 3 giá trị ban đầu.
	int arrYears[4];//Khởi tạo 1 mảng số nguyên có kích thước là 4 phần tử
	//Các bạn có thể tạo ra các mảng có các kiểu dữ liệu khác nhau

	//Phần 2: Truy xuất và gán giá trị thông qua INDEX(Vị trí là số nguyên không âm) - INDEX BẮT ĐẦU TỪ 0
	//arrYears = 2021; Lỗi vì không xác định sẽ gàn giá trị vào vị trí nào
	arrYears[0] = 2021;//[0] = Index 0
	arrYears[1] = 2022;
	arrYears[2] = 2023;
	arrYears[3] = 2024;
	arrYears[0] = 2030;//Ghi đè giá trị tại Index 0

	//Truy xuất giá trị gán vào Index nào thì lấy ra ở Index đó.
	printf_s("Index 0 = %d \n", arrYears[0]);//= 2030
	printf_s("Index 1 = %d \n", arrYears[1]);
	printf_s("Index 2 = %d \n", arrYears[2]);
	printf_s("Index 3 = %d \n", arrYears[3]);

	printf_s("======================\n");
	//Muốn in tất cả các phần tử trong mảng phải sử dụng vòng lặp
	for (int i = 0; i < 4; ++i)
	{
		printf_s("Index %d = %d \n", i, arrYears[i]);
	}

}