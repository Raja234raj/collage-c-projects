#include<stdio.h>
int main(){
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", terms);
    int a = 0, b = 1;
    for(int i = 0; i<=terms; ++i){
        printf("%d", a);

        b = a-b;
        a = b+a;
    }
    printf("\n");


}
