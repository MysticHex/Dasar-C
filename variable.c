// %d untuk integer
// %s untuk string (Array Char) Kutip harus 2
// %c untuk char Kutip harus 1
// %f untuk float
#include <stdio.h>
int main()
{
    // Char
    char poin='H';
    char poi='A';
    char po='I';
    printf("Poin anda %c%c%c",poin,poi,po);

    // Enter
    printf("\n");
    // String (array Char)
    char nama[]="";
    printf("Nama anda %s\n",nama);

    //Int 
    int x=15;
    int y=25;
    printf("Jumlah tambah %d dan %d adalah %d ",x,y,x+y);
    
    // Enter
    printf("\n");

    // Float
    float ipk=2.3;
    printf("%f",ipk);


    return 0;
}
