# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>


int main (){
setlocale(LC_ALL,"");

// Declarando variavel.
int i;
char loginSalvo  [200] = "Jesus";
char senhaSalva  [200] = "Cristo";
char login       [200];
char senha       [200];
char opcao;

// solicitando dados ao usuario.
do {
   for (i = 1; i <= 3; i++);
		printf("Digite seu login");
		printf(" ");
		scanf("%s",&login);

		printf("Digite sua senha");
		printf(" ");
		scanf("%s",&senha);

// Condicional 

sleep (1);
system("cls || clear"); 	

	
} while (strcmp(login,loginSalvo) != 0 && strcmp(senha,senhaSalva) != 0);
 printf("Bem vindo %s !",login);
 

 return 0;	
}
