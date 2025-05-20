#include <stdio.h>

int main()
{
    int start, end;
    printf("Nhap so bat dau va ket thuc : ");
    scanf("%d %d", &start, &end);
    //day so tang dan
    printf("Day so tang dan : \n");
    for(int i = start; i <= end; i++)
    {
        printf("%d ", i);
    }
    //day so giam dan
    printf("\nDay so giam dan : \n");
    for(int j = end; j >= start; j--)
    {
        printf("%d ", j);
    }
    return 0;
}