#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Nhap 2 gia tri a, b bat ky :");
    scanf("%d %d", &a, &b);
    //hoan doi co bien thu 3
    printf("Gia tri truoc khi hoan doi :\n a = %d, b = %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Gia tri sau khi hoan doi :\n a = %d, b = %d \n", a, b);
    //hoan doi khong dung bien thu 3
    printf("Gia tri truoc khi hoan doi :\n a = %d, b = %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Gia tri sau khi hoan doi :\n a = %d, b = %d \n", a, b);
    return 0;
}