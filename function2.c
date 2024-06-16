#include<stdio.h>
void Indian();// function prototype
void France();
int main ( ) {
    char L ;
    printf(" Enter I for Indian && F for France \n");
    scanf("%d",&L);
    if ( L = 'I') {
        Indian();
    } else {
        France();
    }

    return 0;
}
void Indian(){
    printf("Namste \n");
}
void France(){
    printf("Bonjour \n");
}