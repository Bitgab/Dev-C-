#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"");
	
char aluno [4][200];
float nota [4][3];
float media[4], soma = 0;
int  i,j;


printf("Conte�do do vetor:\n");

for(i = 0; i < 4; i++){
	printf("%d� aluno: ",i + 1);
	scanf("%s",&aluno[i]);
	
	for(j = 0; j < 3; j++){
		printf("Digite a %d� nota: ", j+1);
		scanf("%f",&nota[i][j]);
		
		soma = soma + nota[i][j];
		
	}	
	printf("\n");
	media [i] = soma /  3;
	soma = 0;
}

for(i = 0; i < 4; i++){
	printf("Nome do %d� aluno: %s \n", i + 1,aluno[i]);
	
	for(j = 0; j < 3; j++){
		printf("%i� nota do aluno: %.1f",j + 1, nota[i][j]);
		
	}
	printf("A m�dia do Aluno: %.2f",media[i]);
}


return 0;
}
