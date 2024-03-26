# include <stdio.h>
# include <locale.h>
# include <string.h>


int main(){
setlocale(LC_ALL,"");

// Declarando variáveis.

float notas,soma = 0, media;
int i;


// Solicitando dados ao usuário.

for (i = 1; i <= 2; i++){
   do{ 

	printf("Digite a %i nota do aluno: ", i);
	scanf("%f",&notas);			
}  while (notas < 0 || notas > 10);
// Calculo.
 	soma = soma + notas;
}

// Calculo.
 media = soma / 2;
 
// Exibindo resultados.

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Sua média é: %.1f \n",media);
return 0;
}
