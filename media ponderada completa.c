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
		
		//inicio do laço for repetição i, j
		for(i=0;i<DISCIPLINAS;i++){
			
			printf("Digite a %iª Disciplina: ",i+1);
			scanf("%s",&disciplinas[i]);
				//inicio da laço repetição j
				
				for(j=0;j<NOTAS;j++){
					
					printf("Digite a %iª Nota: ",j+1);
					scanf("%f",&notas[i][j]);
					
					//inicio do laço de repeticao quando anota for
					//menor que 0 ou maior que 10
					
					do{
						if(notas[i][j]<0||notas[i][j]>10){
							
							//se as notas inseridas forem menor que zero e
							//maior que 10, o usuario ira repetir ate que as
							//notas estejam de acordo com o que a questao pede
							
							printf("Digite a %iª Nota: ",j+1);
							scanf("%f",&notas[i][j]);
								
						}	//fim da laco de repetição 
						
					}while(notas[i][j]<0||notas[i][j]>10);
						
							//iniciando o calculo das ponderações
					
					somaPonderada+=peso[j]*notas[i][j];
					
					pesoTotal+=peso[j];
					
							//calculando a media ponderada
						
				}	mediaPonderada[i]=somaPonderada/pesoTotal;
		}				//fim do laco de repetição for
				
				system("cls"); //para apagar as informações anteriores 
				
							//imprimindo as respostas para o usuario
				
		for(i=0;i<DISCIPLINAS;i++){
			
			printf("\n%iª Disciplina: %s\n",i+1,disciplinas[i]);
			
				for(j=0;j<NOTAS;j++){
					
					printf("\t%iª Nota: %.2f\n",j+1,notas[i][j]);
					
					//imprimindo a média Ponderada
				}	printf("Média Ponderada da %iª Disciplina: %.2f\n",i+1,mediaPonderada[i]);
		}		
		
return 0;
}
