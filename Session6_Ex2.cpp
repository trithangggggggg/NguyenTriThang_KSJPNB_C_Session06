#include <stdio.h>

int main(){
	int so[5];
	int sochan = 0;
	int sole = 0;
	printf("Moi nhap 5 so nguyen bat ki:\n ");
	for (int i = 0; i < 5; i++){
		scanf("%d",&so[i]); 
		if ( so[i] % 2 == 0 ){
			sochan++;
		}else {
			sole++;
		} 
	}
	printf("Co tat ca %d so chan \n",sochan); 
	printf("Co tat ca %d so le ",sole); 
	 
	return 0; 
}

