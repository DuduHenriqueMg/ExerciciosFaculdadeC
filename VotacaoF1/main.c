#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main(){
		
	setlocale(LC_ALL,"Portuguese");
		
	char num;
	int pessoa = 0,contador = 1, f=0, r=0, m=0, out=0;	
		
		printf("Qual a equipe mais privilegiada na Formula 1\n");		
		
		do{
		printf("Informe a quantidade de pessoas que serão entrevistadas ( A quantidade deve ser maior que 5): \n");
		scanf("%d",&pessoa);
		
		if(pessoa<5){
			printf("A quantidade deve ser maior que 5\n");	
		}}while(pessoa < 5);
		
		system("cls");
		
		
		if(pessoa>5){
				
			while(contador <= pessoa){
				
				system("cls");	
				printf("===Escolha uma equipe para votar===\n");
				printf("Ferrari='f',Red Bull='r',Mercedes='m',Outros qualquer outro digito\n");		
				printf("#Voto da pessoa %d: \n",contador);
				
				fflush(stdin);
				scanf(" %c",&num);
				
				num= tolower(num);
	
				contador++;
				
				switch(num){
					case 'f':
						f++;
						break;
						
					case 'r':
						r++;
						break;
						
					case 'm':
						m++;
						break;	
						
						default:
						out++;	
				}	
			}
				
			system("cls");
				
			printf("===RESULTADO DA VOTAÇÃO===\n");
				
			if (out < f+r+m){
				printf("Quantidade de votos na Ferrari: %d \n",f);
				printf("Quantidade de votos na Red Bull: %d \n",r);
				printf("Quantidade de votos na Mercedes: %d \n",m);
				printf("Quantidade de outras equipes privilegiadas: %d \n",out);		
			}else{
				printf("OUTRA EQUIPE PRIVILEGIADA!!!\n");
			}
		}
			
		return 0;
	}
