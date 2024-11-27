#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[100];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    return 0;
}

