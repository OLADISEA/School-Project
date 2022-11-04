#include<stdio.h>
#include<math.h>


double root1;
double root2;
void solveQuadratic(); //Global declaration of a function to solve the quadratic equation


int main() { 

    solveQuadratic(); //calling the function
    
    return 0;
}

void solveQuadratic(){
    double first_num;
    double second_num;
    double third_num;
    


    printf("Enter the first number: ");
    scanf("%lf", &first_num);

    printf("Enter the second number: ");
    scanf("%lf", &second_num);

    printf("Enter the third number: ");
    scanf("%lf", &third_num);

    //Getting the result for the determinant and each root
    double determinant = sqrt(pow(second_num, 2) - (4 * first_num * third_num));
    root1 = (-second_num + determinant)/2 * first_num;
    root2 = (-second_num - determinant)/2 * first_num;

    if(determinant == 0){
        printf("The roots are real and equal\n");
        

    }

    if(determinant > 0){
        printf("The roots are real but unequal\n");

    }

    if(determinant < 0){
        printf("The roots are unreal and unequal\n");
    }
    // The function below will display each roots in form of two decimal places 
    printf("the roots are %.2f and %.2f\n",root1,root2);
}