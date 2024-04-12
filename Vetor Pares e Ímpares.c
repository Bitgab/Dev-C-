# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

# define TAM 6

int main(){
setlocale(LC_ALL,"");

// Declarando as variáveis.
int i;
int numero[TAM];
int pares = 0, impares = 0;


// Solicitando daodosa ao usuário.

for (i = 0; i < TAM; i++){
	printf("Digite o %dº número:  ",i + 1, numero[i]);
	scanf("%i",&numero[i]);
	
		if (numero[i] % 2 == 0){
		pares++;
	} else {
		impares++;
	}
} 

 system("cls || clear");
// Exibindo Resultado.

printf("\n=== EXIBINDO RESULTADO ===\n");
for (i = 0; i < TAM; i++){
	printf("%dº número foi: %i\n", i + 1, numero[i]);}
printf("\nQuantidade de números Pares: %i\n", pares);
printf("Quantidade de números Ímpares: %i \n", impares);

return 0;	
}
