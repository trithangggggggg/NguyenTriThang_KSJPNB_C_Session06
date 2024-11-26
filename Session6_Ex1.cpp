#include <stdio.h>

int main() {
    int number[5];
    int Tong = 0;

    printf("Nhap 5 so nguyen:\n");
    for ( int i = 0; i < 5; i++){
        scanf("%d", &number[i]);
        if (number[i] % 2 != 0){
            Tong = Tong + number[i];
        }
    }
    printf("Tong cac so le: %d\n", Tong);
    return 0;
}
