#include<stdio.h>
#include<string.h>
void main(){
    int i,length,m;
    char n[100];


    printf("enter your name:");
    scanf("%s",&n);

    while(n[i]!='\0'){
        printf("%c \n",n[i]);
        i++;

    }
    length=i;
    printf("\n the length of the string is :%d",length);

    for(m=length;m>=0; m--){
    printf("\n reverse  string : %c",n[m]);

    }
}
