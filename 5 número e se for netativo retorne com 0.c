# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

#define Vetor 5

int main (){
setlocale(LC_ALL,"");

float numero[Vetor], positivo;
int i, contadorNegativo = 0;

for(i = 0; i < Vetor; i++){
	printf("Digite o %d� n�mero: ", i + 1);
	scanf("%f",&numero[i]);
	
	if (numero[i] < 0){
		numero[i] = 0;
	}

	} 

	

system ("cls || clear");

for (i = 0; i < Vetor; i++){
	printf("%i� n�mero: %.1f\n", i + 1, numero[i]);
}	

return 0;	
}
