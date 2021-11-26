#include <stdio.h>
/// Câu lệnh if
///	Hay còn gọi là câu điều kiện hoặc câu lệnh rẽ nhánh
int main()
{
	//PHẦN 1: Cách sử dụng: if + tab
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

	// PHẦN 2. Câu lệnh Else
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

	/*
	 * PHẦN 3: ELSE IF dùng để nối nhiều điều kiện lại với nhau
	 */
	/*
	if (1)
	{
		
	}else if (1)
	{
		//Vẫn phải thỏa mãn điều kiện thì mới vào
	}else if (1)
	{
		
	}else if (1)
	{
		
	}else
	{
		//Khi không thỏa mãn các trường hợp trên sẽ vào else
	}
	Lưu ý: Chỉ được phép vào 1 trường hợp.
	*/
	double diemTA = 5, diemCsharp = 9;
	if (diemCsharp>=5)
	{
		printf_s("Chuc mung bo me ban se tang iphone 7");
	}else if (diemTA >=5 && diemCsharp >=5)
	{
		printf_s("Chuc mung bo me ban se tang iphone 8+");
	}else if (diemTA >=8 && diemCsharp >=8)
	{
		printf_s("Chuc mung bo me ban se tang iphone 13");
	}else
	{
		printf("Chuc mung cac ban se bi hoc lai");
	}
	/*
	 * Viết 1 chương trình nhập điểm trung bình môn C sau đó đánh giá điểm trung bình thông qua các trường hợp sau:
	 *  1. 9 -> 10 = Xuat Sac
	 *	2. 8 -> 8.9 = Gioi
	 *	3. 6 -> 7.9 =  Kha
	 *	4. 5 -> 5.9 = Trung Binh
	 *	5. Nhỏ hơn 5 học lại.
	 */
	//Giải bài:
	double diemCFall21;
	printf_s("Moi ban nhao diem: ");
	scanf_s("%lf", &diemCFall21);
	if (diemCFall21 >= 9 && diemCFall21 <=10)
	{
		printf_s("Xuat sac");
	}else if (diemCFall21 >= 8 && diemCFall21 < 9)
	{
		printf_s("Gioi");
	}else if (diemCFall21 >= 6 && diemCFall21 < 8)
	{
		printf_s("Kha");
	}else if (diemCFall21 >= 5 && diemCFall21 < 6)
	{
		printf_s("TB");
	}else
	{
		printf_s("Hoc lai");
	}
}