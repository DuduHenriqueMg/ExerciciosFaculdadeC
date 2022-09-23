#include <stdio.h>

int main() {
	
	int numero = 0;
	int i = 0;
	
	printf("===REPETICAO===\n\n");
	
	printf("Informe um numero ate 1000: ");
	scanf("%d", &numero);
	
	if(numero >1000){
		printf("\nEsse numero e maior que 1000");
	}else{
		for(i=1;i<=numero;i++){
			if(i % 15 == 0){
				printf("\nM15");
			}else{
				if(i % 10 == 0){
					printf("\nM10");
				}else{
					if(i % 5 == 0){
						printf("\nM5");
					}else{
						printf("\n%d", i);
					}
				}	
			}
		}
	}
	return 0;
}
