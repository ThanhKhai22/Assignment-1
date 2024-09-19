# Exercise 1: 
## Answer: 
    int myNum = 1;
    int myNum1 = 10001;
    long myNum2 = 100000001;
    long long myNum3 = 10000000000001;
    long long myNum4 = -10000000000001;
    double myDoubleNum = 1.001;
    double myDoubleNum1 = 100000000000001.100001;
    double myDoubleNum2 = -1000000001.100001;
    char myLetter = 'A';n
    char myLetter1[] = "c";
    char myText[] = "Hello World";
    bool myBool = false;
    
# Exercise 2: 
## Answer: 
Hoán đổi giá trị của 2 biến a và b mà không sử dụng biến tạm bằng cách: 
```markdown
# Ví Dụ Code
```c
*a = *a + *b;   // Bước 1: Tính tổng của *a và *b, gán lại cho *a
*b = *a - *b;   // Bước 2: Lấy tổng *a - *b, gán lại cho *b (lúc này *b có giá trị ban đầu của *a)
*a = *a - *b;   // Bước 3: Lấy tổng mới trừ đi *b, gán lại cho *a (lúc này *a có giá trị ban đầu của *b)
