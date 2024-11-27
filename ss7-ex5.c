#include <stdio.h>

int main() {
    int mang[5] = {12, 5, 9, 23, 7};

    int max = mang[0], min = mang[0];

    for (int i = 1; i < 5; i++) {
        if (mang[i] > max) max = mang[i];
        if (mang[i] < min) min = mang[i];
    }
    printf("Lon nhat: %d, Nho nhat: %d\n", max, min);
    return 0;
}

