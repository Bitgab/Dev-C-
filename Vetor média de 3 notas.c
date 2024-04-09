# include <stdio.h>
# include <locale.h>
# define TAM 3
int main (){
setlocale(LC_ALL,"");

int i;
float v[TAM];
float soma = 0, media;	

//v Solicitando dados ao usuaário 01ª.

for (i = 0; i < TAM; i++){
	printf("Informe sua nota da %dª unidade: ", i + 1);
	scanf("%f",&v[i]);
	 soma += v[i];	
}

	media = soma / TAM;
// Exibindo Resultado
printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Média do aluno: %.1f", media);

return 0;	
}
