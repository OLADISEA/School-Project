#include <stdio.h>
#define LEN 3
void nStudents();
int main(){
    char name[100];
    char info[50];
    for(int i = 1; i<= LEN; i++)
    {
        printf("Enter the name of student %d: ", i);
        fgets(info,50,stdin);
        name[i] = &info;
    }


    
}