#include<stdio.h>
#include<string.h>

void pallindrome(char str[]){
    char rev[50] ="";
    int i,j;

    for(i=strlen(str)-1,j=0;i>=0,j<strlen(str);i--,j++){
            rev[j]=str[i];
    }
    
    if(strcmp(rev,str)){ 
        printf("The entered string is not a pallindrome...\n");
    }
    else{
        printf("The entered string is a pallindrome !!!\n");
    }

}

int main(){
     char str[50];
     printf("Enter the string to check if it's paliindrome : \n");
     gets(str);
     pallindrome(str);

     return 0;
}