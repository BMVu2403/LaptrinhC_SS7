#include <stdio.h>

int main() {
    int hang, cot;

    printf("Nhap so hang va so cot: ");
    scanf("%d %d", &hang, &cot);

    int arr[hang][cot];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Mang 2 chieu:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

