# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
	setlocale (LC_ALL, "");
	
	
  // dECLARAÇÃO DE VARIÁVEL.
  	
	float precoMaca, custoTotal;
	int quantidade;
	
	
  // SOLICITAÇÃO DE DADOS AO USUÁRIO.
  
  printf("Digite a quantidade de maçãs que você adiquiriu: ");
  scanf("%i",&quantidade);
  
  
  // IF E ELSE.
  
  if (quantidade <= 12){
   precoMaca = 1.30;
  } else ({
   precoMaca = 1.0;
  }
   
   
   // CALCULO.
   
  custoTotal = precoMaca * quantidade;	
   
   
   // EXIBINDO RESULTADO 	
   
   printf("\n=== EXIBINDO RESULTADO ===\n");
   printf("Quantidade de maçãs: %i \n", quantidade);
   printf("Preço da maçã: %.2f \n", precoMaca);
   printf("Total a pagar: R$ &.2f",custoTotal);
   
	return 0;
 }
