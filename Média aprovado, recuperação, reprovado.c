# include <stdio.h>
# include <locale.h>
# include <string.h>

 int main(){
 setlocale(LC_ALL, "");
 
// Declarando variável.

float soma = 0, media, notas;
int i;
char resultado[200];

// Solicitando dados ao usúario.

for (i = 1 ; i <= 3; ++i){
  	printf("Digite sua nota da %i°: ", i);
     scanf("%f",&notas);
  
      soma += notas;
}

 
// Calculo.

media = soma / 3;


// Condicional If e Else.

if (media >= 7){ 
strcpy (resultado,"Aprovado!");
}else if (media >= 4){
strcpy (resultado,"Recuperação!");
} else {
strcpy (resultado,"Reprovado!");
}
 
 
// Resultado.

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Média : %.1f", media);
printf("\nResultado:%s",resultado);
 return 0;	
 }
