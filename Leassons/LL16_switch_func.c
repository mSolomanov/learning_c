#include <stdio.h>

/*int main(void)
{
    int item;

    printf("1. Learning C language\n"
           "2. Learning Python Language\n"
           "3. Learning Java Language\n"
           "4. Learning C++ language\n"
           "5. Exit\n");
        // проверка на ввод целочисленного значения %d
    if(scanf("%d", &item) !=1) {
        printf("Error Input");
        return 0;
    }

    switch(item) {
    case 1: 
        printf("Learning C language\n");
        return 0;   // так же аналог break; тоже метка если срабатывает, следующие не активируются. но с ней завершается текущая функция.
    case 2:
        printf("Learning Python Language\n"); // после отработки 1 метки, все метки ниже нее автоматом тоже отрабатывают.
        break; // но если после метки прописать break; тогда после срабатывания метки она остановится, и следующие метки не отработают. функция не завершается.
    case 3:
        printf("Learning Java Language\n");
        break;
    case 4:
        printf("Learning C++ language\n");
        break;
    case 5:
        printf("Exit\n");
        break;
    }

    return 0;
}*/

int main(void)
{
    char item2;

    if(scanf("%c", &item2) !=1) {
        printf("error input");
        return 0;
    }

    switch(item2) {
    case 'a':
    case 'A':
        printf("Symbol A\n");
        break;
    case 'b':
    case 'B':
        printf("Symbol B\n");
        break;
    case 'c':
    case 'C':
        printf("Symbol C\n");
        break;
    default: // если ни одна из меток не сработала. тогда сработает принтф снизу. default можно прописать в любом месте switch. и вначале и в конце.
        printf("Incorrect Symbol\n");
        break;  // после default тоже нужно прописать break; иначе все что ниже так же сработает.
    }



}