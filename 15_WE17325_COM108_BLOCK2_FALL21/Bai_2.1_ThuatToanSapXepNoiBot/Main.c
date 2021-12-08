#include <stdio.h>
//Thuật toán nổi bọt - Bubble Sort

void SapXepTangDanByDungna(int arr[],int doDaiCuaMang)
{
	for (int i = 0; i < doDaiCuaMang -1; ++i)
	{
		for (int j = i+1; j < doDaiCuaMang; ++j)
		{
			if (arr[i]> arr[j])//nếu muốn muốn sắp xếp giảm dần chỉ cần đảo dấu > thành <
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf_s("Mang sau khi sap xep: \n");
	for (int i = 0; i < doDaiCuaMang; ++i)
	{
		printf_s("%d ", arr[i]);
	}
	printf_s("\n");
}
int main()
{
	int arrNumbers[] = { 9,5,4,6 };
	printf_s("Mang chua sap xep: \n");
	for (int i = 0; i < 4; ++i)
	{
		printf_s("%d ", arrNumbers[i]);
	}
	printf_s("\n");
	SapXepTangDanByDungna(arrNumbers,4);
	printf_s("=================\n");
	int arrNumbers1[] = { 9,5,4,6,99,100,555,66,1 };
	SapXepTangDanByDungna(arrNumbers1,9);
	//Áp dụng thuật toán vào
	/*
	 * arr: 9 5 4 6
	 * Vòng i = 0, j = 1: 9 > 5 True
	 * 5 9 4 6
	 * Vòng i = 0, j = 2: 5 > 4 True
	 * 4 9 5 6
	 * Vòng i = 0, j = 3: 4 > 6 False
	 * 4 9 5 6
	 *
	 * Vòng i = 1, j = 2: 9 > 5 True
	 * 4 5 9 6
	 * Vòng i = 1, j = 3: 5 > 6 False
	 * 4 5 9 6
	 *
	 * Vòng i = 2, j = 3: 9 > 6	True
	 * 4 5 6 9
	 *
	 * Vòng i Tăng lên 3 sẽ kết thúc không chạy nữa
	 */
	// for (int i = 0; i < 4-1; ++i)
	// {
	// 	for (int j = i+1; j < 4; ++j)
	// 	{
	// 		if (arrNumbers[i]> arrNumbers[j])//nếu muốn muốn sắp xếp giảm dần chỉ cần đảo dấu > thành <
	// 		{
	// 			int temp = arrNumbers[i];
	// 			arrNumbers[i] = arrNumbers[j];
	// 			arrNumbers[j] = temp;
	// 		}
	// 	}
	// }

	// for (int i = 0; i < 4-1; i++)
	// {
	// 	printf("Lan chay thu: %d \n", i);
	// 	printf("Gia Tri Tai Vi Tri %d \n", arrNumbers[i]);
	// 	for (int j = i + 1; j < 4; j++)
	// 	{
	// 		int temp = arrNumbers[i];
	// 		printf("Gia Tri cua %d > %d \n", arrNumbers[i], arrNumbers[j]);
	// 		if (arrNumbers[i] > arrNumbers[j])
	// 		{
	// 			arrNumbers[i] = arrNumbers[j];
	// 			arrNumbers[j] = temp;
	// 		}
	// 		for (int i = 0; i < 4; i++)
	// 		{
	// 			printf("%d ", arrNumbers[i]);
	// 		}
	// 		printf("\n");
	// 	}
	// 	printf("Sau khi sap xep lan thu %d \n", i);
	// 	for (int i = 0; i < 4; i++)
	// 	{
	// 		printf("%d", arrNumbers[i]);
	// 	}
	// 	printf_s("\n");
	// }
	// printf_s("Mang sau khi sap xep: \n");
	// for (int i = 0; i < 4; ++i)
	// {
	// 	printf_s("%d ", arrNumbers[i]);
	// }
	// printf_s("\n");
}