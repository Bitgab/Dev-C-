# include <stdio.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Vari�vel

int i;


// 

for (i = 1; i <= 20; i++){
	if (i  % 2 == 1 ){
		printf("%d \n ", i);
	}
}		
 return 0;	
}
