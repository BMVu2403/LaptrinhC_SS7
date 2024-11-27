#include <stdio.h>

int main() {
    int mang[] = {1, 2, 3, 4, 5};

    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < 5; i++) { 
        printf("%d\n", mang[i]);
    }
    printf("Do dai cua mang la: %d\n", 5);

    return 0;
}

