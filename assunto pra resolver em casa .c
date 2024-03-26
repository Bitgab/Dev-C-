# include <stdio.h>
# include <locale.h>
# include <string.h>

int main (){
setlocale(LC_ALL,"");

// Declarando variáveis.

float notas, media = 0, soma;
char continuar = 1, n, resultado[200];
int i;


// Solicitando dados ao usuário.

do{
	for(i = 1; i <= 3; i++){
	  do{
	 
	printf("Informe sua nota da %iª unidade: ",i);
	scanf("%f",&notas);	
	
// Pergunta se deseja continuar com a operação.
   
    printf("Deseja inserir mais uma nota? ");
    printf()
    scanf("%f",&notas);

  } while(continar == 's' )
		
 	
	
printf("\nDeseja continuar?");
printf("\n[y ou d]");
scanf("%s",continuar);	
}while(continuar == 'y');
return 0;
}
