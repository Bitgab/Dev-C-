# include <stdio.h>
# include <string.h>
# include <locale.h>




int main (){
setlocale(LC_ALL,"");
	
// Declara��o de vari�veis.

int valor = 1,soma = 0, contador = 0;
float media; 	


// Solicitando dados ao usu�rio.
while(valor > 0){

	 printf("Digite um valor: ");
 	scanf("%i",&valor);	
  if (valor > 0){
  	soma += valor;
  	contador ++;
  	}
   
   }	
	
	media = soma / (float) contador;
	printf("\n=== Exibindo resultados ===\n");
	if (contador == 0 ){
		printf("N�o foram inseridos n�meros positivos. \n");
	}else {
	
		printf("m�dia:  %.1f\n",media);
	}	


	
return 0;	
}
