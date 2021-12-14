#include <stdio.h>
int main()
{
    int nilai;
    printf("Masukan Nilai anda :");
    scanf("%d",&nilai);
    if (nilai>=90 && nilai<=100)
    {
        printf("Grade A\n");
    }
    else if (nilai>=80 && nilai<90)
    {
        printf("Grade B\n");
    }
    else if (nilai>50 && nilai<80)
    {
        printf("Grade C\n");
    }
    else if (nilai>100)
    {
        printf("Invalid\n");
    }
    else{
        printf("Tidak lulus\n");
    }

    return 0;
}