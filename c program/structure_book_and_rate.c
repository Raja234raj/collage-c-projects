#include<stdio.h>
struct Book{
    char b_name[100];
    int b_rate;
    };

int main(){
    struct Book b;
    printf("Enter the book name: ");
    scanf("%s",&b.b_name);
    printf("\n Enter the book rate: ");
    scanf("%d", &b.b_rate);

    printf("Entered boom rate is : %d",b.b_name);
    printf("Enterd book rate is : %d",b.b_rate);

    return 0;
      
    }