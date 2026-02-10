/*
Целочисленные типы данных при арифметических операциях приводятся к типу int.
При делении двух целочисленных значений, получится целочисленное значение. Дробная часть отбрасывается.


*/
#include <stdio.h>

int main(void)
{
    short a = -5;
    int b = 10;
    float c = 5.4f;
    double d = -6.5;

    int res_1 = a + b;      
    short res_2 = 100 - b;
    float res_3 = 5.4 - c;
    double res_4 = d * 4;

    //printf("first res: %d\n next2: %d\n next3: %.1f\n next4: %f\n", res_1, res_2, res_3, res_4);

    short a1 = -5;
    int b1 = 10;
    float c1 = 5.4f;
    double d1 = -6.5;

    int res_5 = 7 / 2;
    double res_6 = -9 / 2;
    float res_7 = a / c;
    double res_8 = d / b;


    short aa = -5;
    int bb = 10;
    // выше переменные целочисленные. Если результат нужен вещественный, перед операцией в () прописываем нужный тип данных результат.
    double rez_1 = (double)a / (double)b;
    // либо так. после цифры .0, чтобы оно считалось вещественным.
    double rez_2 = 7.0 / 2.0;


    double aaa = 5.21;
    double jq = 9.4;
    double resz = jq - aaa;

    printf("double_res: %f\n", resz);



    return 0;
}