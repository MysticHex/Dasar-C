#include <stdio.h>
int main()
{
    int i, a = 5,b=10;
    // for
    for (i = 0; i <= 10; i++)
    {
        printf("%i\n", i);
    }
    printf("\n\n");

    // loop while
    while (a > 0)
    {
        printf("%i\n", a);
        a--;
    }
    printf("\n\n");

    // loop do while 
    do
    {
        printf("%i\n",b);
        b--;
    } while (b>5);
    

    return 0;
}
