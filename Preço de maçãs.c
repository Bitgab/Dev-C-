# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
	setlocale (LC_ALL, "");
	
	
  // dECLARA��O DE VARI�VEL.
  	
	float precoMaca, custoTotal;
	int quantidade;
	
	
  // SOLICITA��O DE DADOS AO USU�RIO.
  
  printf("Digite a quantidade de ma��s que voc� adiquiriu: ");
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
   printf("Quantidade de ma��s: %i \n", quantidade);
   printf("Pre�o da ma��: %.2f \n", precoMaca);
   printf("Total a pagar: R$ &.2f",custoTotal);
   
	return 0;
 }
