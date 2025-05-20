#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap 2 gia tri a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);
//so sanh 2 so
    if(a > b)
    {
        printf("a(%d) lon hon b(%d)!\n", a, b);
    }
    else
    {
        printf("a(%d) nho hon b(%d)!\n", a, b);
    }
//tim so lon nhat
    if(a > b && a > c)
    {
        printf("%d la so lon nhat !\n", a);
    }
    else if(b > a && b > c)
    {
        printf("%d la so lon nhat !\n", b);
    }
    else
    {
        printf("%d la so lon nhat !\n", c);
    }
//ktra chan le
    if (a % 2 == 0)
    {
        printf("a(%d)la so chan !\n", a);
    }
    else
    {
        printf("a(%d)la so le !\n", a);
    }
//ktra so am duong
    if(a > 0)
    {
        printf("a(%d)la so duong !\n", a);
    }
    else
    {
        printf("a(%d)la so am !\n", a);
    }
    return 0;
}