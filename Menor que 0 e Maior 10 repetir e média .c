#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"");

// Declarando variáveis.

int i;
float media, soma = 0, nota = 0;

// Solicitando dados ao usuário.

do{

for(i = 0; i < 2; i++){
	
	printf("Digite sua nota da %dª unidade: ",i + 1);
	scanf("%f",&nota);
	
// Cálculo aritmético.

soma += nota;
media = soma / (float) 2;
	} 
	
//if (nota <= 0 || nota >= 10){
		i++;
//	}
	
} while (nota <= 0 || nota >= 10);

// Exibindo Resultado.

printf("A média do aluno: %.2f",  media);

return 0;	
}
