#include<stdio.h>

void decToBin(int x){
    int bin[100];
    int i=0,y=x;
    while(x!=0){
        bin[i]=x%2;
        x=x/2;
        i++;
    }
    printf("Binary equivalent of %d is : ",y);
    for(int j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }
}

void decToOct(int x){
    int oct[100];
    int i=0,y=x;
    while(x!=0){
        oct[i]=x%8;
        x=x/8;
        i++;
    }
    printf("Octal equivalent of %d is : ",y);
    for(int j=i-1;j>=0;j--){
        printf("%d",oct[j]);
    }
}

void decToHex(int x){
    printf("Hexadecimal equivalent of %d is : ",x);
    printf("%X",x);
}

int main(){
    int num,conv;
    printf("Enter \"1\" to convert into binary , \"2\" to convert into octal , \"3\" to convert into hexadecimal.\n");
    scanf("%d",&conv);
    printf("Enter the decimal number to convert : \n");
    scanf("%d",&num);
    switch (conv)
    {
    case 1:
        decToBin(num);
        break;
    
    case 2:
        decToOct(num);
        break;

    case 3:
        decToHex(num);
        break;
    
    default:
        printf("Invalid command!!");
        break;
    }

    return 0;
}