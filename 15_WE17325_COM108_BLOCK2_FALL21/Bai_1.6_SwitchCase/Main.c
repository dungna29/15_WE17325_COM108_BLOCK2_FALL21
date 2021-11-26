#include <stdio.h>
/*
 *
	Cách gõ: sw + tab
 switch (choice)//choice chính là tham số truyền vào
	{
	case 1:
		break;//Ngắt câu lệnh sau khi thực hiện xong 1 CASE
	case 2:
		break;
	default: //Khi không thỏa mãn các trường hợp trên sẽ vào default
		break;
	}
	Lưu ý: Nếu quên không có break thì code sẽ chạy tìm đến câu lệnh break gần nhất
 */

int main()
{
	int choice;
	printf_s("Menu FPOLY\n");
	printf_s("1. Pho bo\n");
	printf_s("2. Pho ga\n");
	printf_s("3. Com Rang\n");
	printf_s("4. Bun moc\n");
	printf_s("Moi A/C chon mon: ");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("Ban cho 5 phut nhe\n");
		//break;
	case 2:
		printf("Ban cho 5 phut nhe\n");
		//break;
	case 3:
		printf("Ban cho 15 phut nhe\n");
		break;
	case 4:
		printf("Ban cho 5 phut nhe\n");
		break;
	default:
		printf_s("Mon ban chon khong co\n");
		break;
	}
}