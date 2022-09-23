#include <stdio.h>

//ALUNO:EDUARDO HENRIQUE MORAES GAMA
//PROFESSOR: DIEGO RODRIGUES

int main() {
	//ESSE PROGRAMA RECEBE A IDADE DO USUARIO E DIZ SE O VOTO E OBRIGATORIO, OPCIONAL,SEELE PODE VOTAR E SE ELE POSSUI O PREMIO
	
	//VARIAVEL
	
	int idade = 0;
	
	printf("==ELEITORAL==\n\n");
	
	//BLOCO DE IDADE DO USUARIO
	
	printf("Informe a idade: ");
	fflush(stdin);
	scanf("%d", &idade);
	printf("\nIdade informada: %d\n",idade);
	
	//BLOCO DO IF E ELSE
	
	if(idade<0){
		//SE A IDADE DO USUARIO FOR MENOR QUE 0 SERA IMPRESSO QUE NAO NASCEU
		
		printf("\nNao Nasceu");
	}else{
		if(idade<16){
			//SE A IDADE DO USUARIO FOR MENOR QUE 0 SERA IMPRESSO QUE ELE NAO PODE VOTAR
			
			printf("\nNao Vota");
		}else{
			if(idade<18){
				//SE A IDADE DO USUARIO FOR MENOR QUE 18 E MAIOR QUE 15 SERA IMPRESSO QUE O VOTO E OPCIONAL
				
				printf("\nOpcional");	
			}else{
				if(idade<65){
					//SE A IDADE DO USUARIO FOR ENTRE 65 E 18 SERA IMPRESSO QUE O VOTO E OBIGRATORIO
					
					if(idade==41){
						//SE A IDADE DO USUARIO FOR IGUAL A 41 SERA IMPRESSO APENAS QUE ELE TEM O PREMIO 1
						
						printf("\nPremio 1");
					}else{
						//SE A IDADE DO USUARIO NAO FOR 41 SERA IMPRESSO QUE O VOTO E OBRIGATORIO
						
						printf("\nObrigatorio");
					}	
				}else{
					if(idade==82){
						//SE A IDADE DO USUARIO FOR IGUAL A 82 SERA IMPRESSO APENAS QUE ELE TEM O PREMIO 2
						
						printf("\nPremio 2");
					}else{
						//SE A IDADE DO USUARIO NAO FOR 41 SERA IMPRESSO QUE O VOTO E OBRIGATORIO
						
						printf("\nOpcional");
					}
				}	
			}
		}
	}	
	
	return 0;
}
