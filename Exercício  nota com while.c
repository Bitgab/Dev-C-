# include <stdio.h>
# include <string.h>
# include <locale.h>




int main (){
setlocale(LC_ALL,"");
	
// Declaração de variáveis.

int valor = 1,soma = 0, contador = 0;
float media; 	


// Solicitando dados ao usuário.
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
		printf("Não foram inseridos números positivos. \n");
	}else {
	
		printf("média:  %.1f\n",media);
	}	


	
return 0;	
}
