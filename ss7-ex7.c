#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d (la so le): ", i + 1);
        scanf("%d", &arr[i]);

        while (arr[i] % 2 == 0) {
            printf("Hay nhap so le! Nhap lai phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
    }
    
    printf("Mang da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

