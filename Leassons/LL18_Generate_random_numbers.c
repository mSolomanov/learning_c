/* Сгенерированные числа не случайны, а псевдослучайны. Вычисляются по некоторому алгоритму. 
Rand_max >= 32767
для использования rand нужна либа <stdlib.h>
для использования time нужна либа <time.h>
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t t = time(NULL);  // задает зерно для генерации автоматом. исходя из времени.
    srand(t); // задает определенное зерно вручную(если число внутри скобок определенное), для генерации чисел
    // либо эти 2 строки можно объединить:
    srand(time(NULL));

    int r_1 = rand();
    int r_2 = rand();

    printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());

// так же можно задать диапазон генерации с помощью деления по модулю и переменной % range, либо сместить диапазон к отрицательным числам как в r_4
// так же можно увеличить диапазон rand, просто сложив его rand() + rand() как в r_5
    srand(time(NULL));

    int range = 10;

    int r_3 = rand() % range;     // [0; range]
    int r_4 = rand() % range - 5; // [-5; range -5]
    int r_5 = rand() + rand();

    // вещественные числа тоже можно сгенерить
    double range_float = (double)rand() / (double)RAND_MAX; // [0; 1]

    printf("%d, %d, %.2f\n", r_3, r_4, range_float);


    return 0;
}