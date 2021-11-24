#include <stdio.h>
/*
 * BÀI 1.1 KHÁI NIỆM VỀ BIẾN
 * 1. Biến dùng để lữu trữ giá trị trong lập trình
 * 2. Biến được lưu vào RAM máy tính khi chương trình bắt đầu chạy và sẽ mất đi khi dừng chương trình
 * 3. Biến cần phải có kiểu dữ liệu ví dụ: int, float, char......
 */
 /*
  * Phần 1: Công thức khai báo biến
  * + <Kiểu dữ liệu> <Tên biến>;//Cách khai báo 1
  * + <Kiểu dữ liệu> <Tên biến 1>,<Tên biến 2>,<Tên biến 3>;//Khai báo nhiều biến có cùng kiểu dữ liệu
  * + <Kiểu dữ liệu> <Tên biến> =(toán tử gán) <giá trị>;
  *
  * <Kiểu dữ liệu>: Dùng để định nghĩa kiểu dữ liệu cho giá giá trị cần lưu trữ.
  */
  /*
   * Phần 2: Đặt tên biến
   * - Tên biến đặt dễ hiểu và đúng nghĩa
   * - Tên biến hạn chế đặt bằng tiếng việt khi đi làm về sau
   * - Không đặt tên biến gây hiểu nhầm.
   * - Tên biến có phân biệt chữ hoa chữ thường
   * Gồm 3 cách đặt tên biến với 2 từ trở lên
   * - C1: normal: sinhvien - thông thường tên biến sẽ đặt kiểu nomarl
   * - C2: CamelCase: SinhVien
   * - C3: Under_Score: sinh_Vien
   */

   /*
	* Phần 3: Các kiểu dữ liệu trong lập trình
	* Số nguyên: short,long, int
	* Số thực: float,double
	* Ký tự: char (Chỉ có thể lưu trữ được 1 ký tự)
	* Chuỗi: String (Ngôn ngữ C không có String)
	* Logic: Boolean trả ra True hoặc False nhưng trong C sẽ trả ra 0 và 1
	*/
int main()
{

	//Ví dụ 1:
	int a;//Khai báo 1 biến a có kiểu dữ liệu là số nguyên và không khởi tạo giá trị ban đầu
	a = 5;//Gán giá trị cho biến a thông qua toán tử =
	printf_s("%d \n", a);

	//Chạy chương trình: Ctrl + F5
	/*
	 * Bài 1: Viết 1 chương trình khai báo 3 năm sinh
	 * sau đó in 3 năm sinh ra màn hình theo công thức sau:
	 * Nam Sinh 1: 1999
	 * Nam Sinh 2: 2000
	 * Nam Sinh 3: 2001
	 *
	 * Bài 2: Viết 1 chương trình in điểm môn C ra màn hình
	 * theo công thức sau
	 * Diem C cua ban la: 8.6 - Double
	 *
	 * Bài 3: Viết 1 chương trình in 1 ký tự bất kì ra màn hình
	 *
	 * Bài 4: Viết 1 chương trình in thông tin điểm các môn các bạn đã học, Điểm C, Điểm Kỹ Năng học tập, Điểm Tiếng anh sau đó in ra màn hình các đầu điểm đó.
	 *
	 * Bài 5: Viết 1 chương trình nhập vào 3 điểm JAVA1, CSharp1, Tiếng Anh in ra các đầu điểm và điểm trung bình.
	 */

	 //Bài 1:
	printf_s("==========Bai 1=========== \n");
	int ns1 = 2000, ns2 = 2001, ns3 = 20002;//Khai báo báo nhiều biến cùng kiểu dữ liệu trên 1 dòng
	printf_s("Nam sinh 1: %d \n", ns1);
	printf_s("Nam sinh 2: %d \n", ns2);
	printf_s("Nam sinh 3: %d \n", ns3);

	//Bài 2:
	printf_s("==========Bai 2=========== \n");
	double diemC = 8.6;//Double là số thực
	printf_s("Diem C cua toi: %.1lf", diemC);

	//Bài 3:
	printf_s("==========Bai 3=========== \n");
	char c = '^';//Kiểu ký tự chỉ có thể lưu được 1 ký tự và nháy đơn
	printf_s("Ky tu yeu thich cua toi: %c \n", c);

	//Bài 4:
	printf_s("==========Bai 4=========== \n");
	double diemC1 = 9.8, diemKyNangHocTap = 9.5, diemTA = 8.6;
	printf_s("Diem lap Trinh C: %.1lf \n", diemC1);
	printf_s("Diem Ky Nang: %.1lf \n", diemKyNangHocTap);
	printf_s("Diem TA: %.1lf \n", diemTA);

	//Bài 5:
	printf_s("==========Bai 5=========== \n");
	double diemTBFpoly = (diemC1 + diemKyNangHocTap + diemTA) / 3;
	printf_s("Diem TB hoc o FPOLY la: %.1lf", diemTBFpoly);

	//Buổi sau trả lời: Tại sao trong lập trình lại phải tạo ra nhiều kiểu dữ liệu số thực và số nguyên.

	//Số nguyên: int, short, long...
	//Số thực : float, double.....
	//Giá trị kiểu logic: Trong C nó là 0 à 1, còn trên JAVA hoặc C# nó là true và flase
}

