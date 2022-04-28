#include <stdio.h>

void ft_ft(int *nbr){
	*nbr=42;
}

int main(){
	int a;
	a=1;

	ft_ft(&a);
	printf("%d\n",a);
	return(0);
}
