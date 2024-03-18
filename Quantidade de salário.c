# include <stdio.h>
# include <stdlib.h>
# include <locale.h> 

   int main (){
   	   setlocale(LC_ALL, "portuguese");
	   setlocale(LC_ALL, "");
   	
   	// Declaração da variável.
   	
   	 float salario; 
   	 float salarioMinimo = 1412.00;
   	 float qtdSalario;
   	// Solicitando dado.
	   
	 printf("Digite o valor do seu salário: "); 
	 scanf ("%f",&salario);
	 
	 
	 // Calculo.
	 
	 qtdSalario = salario / salarioMinimo;
	 
	 
	 //Exibindo Resultado.
	 printf("\n=== EXIBINDO RESULTADO ===\n");
	 printf("Salário informado: R$ %.2f \n",salario);
	 printf("Quantidade de salário: %.1f",qtdSalario);
	  
   	return 0;
   	
   }
