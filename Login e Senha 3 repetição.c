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


// solicitando dados ao usuario.
for (i = 1; i <= 3; i++){


printf("Digite seu login",i);
printf(" ");
scanf("%s",&login);

printf("Digite sua senha");
printf(" ");
scanf("%s",&senha);

// Condicional 

 	
 	if (strcmp(login,loginSalvo) != 0 || strcmp(senha,senhaSalva) != 0) {
		printf("Login ou senha incorretos. \n ");
		printf("Tentativa %i de 3 \n", i);
		sleep (3);
	  	system("cls || clear");
		} 
	else {
	  
	  	printf("Bem vindo %s !",login);
		 break; 
	 
		}
}	
 	

return 0;
}
