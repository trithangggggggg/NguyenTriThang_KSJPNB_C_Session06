#include <stdio.h>

int main() {
	//armstrong la so 3 chu so ma tong cua 3 don vi lap phuong len bang chinh no  
    int so, tram, chuc, donvi;
	int tonglapphuong;

    printf("Tat ca cac so armstrong co 3 chu so :\n");

    for (so = 100; so <= 999; so++) {
        tram = so / 100;
        chuc = (so / 10) % 10;
        donvi = so % 10;
        tonglapphuong = tram*tram*tram + chuc*chuc*chuc + donvi*donvi*donvi;
        if (so == tonglapphuong) {
            printf("%d\n", so);
        }
    }
    return 0;
}
