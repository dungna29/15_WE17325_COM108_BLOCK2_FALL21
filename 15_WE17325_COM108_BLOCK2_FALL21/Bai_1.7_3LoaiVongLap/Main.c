#include <stdio.h>
/*
 *  3 Loại vòng lặp: for, while, do...while dùng để lặp lại 1 đoạn code nào đó để thực 1 hành động.
 *	Từ khóa: + break: dùng để ngắt vòng lặp
 *			 + continue: bỏ qua đoạn code phía sau và tiến hành lặp sang vàng vòng lặp mới tiếp theo
 *
 * Lưu ý:   + Biết điều kiện vòng lặp phải đúng.
 *			+ Điểm bắt đầu chạy
 *			+ Bước nhẩy sẽ giúp tăng đến điểm dừng vòng lặp
 */
int main()
{
	//Phần 1: In ra câu dưới đây 5 lần
	printf_s("Toi khong muon chep code \n");
	printf_s("Toi khong muon chep code \n");
	printf_s("Toi khong muon chep code \n");
	printf_s("Toi khong muon chep code \n");
	printf_s("Toi khong muon chep code \n");
	printf_s("===================================\n");
	//Phần 2: Hướng giải quyết in nhiều lần hoặc thực hiện 1 hành động lặp lại
	//1. Vòng lặp for: for + tab
	for (int i = 0; i < 5; i++)
	{
		printf_s("Toi khong muon chep code %d \n ", i);

	}
	/*
	 * + int i = 0: Điểm bắt đầu của vòng lặp
	 * + i < 5: Điều kiện để dừng vòng lặp
	 * + i++: Bước nhẩy của i để đạt được điều kiện dừng
	 * + Vòng lặp không có điều kiện dừng hoặc ko đạt được điều kiện dừng gọi là vòng lặp vô hạn
	*/

	printf_s("=======================");
	//2. Vòng lặp While(true): wh + tab
	// int i = 0;
	// while (i < 5)//Điều kiện đúng thì vòng lặp sẽ chạy
	// {
	// 	printf_s("Toi khong muon chep code %d \n ", i);
	// 	i++;
	// }
	// while (1) = true trở thành vòng lặp vô hạn
	// {
	// 	
	// }

	//3. Vòng lặp do...While: do + tab
	// do
	// {
	// 	    Vòng lặp Do While sẽ thực hiện hành động ít nhất là 1 lần kể cả điều kiện sai
	// }
	// while (1);//= true là vòng lặp vô hạn
	int i = 0;
	do
	{		
		printf_s("Toi khong muon chep code %d \n ", i);
		i++;
	} while (i < 5);

}