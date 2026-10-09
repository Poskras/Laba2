
#define _CRT_SECURE_NO_WARNINGS
//21ВАРИАНТ
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 10;
    int y = 5;
    int z = 3;

    int cena_yablok = 1;
    int cena_grush = 2;
    int cena_apelsinov = 3;

    int ponedelnik;
    int vtornik;
    ponedelnik = x * cena_yablok
        + y * cena_grush
        + z * cena_apelsinov;

    // стоимость за вторник
    vtornik = x * cena_yablok
        + y * cena_grush
        + z * cena_apelsinov;

    printf("Фруктовый магазин\n\n");

    printf("В понедельник продали %d яблок, %d груш "
        "и %d апельсина.\n", x, y, z);

    printf("Выручка за понедельник: %d руб.\n\n",
        ponedelnik);

    printf("Во вторник продали %d яблок, %d груш "
        "и %d апельсина.\n", x, y, z);

    printf("Выручка за вторник: %d руб.\n",
        vtornik);

    return 0;
}
