#include <stdio.h>

int main()
{
    int year;
    printf("Nhap 1 nam bat ky : ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//ktra nam nhuan 
    {
        printf("%d la nam nhuan !\n", year);
    }
    else
    {
        printf("%d la nam khong nhuan !\n", year);
    }
    return 0;
}