# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

  //Declaração de variável.
  
  int main(){ 
  
      setlocale(LC_ALL, "portuguese");
      setlocale(LC_ALL, "");
	   
  float num1, num2;
  float soma, subt, mult, divi;
  //scanf("%i%1", num1, num2);
  
  
  //Solicitando dados ao usuário.
  
  printf ("Digite o primeiro numero: ");
  scanf   ("%f",&num1);
  
  printf ("Digite o segundo numero: ");
  scanf   ("%f",&num2);
  
  soma = num1 + num2;
  subt = num1 - num2;
  mult = num1 * num2;
  divi = num1 / num2;
  
  // Comando de limpar a tela.
  
  // system ("cls"); // Limpa o terminal do Windows.
  // system ("clear"); //Limpa o terminal do Linux
 // sytem ("cls || claer") // Limpa o terminal no Windows e Linux.
  // Exibindo resultado.
  
  
  printf ("Primeiro número: %.1f \n", num1);
  printf ("Segundo número: %.1f \n\n", num2);
  printf ("O resultado é: %.1f \n", soma );
  printf ("O resultado é: %.1f \n", subt);
  printf ("O resultado é: %.1f \n", mult);
  printf ("O resultado é: %.1f \n", divi);
  
  return 0;
  }
