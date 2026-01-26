#include<stdio.h>
int main ()
{
 char input;
 printf("Enter the char:");
 scanf("%c",&input);
 if((input == 'a') || (input == 'e') ||
  (input == 'i') || (input == 'o') ||
  (input == 'u') || (input == 'A') || 
  (input == 'I') || (input == 'U'))
{
    printf("it is a vovels",input);
 }else{
    printf("not a vovels",input);
 }

    return 0 ;
}