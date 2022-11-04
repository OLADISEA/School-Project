#include <stdio.h>
#define size 10
// A data called struct is created to store students names
struct Students
{
    char name[50];
} s[size];

int main() {
    //The first loop stores the studends names
    for(int i = 0; i<size; i++){
        printf("Enter the name of Student %d: ",i+1);
        scanf("%s",s[i].name);
    }

    printf("The names of the Students are: ");
    //This loop below prints out all the students names
    for(int i = 0; i<size; i++){
        printf("Student %d: %s\n",i+1,s[i].name);
    }
}
