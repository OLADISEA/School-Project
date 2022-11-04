#include <stdio.h>
#include <string.h>

void reversed(){
	char statement[100];
	printf("Enter the sentence: \n");
	fgets(statement,100,stdin);
	int length  = strlen(statement);
	int count = length;        
	while(count>=0) {
		char slice = statement[count];
		printf("%c",slice);
		count--;

}

}


int main() {
   reversed();

    return 0;
}
