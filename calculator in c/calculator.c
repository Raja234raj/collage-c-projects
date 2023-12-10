#include<stdio.h>
#include<conio.h>
void addition(int num1, int num2){
    int result = num1 + num2;
    printf("%d", result);
}
void subtraction(int num1, int num2){
    int result = num1 - num2;
    printf("%d", result);
}
void multiply(int num1, int num2){
    int result = num1 * num2;
    printf("%d", result);
}
void division(int num1, int num2){
    if(num2 != 0){
        float result = (float)num1 / num2;
        printf("%.2f\n", result);

    }else{
        printf("Error! division with Zero!!");
    }
}
int main(){
    int num1, num2;
    printf("Enter the frist number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    char operator;
    printf("Choose a operator(+, -, *, /)");
    scanf(" %c", &operator);

    if(operator == '+'){
        addition(num1, num2);
    } else if(operator == '-'){
        subtraction(num1, num2);

    } else if (operator == '*'){
        multiply(num1, num2);

    } else if(operator == '/'){
        division(num1, num2);
    } else{
        printf("Invalid input !!");

    }

    return 0;
}
