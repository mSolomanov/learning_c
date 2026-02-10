/*
У scanf есть свои спецификаторы формата.
%d = целое число в десятичной форме (int)
%u = целое беззнаковое (unsigned) число в десятичной форме (int) 
%o = целое беззнаковое (unsigned) число в восьмеричной форме (int)
%x = целое беззнаковое (unsigned) число в шестнадцатеричной форме (int)
%f = вещественное. (тип float или double)
%c = символ с текущей кодовой таблицей (тип char)
%s = строка, последовательность символов (тип char[])   - защита от переполнения буфера: %[макс_кол_во_символов]s

в scanf если нужен float>%f, если double>%lf

Так же есть модификаторы длины, которые указываются между % и спецификатором формата.
l = %ld, %li - long int | %hx, %ho, %hu - unsigned long int | %lf - double
L = %Lf - long double
ll = %lld - long long int | %llu - unsigned long long int
цифры = указывают максимальное количество символов для чтения (только для строк %s и символов %c)
* = пропуск данных.
*/

#include <stdio.h>

int main(void)
{
    //char byte;

    //int count =  scanf("%c", &byte);
    //printf("count = %d, byte = %c\n", count, byte);


    //char byte1 = '0', byte2 = '0';
    //int res = scanf("%c, %c", &byte1, &byte2);

    //printf("res = %d: byte1 = %c, byte2 = %c\n", res, byte1, byte2);


    //long long var_lli = 0;
    //double var_d = 0;
    //int res = scanf("%lld %lf", &var_lli, &var_d);

    //printf("res = %d: var_lli = %lld, var_d = %.2f\n", res, var_lli, var_d);


    unsigned int price = 0;
    double weight = 0.0;

    int res = scanf("%*llu; %u; %lf", &price, &weight);                         // благодаря * первое вводимое значение пропускается. 
    printf("res = %d, price = %u, weight = %.2f\n", res, price, weight);


    return 0;
}