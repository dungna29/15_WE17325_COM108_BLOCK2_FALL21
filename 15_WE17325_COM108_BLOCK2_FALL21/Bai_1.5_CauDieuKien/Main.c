#include <stdio.h>
/// Câu lệnh if
///	Hay còn gọi là câu điều kiện hoặc câu lệnh rẽ nhánh
int main()
{
	//Cách sử dụng: if + tab
	/*
	 
	 if (1) // 1 = true
	{Mở lệnh
		//Body code thực thi 1 hành động hoặc nhiều hành động nào đó khi thỏa mãn điều kiện.
	}Đóng lệnh
	
	*/
	//Ví dụ 1: Viết 1 chương trình nhập điểm thi và thông báo học lại
	double diemThiC;
	printf_s("Moi ban nhap diem C: ");
	scanf_s("%lf", &diemThiC);
	// if (diemThiC>=5)
	// {
	// 	printf_s("Chung mung ban da qua mon");
	// 	return;//Khi gặp return thì sẽ thúc ngay hàm hiện tại
	// }
	// printf_s("Chung mung ban da mat 759k");

	//Câu lệnh Else
	// if (1)
	// {
	// 	
	// }else
	// {
	// 	 Thực thi 1 hành động khi if không thỏa mãi
	// }
	if (diemThiC>=5)
	{
		printf_s("Chung mung ban da qua mon");
	}
	else
	{
		printf_s("Chung mung ban da mat 759k");
	}
}