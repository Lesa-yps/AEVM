#include <stdio.h>
#include <stdlib.h>

#define len 9         // Размер массива
#define enroll 2      // Количество обрабатываемых элементов за одну итерацию

int _x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main()
{
    int x20 = (len - 1) / enroll;
    int *x1 = _x;
    int x31 = x1[0];  // Инициализация x31 первым элементом массива
    x1 += 1;
    do {
        int x2 = x1[0];
        int x3 = x1[1];
        if (abs(x2) >= abs(x31))
            x31 = x2;
        if (abs(x3) >= abs(x31))
            x31 = x3;
        x1 += enroll;  // Переход к следующей паре элементов
        x20 -= 1;
    } while (x20 != 0);
    printf("Максимальное значение по модулю: %d.\n", x31);
    return 0;
}
