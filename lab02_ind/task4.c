#include <stdio.h>

int main()
{
    int chairs;
    printf("Введите колво стульев:"); scanf("%d", &chairs);

    printf("он сел на %d стул", chairs);

    int n = chairs %10;
    int n1 = chairs % 100;
    if (n1 >= 11 && n1 <= 14) {
        printf("ьев1");
    }   else {
        switch(n) {
            case 1:
                printf("0");
                break;
            case 2:
            case 3:
            case 4:
                printf("а2");
                break;
            default:
                printf("ьев3");
                break;

        }
    }
    printf("\n");

    return 0;
}