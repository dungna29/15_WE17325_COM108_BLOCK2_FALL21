#include <stdio.h>
/*
		* 4 Loại toán tử trong lập trình
		*  1. Toán tử số học:
		*  (+ - * / % ++ --)
		*      +: Tính tổng của 2 số hoặc dùng để cộng chuỗi
		*      -: Phép trừ của 2 số
		*      *: Phép nhân của 2 số
		*      %: Phép chia lấy dư của 2 số
		*      ++: Tăng lên 1 đơn vị
		*      --: Giảm 1 đơn vị
		*  2. Toán tử so sánh:
		*  (> < >= <= == !=)
		*      >: Lớn hơn
		*      <: nhỏ hơn
		*      >=: lớn hơn hoặc bằng
		*      <=: nhỏ hơn hoặc bằng
		*      ==: so sánh bằng
		*      !=: so sánh khác
		*  3. Toán tử Logic:
		* (&& || !)
		*      &&: Yêu cầu các mệnh đề phải luôn đúng
		*      ||: Yêu cầu 1 trong các mệnh đề dúng là được
		*      !: Lấy giá trị phủ định của mệnh đề.
		*  4. Toán tử gán:
		* (= += -= *= /= %=)
		*      +=: Cộng tiếp với vế bên phải các phép còn lại tương tự
		*/
int main()
{
	//Phần 1: Toán tử số học
	int a = 5;
	a++;// = 6 tăng lên 1 đơn vị
	++a;// = 7 tăng lên 1 đơn vị
	--a;// = 6
	printf_s("%d \n", a);

	//Phần 2: Toán tử so sánh
	double diemThiC = 5;
	printf_s("%d \n", diemThiC > 5);//False = 0
	printf_s("%d \n", diemThiC < 5);//False = 0
	printf_s("%d \n", diemThiC == 5);//True = 1
	printf_s("%d \n", diemThiC >= 5);//True = 1
	printf_s("%d \n", diemThiC <= 5);//True = 1
	printf_s("%d \n", diemThiC != 5);//False = 0

	//Phần 3: Toán tử Logic
	int nghi = 4;
	printf_s("%d \n", (diemThiC > 5) && (nghi >= 4));//False = 0
	printf_s("%d \n", (diemThiC > 5) || (nghi >= 4));//True = 1
	printf_s("%d \n", (diemThiC > 5) || !(nghi >= 4));//False = 0

	//Phần 4: Toán tử gán
	int number = 5;
	number += 5;// number = number + 5;
	printf_s("%d", number);
}