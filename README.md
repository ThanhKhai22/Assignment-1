# Exercise 1: 
## Answer: 
    short myNum = 1;                             short: từ -32,768 đến 32,767
    short myNum1 = 10001;

    int myNum2 = 100000001;                      int: từ -2,147,483,648 đến 2,147,483,647
    
    long long myNum3 = 10000000000001;           long long: từ -9,223,372,036,854,775,808 đến 9,223,372,036,854,775,807
    long long myNum4 = -10000000000001;
    
    double myDoubleNum = 1.001;                  double: từ 5.0 x 10^−324 đến 1.7 x 10^308
    double myDoubleNum1 = 100000000000001.100001;
    double myDoubleNum2 = -1000000001.100001;
    
    char myLetter = 'A';                         char: từ -128 đến 127
    char myLetter1[] = "c";
    char myText[] = "Hello World";
    
    bool myBool = false;                         bool: có giá trị true và false
    
# Exercise 2: 
## Answer: 
Hoán đổi giá trị của 2 biến a và b mà không sử dụng biến tạm bằng cách: 
```c
*a = *a + *b;   // Bước 1: Tính tổng của *a và *b, gán lại cho *a
*b = *a - *b;   // Bước 2: Lấy tổng *a - *b, gán lại cho *b (lúc này *b có giá trị ban đầu của *a)
*a = *a - *b;   // Bước 3: Lấy tổng mới trừ đi *b, gán lại cho *a (lúc này *a có giá trị ban đầu của *b)

với a = 5, b = 10:
a = 5 + 10 =15
b = 15 - 10 = 5
a = 15 - 5 = 10
```

# Exercise 3: 
## Answer:
Thao tác cơ bản với file:
- Mở file -> Ghi dữ liệu vào file -> Đóng file
- Mở file -> Đọc dữ liệu từ file -> Đóng file

# Exercise 4: 
## Answer:
Xác định đúng kiểu dữ liệu và giới hạn của từng biến
