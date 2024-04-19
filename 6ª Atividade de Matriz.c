#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL,"");
	
char nome  [3][200];
float nota [3][2], soma = 0;
float media[3];
int  i,j;

// Solicitando dados ao usuário.

for(i = 0; i < 3; i++){
	printf("Digite o nome da %dª disciplina: ", i+1);
	scanf("%s",&nome[i]);
	
	for (j = 0; j < 2; j++){
		printf("Digite a %dª nota: ",j+1);
		scanf("%f",&nota[i][j]);
		soma += nota[i][j];
	}
 
	media[i] = soma / 2.0;
	soma = 0;

 }
 

	
	// Exibindo Resultado.
	
	for(i = 0; i < 3; i++){
		printf("Nome da disciplina: %s\n",nome[i]);
	
		for(j = 0; j < 2; j++){
		printf("%dª notas: %.1f \n", j+1, nota[i][j]); 
	
		} 	  
		printf("A média do aluno: %.2f \n", media[i]);
		
	// If e Else.
	
		if (media[i] >= 7){
			printf("Aluno Aprovado!");
		} else if (media[i] >= 5 && media[i] < 7){
			printf("Aluno em  Recuperação!");
		} else{
			printf("Aluno Reprovado!");
		}

	}
return 0; 
}

