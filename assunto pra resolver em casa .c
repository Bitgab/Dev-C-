# include <stdio.h>
# include <locale.h>
# include <string.h>

int main (){
setlocale(LC_ALL,"");

// Declarando vari�veis.

float notas, media = 0, soma;
char continuar = 1, n, resultado[200];
int i;


// Solicitando dados ao usu�rio.

do{
	for(i = 1; i <= 3; i++){
	  do{
	 
	printf("Informe sua nota da %i� unidade: ",i);
	scanf("%f",&notas);	
	
// Pergunta se deseja continuar com a opera��o.
   
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
