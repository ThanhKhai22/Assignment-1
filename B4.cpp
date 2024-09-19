#include <stdio.h>
#include <string.h>

int main()
{
    // Khai báo biến cho thông tin của nhân viên
    char firstName[50];        // Tên đầu tiên của nhân viên
    char lastName[50];         // Họ của nhân viên
    int age;                   // Tuổi của nhân viên
    char gender[10];           // Giới tính của nhân viên
    char personalID[10];       // Số ID cá nhân của nhân viên
    char uniEmpNum[9];         // Số nhân viên duy nhất (chuỗi 8 ký tự)

    // Nhập tên đầu tiên của nhân viên
    printf("First name: ");
    scanf("%s", firstName);  // Đọc chuỗi tên đầu tiên từ người dùng

    // Nhập họ của nhân viên
    printf("Last name: ");
    scanf("%s", lastName);  // Đọc chuỗi họ từ người dùng
    
    // Nhập tuổi với kiểm tra giá trị hợp lệ
    do
    {
        printf("Age: ");
        scanf("%d", &age);  // Đọc giá trị tuổi từ người dùng
        // Kiểm tra tuổi có trong khoảng từ 0 đến 100 không
    } while (age < 0 || age > 100);

    // Nhập giới tính với kiểm tra giá trị hợp lệ
    do
    {
        printf("Gender: ");
        scanf("%s", gender);  // Đọc chuỗi giới tính từ người dùng
        // Kiểm tra giới tính phải là "male" hoặc "female"
    } while (strcmp(gender, "male") != 0 && strcmp(gender, "female") != 0);

    // Nhập số ID cá nhân của nhân viên
    printf("Personal ID: ");
    scanf("%s", personalID);  // Đọc chuỗi số ID cá nhân từ người dùng

    // Nhập số nhân viên duy nhất với kiểm tra giá trị hợp lệ
    do
    {
        printf("Unique Employee number: ");
        scanf("%s", uniEmpNum);  // Đọc chuỗi số nhân viên từ người dùng
        // Kiểm tra số nhân viên phải có 8 ký tự và chỉ chứa các chữ số
    } while (strlen(uniEmpNum) != 8 || strspn(uniEmpNum, "0123456789") != 8);
    
    // In thông tin nhân viên ra màn hình
    printf("\n\nFirst name: %s", firstName);  // In tên đầu tiên của nhân viên
    printf("\nLast name: %s", lastName);    // In họ của nhân viên
    printf("\nAge: %d", age);                // In tuổi của nhân viên
    printf("\nGender: %s", gender);          // In giới tính của nhân viên
    printf("\nPersonal ID: %s", personalID); // In số ID cá nhân của nhân viên
    printf("\nUnique Employee number: %s", uniEmpNum);  // In số nhân viên duy nhất

    return 0;
}
