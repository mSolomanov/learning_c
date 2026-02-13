#include <stdio.h>

// короче макросы, которые можно вначале проги задавать, вкладывать в них какое то значение или текст, и в коде уже использовать их.
// есть #define - определение макроса, и #undef - она отменяет ранее определенный макрос. и благодаря этому макрос можно переопределить.
#define FIVE    5
#define TEN     2 * FIVE
#undef  TEN     
#define TEN     11
#define TEXT    "Text message in one line" // вот так можно в письме перенести строку, с помощью \, но на компиляции она будет единой.
#define TEXT2   "Text message in \
one line"
#define PRINT_D printf("digit = %d\n", digit)
#define FORMAT "digit = %d\n"

// ну и ниже код, написанный ранее заданными макросами
int main(void)
{
    int digit = FIVE;
    PRINT_D;

    digit = TEN;
    printf(FORMAT, digit);
    // printf("FORMAT\n", digit);  // нельзя так писать, при использовании макроса. потому что просто текст выведет, а не призовет макрос.
    printf(TEXT "\n");
    printf(TEXT2 "\n");

    return 0;
}