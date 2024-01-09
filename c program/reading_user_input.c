#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of 'a': ");
    scanf("%c", &a);

    if((a>='a' && a<='z')){
        printf("its a lower case letter");
    }
    else if(a>='A' && a<='Z'){
        printf("its a Upper case letter ");
    }
    else if(a>='0' && a<='9'){
        printf("its a digit");
    }
    else {
        printf("its a symbole");
}
return 0;
}