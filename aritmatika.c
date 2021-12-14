#include <stdio.h>

int main()
{
    

    int a, b, c, d, e, f, g;
    a = 5;
    b = 10;
    c = 25;  
    d = 50;
    e = 75;
    f = 100;

    // Pertambahan
    printf("%d", c + e);
    printf("\n");

    // Pengurangan
    printf("%d", d = c);
    printf("\n");

    // Perkalian
    printf("%d", b * c);
    printf("\n");

    // Pembagian
    printf("Hasil Bagi %i dengan %i adalah %i", f, c, f / c);
    printf("\n");

    //Modulus
    printf("Masukan angka untuk modulus :");
    scanf("%d", &g);
    printf("Modulus %d ke %d adalah %d", f, g, f % g);
    printf("\n");

    return 0;
}