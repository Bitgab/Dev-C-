# include <stdio.h>
# include <stdlib.h>
# include <locale.h> 

   int main (){
   	   setlocale(LC_ALL, "portuguese");
	   setlocale(LC_ALL, "");
   	
   	// Declara��o da vari�vel.
   	
   	 float salario; 
   	 float salarioMinimo = 1412.00;
   	 float qtdSalario;
   	// Solicitando dado.
	   
	 printf("Digite o valor do seu sal�rio: "); 
	 scanf ("%f",&salario);
	 
	 
	 // Calculo.
	 
	 qtdSalario = salario / salarioMinimo;
	 
	 
	 //Exibindo Resultado.
	 printf("\n=== EXIBINDO RESULTADO ===\n");
	 printf("Sal�rio informado: R$ %.2f \n",salario);
	 printf("Quantidade de sal�rio: %.1f",qtdSalario);
	  
   	return 0;
   	
   }
