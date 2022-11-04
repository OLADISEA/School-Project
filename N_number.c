#include<stdio.h>


int count()
{

	int number;
	printf("Enter the number: ");
	scanf("%d", &number);
	// The loop below will run from 1 to the inputted number
	for(int i = 1; i<=number; i++){
	printf("%d\n", i);
}
}
int main() {
	count();//function calling
	return 0;
}
