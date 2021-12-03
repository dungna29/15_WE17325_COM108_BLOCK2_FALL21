#include <stdio.h>
//Chưa bài LAB
void bai5()
{
	//In bảng cửu chương theo khoảng
	int khoang1, khoang2;
	printf("Moi ban nhap Khoang 1:");
	scanf_s("%d", &khoang1);//8
	printf("Moi ban nhap Khoang 2:");
	scanf_s("%d", &khoang2);//5
	//Sử dụng thuật toán hoán vị
	if (khoang1 > khoang2)
	{
		int temp = khoang1;
		khoang1 = khoang2;
		khoang2 = temp;
	}
	for (int i = khoang1; i < khoang2; ++i)
	{
		for (int j = 1; j <= 10; ++j)
		{
			printf_s("%d x %d = %d\n", i, j, i * j);
		}
	}
}
/*
 * 7. Nhập vào 1 dãy số nguyên sau đó tính tổng dãy số nguyên nhập vào đó.
 */
void Bai7()
{
	int so,soLanChay, TongSoNguyen = 0;

	printf("Moi ban nhap so lan chay:");
	scanf_s("%d", &soLanChay);
	for (int i = 0; i < soLanChay; ++i)
	{
		printf("Moi ban nhap so thu %d:",i);
		scanf_s("%d", &so);
		TongSoNguyen = TongSoNguyen + so;
		//TongSoNguyen += so;
	}
	printf("Tong so vua nhap la: %d", TongSoNguyen);
}
int main()
{
	//Quy ước số 0 để dừng chương trình
	int a;
	do
	{
		Bai7();
		printf("Ban co muon thoat khong? 0 Thoat - 1 Tiep tuc");
		scanf_s("%d", &a);
		
	}
	while (!(a == 0));
}