#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int calc(){
    float x;
    float y;
    char c;

    printf("\nВведите простое выражение (2+2 и т.д.): ");
    scanf("%f%c%f", &x, &c, &y);

    switch(c){
    case '+':
        printf("%f %c %f = %f\n", x, c, y, x + y);
        break;
    case '-':
        printf("%f %c %f = %f\n", x, c, y, x - y);
        break;
    case '*':
        printf("%f %c %f = %f\n", x, c, y, x * y);
        break;
    case '/':
        if (y != 0) {
            printf("%f %c %f = %f\n", x, c, y, x / y);
        }
        else {
            printf("Ошибка: деление на ноль!\n");
        }
        break;
    case '^':
        printf("%f %c %f = %f\n", x, c, y, pow(x, y));
        break;
    default:
        printf("Неизвестная операция: %c\n", c);
        break;
    }
    return 0;
}

int task3(){
    int n;
    int days;

    printf("\nВведите количество прошедших месяцев: ");
    scanf("%d", &n);
    printf("Введите количество прошедших дней: ");
    scanf("%d", &days);

    int month = (n % 12) + 1;

    printf("\nПрошло месяцев: %d, дней: %d\n", n, days);
    printf("Название текущего месяца: ");

    switch(month){
    case 1:
        printf("Январь\n");
        break;
    case 2:
        printf("Февраль\n");
        break;
    case 3:
        printf("Март\n");
        break;
    case 4:
        printf("Апрель\n");
        break;
    case 5:
        printf("Май\n");
        break;
    case 6:
        printf("Июнь\n");
        break;
    case 7:
        printf("Июль\n");
        break;
    case 8:
        printf("Август\n");
        break;
    case 9:
        printf("Сентябрь\n");
        break;
    case 10:
        printf("Октябрь\n");
        break;
    case 11:
        printf("Ноябрь\n");
        break;
    case 12:
        printf("Декабрь\n");
        break;
    }
    return 0;
}

int main(){
    setlocale(LC_CTYPE, "RUS");
    char c;

    printf("Введите символ: ");
    scanf("%c", &c);

    switch(c){
    case '0':
        printf("Это цифра\n");
        break;
    case '1':
        printf("Это цифра\n");
        break;
    case '2':
        printf("Это цифра\n");
        break;
    case '3':
        printf("Это цифра\n");
        break;
    case '4':
        printf("Это цифра\n");
        break;
    case '5':
        printf("Это цифра\n");
        break;
    case '6':
        printf("Это цифра\n");
        break;
    case '7':
        printf("Это цифра\n");
        break;
    case '8':
        printf("Это цифра\n");
        break;
    case '9':
        printf("Это цифра\n");
        break;
    default:
        printf("Это буква\n");
        break;
    }
    calc();
    task3();
    return 0;
}