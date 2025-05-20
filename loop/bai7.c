#include <stdio.h>

int main()
{
    int start, end;
    printf("Nhap 2 so bat dau va ket thuc cua bang so :");
    scanf("%d %d", &start, &end);
    for(int i = start; i <= 5; i++)
    {
        for(int j = i; j <= end; j += 5)
        {
            printf("%3d", j);
        }
        printf("\n");
    }
    return 0;
}