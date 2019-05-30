#include <stdio.h>

int soma(int num){
    if (num % 10 == num)
        return num;
    return ((num % 10) + soma(num / 10));
}

int main(){
       int num;
       scanf ("%d",&num);
       printf ("%d\n", soma(num));
       }
