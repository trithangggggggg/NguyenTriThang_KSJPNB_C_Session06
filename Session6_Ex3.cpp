#include <stdio.h>

int main() {
    int matkhaugoc = 88888888;
    int input;

    printf("Moi nhap mat khau: ");
    scanf("%d", &input);

    if (input == matkhaugoc) {
        printf("Mat khau dung \n");
    } else {
        printf("Mat khau sai \n");
    }

    return 0;
}

