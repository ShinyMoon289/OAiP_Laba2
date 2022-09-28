#include <stdio.h>

int main()
{
    int a = 0;
    printf("Введите число от 1 до 10\n");
    scanf_s("%d", &a);
    switch (a)
    {

    case 1:
        printf("Один");
        break;
    case 2:
        printf("Два");
        break;
    case 3:
        printf("Три");
        break;
    case 4:
        printf("Четыре");
        break;
    case 5:
        printf("Пять");
        break;
    case 6:
        printf("Шесть");
        break;
    case 7:
        printf("Семь");
        break;
    case 8:
        printf("Восемь");
        break;
    case 9:
        printf("Девять");
        break;
    case 10:
        printf("Десять");
        break;
    case 0:
        printf("Ноль");
        break;
    default :
        printf("Неверные данные");

    }

    return 0;
}

