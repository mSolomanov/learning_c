#include <stdio.h>
#include <stdbool.h>  // библеотека для написания современного bool и значений true and false, вместо 0 и 1

int main(void)
{
    _Bool fl_view = 0;      // _Bool запись булевого типа старого типа. 0 - false. 1 - true.
    //printf("Size of _Bool %d\n", sizeof(_Bool));

    bool fl_view_1 = false;  // новый стандарт булевого типа, подключаемый библеотекой <stdbool.h>

    /* Операции сравнения (Comparison or Relational Operators)
    == сравнение на равенство (Equal to)
    != сравнение на неравенство (Not equal to)
    < сравнение на меньше (Less than)
    > сравнение на больше (Greater that)
    <= сравнение на меньше или равно (Less than or equal to)
    >= сравнение на больше или равно (Greater than or equal to) */

    double x = 5.67;
    int var_i = 7;

    bool fl_view_3 = x < 10;
    bool res_1 = 5 > 7;        // false
    bool res_2 = x+2 >= 10.56;  // false
    bool res_3 = var_i == 7;   // true  , сравнение на равенство можно делать только с целыми числами
    bool res_4 = var_i != 7;   // false , сравнение на равенство можно делать только с целыми числами

    //printf("res: %d\n", fl_view_3);

    
    int digit;  // обозначаю переменную

    //scanf("%d", &digit);  // ввожу значение этой переменной с клавиатуры

    bool even = digit % 2 == 0;  //обозначаю новую переменную even, приравниваю ее к digit, а digit делю по модулю на 2. и далее сравниваю равен ли результат 0
    //printf("%d", even);      // вывод результата сравнения. true or false

    //задача ниже сравнить, входит ли число определенное в диапазон [-2;5]
    //                      && (и) возвращает истину, если ОБА подусловия верны
    double y = 1.86;
    bool is_range = y >= -2 && y <= 5;
    //printf("%d\n", is_range);

    //задача ниже сравнить, не входит ли число определенное в диапазон [-2;5]
    //                             || (или) возвращает истину, если хотябы ОДНО из подусловий верно
    double y_2 = 10.86;
    bool is_not_range = y_2 < -2 || y_2 > 5;
    //printf("%d\n", is_not_range);
    // ! - это операция НЕ, то есть инвертирование
    is_not_range = !is_range;
    //printf("%d\n", is_not_range);

    /* Таблица приоритета операций сравнения 
    1 !     высший приоритет, и тд
    2 &&
    3 ||
    */

    int x_1 = 5;
    bool is_correct = (x_1 % 2 == 0 || x_1 % 3 == 0) && x_1 > 5;




    return 0;
}