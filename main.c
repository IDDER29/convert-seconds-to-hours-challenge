#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S;
    int min = 0,h = 0;
    printf("Hello world!\n");
    printf("Enter the number of seconds you want to convert : ");
    scanf("%d", &S);

    if(S>=60){
        min = S/60;
        S = S%60
        ;
    }

    if(min>=60){
        h = min/60;
        min = min%60;
    }

    printf("%d h %d min %d s", h, min, S);

    return 0;
}
