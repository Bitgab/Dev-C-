# include <stdio.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>

int main (){
setlocale(LC_ALL,"");

// Declarando variáveis.

float nota, media, soma = 0;
char continua;
int contador = 0, unidade = 1;


// Solicitando dados ao usuário.

	  do{
	 
	printf("Informe sua nota da %iª unidade: ", contador+1);
	scanf("%f",&nota);	
	
	fflush(stdin);
	
// Pergunta se deseja continuar com a operação.
   
    printf("Deseja inserir mais uma nota?  Aperte o botão 'N'.");
    scanf("%c",&continua);
    continua = toupper(continua);
    
    soma += nota;
    contador++;
    
    
  } while(continua == 'N' );
		
 	media = soma / contador;
 	
// Exibindo resultado.

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Média: %.1f\n", media); 	
	

return 0;
}
