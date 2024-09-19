#include <stdio.h>

// Hàm swap sử dụng con trỏ để hoán đổi giá trị của hai biến
void swap(int *a, int *b)
{
    // Hoán đổi hai giá trị tại địa chỉ của con trỏ a và b mà không sử dụng biến tạm
    *a = *a + *b;   // Bước 1: Tính tổng của *a và *b, gán lại cho *a
    *b = *a - *b;   // Bước 2: Lấy tổng *a - *b, gán lại cho *b (lúc này *b có giá trị ban đầu của *a)
    *a = *a - *b;   // Bước 3: Lấy tổng mới trừ đi *b, gán lại cho *a (lúc này *a có giá trị ban đầu của *b)

    // In kết quả sau khi hoán đổi giá trị
    printf("After: \na = %d \nb = %d ", *a, *b);
}

int main() 
{
    int a, b;  // Khai báo hai biến a và b

    // Nhập giá trị cho biến a
    printf("a = ");
    scanf("%d", &a);

    // Nhập giá trị cho biến b
    printf("b = ");
    scanf("%d", &b);

    // In giá trị của a và b trước khi hoán đổi
    printf("Before: \na = %d \nb = %d \n", a, b);

    // Gọi hàm swap và truyền địa chỉ của a và b vào để hoán đổi
    swap(&a, &b);

    return 0;  // Kết thúc chương trình
}
