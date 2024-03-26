# include <stdio.h>
# include <locale.h>
# include <string.h>


int main(){
setlocale(LC_ALL,"");

// Declarando variáveis.

float notas = 0,soma = 0, media;
int i;


// Solicitando dados ao usuário.
do {
  soma = 0;
for (i = 1; i <= 2; i++){
	printf("Digite a %i°: ", i);
	scanf("%f",&notas);
// Calculo.	
	soma = soma + notas;
	}
    	
}while (notas < 0 || notas > 10);


// Calculo.	

media = soma / 2;


// Exibindo resultados.

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Sua média é: %.1f \n",media);
return 0;
}
