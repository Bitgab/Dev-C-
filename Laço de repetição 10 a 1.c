# include <stdio.h>
# include <locale.h>

int main (){
	
	setlocale(LC_ALL, "");
	int j;
	for (j=10;j>=1;j --){
		printf("%d\n",j);
	}
	return 0;
}
