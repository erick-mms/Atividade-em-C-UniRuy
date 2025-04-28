#include <stdio.h>

int main() {
	int a[5];
	int resultado=0;
	
	for(int i=0; i<5; i++) {
		printf("diga ae pae:");
		scanf("%d", &a[i]);
		if(a[i]<0) {
			resultado=resultado+1;
		}
	}
	printf("o resultado e:%d",resultado);
	return 0;



}