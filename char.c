It's me vyas changing this file
#include<stdio.h>
#include<string.h>

int main(){

    char bit[50],stuff[50];
    int count = 0, i=0, j=0;

    printf("enter the bit sequence:");
    scanf("%s",bit);

    for(i=0;i<strlen(bit);i++){
        if(bit[i] == '0')
            count=0;
        else if(bit[i]=='1'){
            count++;
            stuff[j++]=bit[i];
        }
        if(count==5){
            stuff[j++]='0';
            count=0;

        }
    }
    stuff[j]='\0';

    printf("Bit array:");
    printf("%s\r\n,stuff");

    printf("stuffed array:");
    printf("%s\r\n,stuff");

    return 0;

}
            
        
