# include <stdio.h>
# include <locale.h>
# include <limits.h>
# define TAM 5

int main (){
setlocale(LC_ALL,"");

// Declarando as vari�veis

int i;
int maiorNumero = INT_MIN, menorNumero = INT_MAX;
int v[TAM];

// Solicitando dados ao usu�rio.

for (i = 0; i < TAM; i++){
	printf("Digite o %d� n�mero: ",i + 1);
	scanf("%i",&v[i]);
	
	if (v[i] > maiorNumero){
 		maiorNumero = v[i];
 	} 	
 if (v[i] < menorNumero){
 	menorNumero = v[i];
 	}	
}
 

printf("\n=== EXIBINDO RESULTADO ===\n");

for(i = 0; i < TAM; i++){
   	printf("N�mero selecionado %d�: %i\n",i + 1, v[i]);
	}
printf("Maior n�mero: %d\n", maiorNumero);
printf("Menor n�mero: %d\n", menorNumero);


return 0;
}
