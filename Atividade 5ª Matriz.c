#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"");
	
char nome  [1][200];
float nota [2][2], soma = 0;
float media;
int  i,j;

for(i = 0; i < 1; i++){
	printf("Nome do %dª aluno: ", i+1);
	scanf("%s",&nome[i]);
	
	for (j = 0; j < 2; j++){
		printf("Digite a %dª nota: ",j+1);
		scanf("%f",&nota[i][j]);
		soma += nota[i][j];
	}
	media[i] = soma / 2;
	soma = 0;
}
for(i = 0; i < 1; i++){
	printf("%iª aluno: %s \n", i+1, aluno[i]);

	for(j = 0; j < 2; j++){
	printf("%iª notas: %.1f \n", j+i, nota[i][j]); 
	  } 
	  printf("\n");
 }





return 0;
}
