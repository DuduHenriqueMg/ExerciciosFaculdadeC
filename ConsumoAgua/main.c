
#include <stdio.h>
#include <locale.h>
 
 
int main(){
 
	setlocale(LC_ALL,"Portuguese");
 
	float cons;
	int ano=0, mes=0;
 
		printf("===Consumo de �gua===\n");
		
		do{
		 
		printf("Informe o consumo: \n");	
		scanf("%f",&cons);
 
 		system("cls");
 
		if(cons < 0){
			printf("O valor informado n�o pode ser menor que 0\n");
			}}while(cons<0);
		
 
			printf("Informe o ano: \n");
			scanf("%d",&ano);
 
 		do{
		 
			printf("Informe o m�s: \n");
			scanf("%d",&mes);
 
			if(mes > 12 || mes < 1){
				printf("Insira um n�mero de acordo com o m�s!!!\n");
			}}while(mes > 12 || mes < 1);
 
				system("cls");
				
			printf("===RESULTADO===");
 
			printf("\nSeu consumo: %.2f m3",cons);
 
				if(cons <= 2.1){
					printf("\nConsumo BAIXO");
				}else{
					if(cons <= 6.1){
						printf("\nConsumo NORMAL");
					}else{
						if(cons <= 10.5){
							printf("\nConsumo ALTO");
						}else{
							if(cons > 10.5){
								printf("\nConsumo EXAGERADO");
							}
						}
					}
				}	
 
 
			switch(mes){
				case 1:
					printf("\nM�s: Janeiro\n");
				break;
 
				case 2:
					printf("\nM�s: Fevereiro\n");
				break;
 
				case 3:
					printf("\nM�s: Mar�o\n");
				break;
 
				case 4:
					printf("\nM�s: Abril\n");
				break;
 
				case 5:
					printf("\nM�s: Maio\n");
				break;
 
				case 6:
					printf("\nM�s: Junho\n");
				break;
 
				case 7:
					printf("\nM�s: Julho\n");
				break;
 
				case 8:
					printf("\nM�s: Agosto\n");
				break;
 
				case 9:
					printf("\nM�s: Setembro\n");
				break;
 
				case 10:
					printf("\nM�s: Outubro\n");
				break;
 
				case 11:
					printf("\nM�s: Novembro\n");
				break;
 
				case 12:
					printf("\nM�s: Dezembro\n");
				break;
				default:
 
				printf("Insira um n�mero de acordo com o m�s!!!\n");
			}
			
			printf("Ano informado: %d",ano);
 
			if(ano %4==0 && ano%100!=0 || ano%400==0){
				printf("\nAno bissexto");
			}else{
				printf("\nAno n�o bissexto");
			}
 	
		return 0;
	}
