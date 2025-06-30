#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main (void){
 string s = get_string("user : ");
 printf("after :");
 for ( int i = 0 ; i<strlen(s); i++ ){
 if (  islower(s[i]) != 0){
    printf("%c", s[i] - 32);

 }else{
    printf("%c", s[i]);
}




 }
}
