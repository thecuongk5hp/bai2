#include <stdio.h>

int main() {
    int n, x;
    
    do {
        printf("Nhap so phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    int arr[n];
    
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri x can dem: ");
    scanf("%d", &x);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("So lan xuat hien cua %d trong mang la: %d\n", x, count);

    return 0;
}

