#include <stdio.h>

// Hàm nhập dữ liệu từ người dùng
void input_data(int *a, int *b) {
    // Nhập số nguyên thứ nhất từ người dùng
    printf("a = ");
    scanf("%d", a);  // Lưu giá trị nhập vào biến a

    // Nhập số nguyên thứ hai từ người dùng
    printf("b = ");
    scanf("%d", b);  // Lưu giá trị nhập vào biến b
}

// Hàm ghi dữ liệu vào file
void write_to_file(const char *fileName, int a, int b) {
    // Mở file ở chế độ ghi
    FILE *file = fopen(fileName, "w");
    
    // Kiểm tra xem file có mở thành công không
    if (file == NULL) {
        printf("Không thể mở file để ghi!\n");
        return;  // Thoát hàm nếu không thể mở file
    }

    // Ghi hai số nguyên vào file, cách nhau bởi dấu cách
    fprintf(file, "%d %d", a, b);

    // Đóng file sau khi ghi xong
    fclose(file);
}

// Hàm đọc dữ liệu từ file
void read_from_file(const char *fileName, int *a, int *b) {
    // Mở file ở chế độ đọc
    FILE *file = fopen(fileName, "r");

    // Kiểm tra xem file có mở thành công không
    if (file == NULL) {
        printf("Không thể mở file để đọc!\n");
        return;  // Thoát hàm nếu không thể mở file
    }

    // Đọc hai số nguyên từ file
    fscanf(file, "%d %d", a, b);

    // Đóng file sau khi đọc xong
    fclose(file);
}

int main() {
    int a, b;  // Khai báo hai biến số nguyên
    const char *fileName = "B3.txt";  // Tên file để ghi và đọc dữ liệu

    // Nhập dữ liệu từ người dùng
    input_data(&a, &b);

    // Ghi dữ liệu vào file
    write_to_file(fileName, a, b);

    // Đọc dữ liệu từ file
    read_from_file(fileName, &a, &b);

    // Tính và in tổng của hai số
    printf("Sum(a, b) = %d\n", a + b);

    // Tính và in hiệu của hai số
    printf("Diff(a, b) = %d\n", a - b);

    return 0;  // Kết thúc chương trình thành công
}
