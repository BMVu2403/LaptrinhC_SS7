#include <stdio.h>

int main() {
    int mang[5];

    printf("Nhap 5 phan tu cho mang:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &mang[i]);
    }
    
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }

    return 0;
}

