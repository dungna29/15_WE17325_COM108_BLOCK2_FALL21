#include <stdio.h>
/*
* Hàm không trả về - void
*	1. Không tham số
*	2. Có tham số
* Cách sử dụng:
*	1. Tên hàm phải có nghĩa
*	2. Tên hàm luôn có động từ đứng trước:
*		Ví dụ: tinhTong(),layDsSinhVien, getLstSinhVien.....
  Công thức:
  <Kiểu hàm> <Tên hàm> (<Các tham số truyền vào>)
  {
		//Body code
  }
*/
void tinhTong()//() = Hàm không tham số | void = không trả về
{
	int a = 5, b = 2;
	printf_s("%d + %d = %d \n", a, b, a + b);
}
/*
 * Đối với hàm có tham số:
 *	- Có thể truyền nhiều kiểu dữ liệu
 *	- Khi sử dụng phải truyền đủ tham số
 */
void tinhTong2(int a, int b)
{
	printf_s("%d + %d = %d \n", a, b, a + b);
}
void tinhNhan3So(int a,int b, int c)
{
	printf_s("%d x %d x %d = %d \n", a, b,c, a*b*c);
}
/*
 * Tham số có thể là nhiều kiểu dữ liệu khác nhau ko nhất thiết cùng 1 kiểu
 */
void chucNang1(char c, double d, float f,int a)
{
	
}
/*
 * Thông thường chúng ta phải khai báo hàm ở phía trên. Nhưng nếu như nhiều hàm sẽ gây khó quản lý code.
 */
void hamChucNang1();//Khai báo hàm phía trên sẽ giúp hàm Main gần phía đầu hơn
void tinhTong5So(int a, int b, int c, int d, int e);
int main()
{
	printf_s("Chao cac ban den voi bai Ham \n");
	//Phần 1: Cách gọi hàm không tham số: Phải biết tên hàm, kết thúc bằng dấu ();

	//tinhTong; Sai bởi kết thúc hàm phải ();
	tinhTong();//Gọi hàm thì kết thúc phải là ();

	//Phần 2: Khi sử dụng hàm có tham số phải truyền tham số đúng vị trí và đúng kiểu dữ liệu
	//tinhTong2(); Sai vài không truyền tham số
	//tinhTong2(1); Sai vì truyền không đủ tham số
	tinhTong2(10, 7);//Truyền tham số

	//Bài tập tạo 1 hàm phép nhân 3 số bằng void có tham số.
	tinhNhan3So(3, 3, 3);
	hamChucNang1();
}
void hamChucNang1()
{
	
}
void tinhTong5So(int a, int b, int c, int d, int e)
{
	//Triển khai code như bình thường và đừng quên khai báo ở trên
}