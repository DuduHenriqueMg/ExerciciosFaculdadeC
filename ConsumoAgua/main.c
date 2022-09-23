
#include <stdio.h>
#include <locale.h>
 
 
int main(){
 
	setlocale(LC_ALL,"Portuguese");
 
	float cons;
	int ano=0, mes=0;
 
		printf("===Consumo de água===\n");
		
		do{
		 
		printf("Informe o consumo: \n");	
		scanf("%f",&cons);
 
 		system("cls");
 
		if(cons < 0){
			printf("O valor informado não pode ser menor que 0\n");
			}}while(cons<0);
		
 
			printf("Informe o ano: \n");
			scanf("%d",&ano);
 
 		do{
		 
			printf("Informe o mês: \n");
			scanf("%d",&mes);
 
			if(mes > 12 || mes < 1){
				printf("Insira um número de acordo com o mês!!!\n");
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
					printf("\nMês: Janeiro\n");
				break;
 
				case 2:
					printf("\nMês: Fevereiro\n");
				break;
 
				case 3:
					printf("\nMês: Março\n");
				break;
 
				case 4:
					printf("\nMês: Abril\n");
				break;
 
				case 5:
					printf("\nMês: Maio\n");
				break;
 
				case 6:
					printf("\nMês: Junho\n");
				break;
 
				case 7:
					printf("\nMês: Julho\n");
				break;
 
				case 8:
					printf("\nMês: Agosto\n");
				break;
 
				case 9:
					printf("\nMês: Setembro\n");
				break;
 
				case 10:
					printf("\nMês: Outubro\n");
				break;
 
				case 11:
					printf("\nMês: Novembro\n");
				break;
 
				case 12:
					printf("\nMês: Dezembro\n");
				break;
				default:
 
				printf("Insira um número de acordo com o mês!!!\n");
			}
			
			printf("Ano informado: %d",ano);
 
			if(ano %4==0 && ano%100!=0 || ano%400==0){
				printf("\nAno bissexto");
			}else{
				printf("\nAno não bissexto");
			}
 	
		return 0;
	}
