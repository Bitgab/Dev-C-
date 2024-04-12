# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

#define Vetor 4

int main(){
setlocale(LC_ALL,"");

// Declarando variáveis.

int i;
int contadorNegativo = 0;
float numeros[Vetor];
float somaPositivo;
 
// Solicitando dados ao usuário.

for (i = 0; i < Vetor; i++){
	printf("Digite o %dº número: ", i + 1,numeros[i]);
	scanf("%f",&numeros[i]);
		if (numeros[i] < 0){
			contadorNegativo++;
		 }
		else if (numeros[i] > 0) {
			somaPositivo += numeros[i];
		} 		
}
system ("cls || clear");
 
 for (i = 0; i < Vetor; i++){
 	printf("%iº número: %.1f \n", i +1, numeros[i]);
 }
 printf("\nQuantidade de números Negativo: %d\n", contadorNegativo);
 printf("Quantidade de números Positivo: %.2f\n", somaPositivo);

return 0;	
}
