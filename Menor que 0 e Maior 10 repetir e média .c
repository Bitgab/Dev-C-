#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"");

// Declarando vari�veis.

int i;
float media, soma = 0, nota = 0;

// Solicitando dados ao usu�rio.

do{

for(i = 0; i < 2; i++){
	
	printf("Digite sua nota da %d� unidade: ",i + 1);
	scanf("%f",&nota);
	
// C�lculo aritm�tico.

soma += nota;
media = soma / (float) 2;
	} 
	
//if (nota <= 0 || nota >= 10){
		i++;
//	}
	
} while (nota <= 0 || nota >= 10);

// Exibindo Resultado.

printf("A m�dia do aluno: %.2f",  media);

return 0;	
}
