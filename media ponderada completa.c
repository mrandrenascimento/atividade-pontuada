#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define DISCIPLINAS 3 //para ajudar na variavel referentes a disciplina e notas e nao se perder com os numeros pedidos pela questao
#define NOTAS 3
int main(){
	
	//declarando as variaveis
	
	int peso[3]={3,3,4};
	int i,j;
	int pesoTotal, somaPonderada;
	float notas[DISCIPLINAS][NOTAS];
	char disciplinas[DISCIPLINAS][200];
	float mediaPonderada[NOTAS];
	
			setlocale(LC_ALL,"");//converte para o idioma local "portuguese"
		
		//inicio do la�o for repeti��o i, j
		for(i=0;i<DISCIPLINAS;i++){
			
			printf("Digite a %i� Disciplina: ",i+1);
			scanf("%s",&disciplinas[i]);
				//inicio da la�o repeti��o j
				
				for(j=0;j<NOTAS;j++){
					
					printf("Digite a %i� Nota: ",j+1);
					scanf("%f",&notas[i][j]);
					
					//inicio do la�o de repeticao quando anota for
					//menor que 0 ou maior que 10
					
					do{
						if(notas[i][j]<0||notas[i][j]>10){
							
							//se as notas inseridas forem menor que zero e
							//maior que 10, o usuario ira repetir ate que as
							//notas estejam de acordo com o que a questao pede
							
							printf("Digite a %i� Nota: ",j+1);
							scanf("%f",&notas[i][j]);
								
						}	//fim da laco de repeti��o 
						
					}while(notas[i][j]<0||notas[i][j]>10);
						
							//iniciando o calculo das pondera��es
					
					somaPonderada+=peso[j]*notas[i][j];
					
					pesoTotal+=peso[j];
					
							//calculando a media ponderada
						
				}	mediaPonderada[i]=somaPonderada/pesoTotal;
		}				//fim do laco de repeti��o for
				
				system("cls"); //para apagar as informa��es anteriores 
				
							//imprimindo as respostas para o usuario
				
		for(i=0;i<DISCIPLINAS;i++){
			
			printf("\n%i� Disciplina: %s\n",i+1,disciplinas[i]);
			
				for(j=0;j<NOTAS;j++){
					
					printf("\t%i� Nota: %.2f\n",j+1,notas[i][j]);
					
					//imprimindo a m�dia Ponderada
				}	printf("M�dia Ponderada da %i� Disciplina: %.2f\n",i+1,mediaPonderada[i]);
		}		
		
return 0;
}
