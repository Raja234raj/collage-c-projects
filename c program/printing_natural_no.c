#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of numbers you wanr to print: ");
    scanf("%d", &n);
    printf("The natural numbers are: ");

    for(int i = 1; i <= n; ++i){
        printf("%d\n", i);

    }
    return 0;

}