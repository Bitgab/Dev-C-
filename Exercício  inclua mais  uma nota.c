# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <locale.h>
# include <ctype.h>
# include <time.h>


int main (){
setlocale(LC_ALL,"");
	
// Declarando as vari�veis 01�.

float soma =0, notas, media;
int  contador = 1;	
char continua, menu;
	
// Solicitando dados ao usu�rio 02�.

do {

	do {
		printf("Digite sua nota da %i� unidade: ", contador);
		scanf("%f",&notas);
		fflush(stdin);
		printf("\n");
		printf("Como voc� deseja continua? ?\n");
		printf("\n");
		printf("[S] - Inserir mais uma nota;\n");
		printf("[P] - Ver quantas notas foram inseridas;\n");
		printf("[N] - Calcular a m�dia aritm�tica das notas informadas.\n");
		printf("Resposta: ");
		scanf("%s",&continua);
		continua = toupper(continua);
		printf("\n");
		
	switch (continua){
			
	case 'S': 
		soma += notas;
		contador++;
		system("cls || clear");
		break;
		
	case 'P':
		printf("Quantidade de notas inseridas : %i \n",contador);
		contador ++;
		fflush(stdin);	
		printf("Como voc� deseja continua? \n");
		printf("\n");
		printf("[S] - Inserir mais uma nota;\n");
		printf("[N] - Calcular a m�dia aritm�tica das notas informadas.\n");
		printf("Resposta: ");
		scanf("%s",&continua);
		system("cls || clear");
		break;
		
	case 'N':
		media = soma / contador;
		printf("\n=== EXIBINDO RESULTADO ===\n");
		printf("M�dia: %.2f\n",media);	
//		system("cls || clear");
		break;			
        
//		system("cls || clear");	
	default: 
	    printf("Opera��o inv�lida! \n");
		system("cls || clear");
	} 	
		
	}while(continua == 'S' );
	
//   Exibindo resultados. 04�
		
	  
	  	
	   

// Reiniciar 05�.
 
	 printf("\nDeseja continuar com a opera��o? ");
	 scanf("%s",&menu);
	 soma = 0;
	 contador = 1;
 
 system ("cls || clear");
 
} while (menu == 's');
	
return 0;	
}
