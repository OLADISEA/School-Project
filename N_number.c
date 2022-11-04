#include<stdio.h>


int count()
{

	int number;
	printf("Enter the number: ");
	scanf("%d", &number);
	for(int i = 1; i<=number; i++){
	printf("%d\n", i);
}
}
int main() {
	count();	
	return 0;
}
