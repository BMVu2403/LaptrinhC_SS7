#include <stdio.h>

int main() {
    int mang[5] = {1, 3, 4, 6, 9};
    int co_so_chan = 0;

    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
            co_so_chan = 1;
        }
    }

    if (!co_so_chan) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

