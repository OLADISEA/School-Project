#include <stdio.h>
#include <string.h>


void reversed();


int main() {
   reversed();

    return 0;
}
void reversed(){
	char statement[100];
	printf("Enter the sentence: ");
	fgets(statement,100,stdin);// This will store all the words written
	int length  = strlen(statement);
	int count = length;        
	while(count>=0) {
		char slice = statement[count];
		printf("%c",slice);
		count--;

}
printf("\n");

}