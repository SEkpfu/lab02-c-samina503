#include <stdio.h>
#include <math.h>

int main()
{
    int god;
    printf("введите год:"); scanf("%d", &god);
    int sm = abs((god - 2020) % 12);

    
    printf("%d год - год", god);

    switch(sm) {
        case 0:
            printf("год крысы0 \n");
            break;
        case 1:
            printf("год коровы1 \n");
            break;
        case 2:
            printf("год тигра2 \n");
            break;
        case 3:
            printf("год зайца3 \n");
            break;
        case 4:
            printf("год дракона4 \n");
            break;
        case 5:
            printf("год змеи5 \n");
            break;
        case 6:
            printf("год лошади6 \n");
            break;
        case 7:
            printf("год овцы7 \n");
            break;
        case 8:
            printf("год обезьяны8 \n");
            break;
        case 9:
            printf("год курицы9 \n");
            break;
        case 10:
            printf("год собаки10 \n");
            break;
        case 11:
            printf("год свиньи11 \n");
            break;
        
    }
    return 0;
}