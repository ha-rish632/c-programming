#include <stdio.h>
int main (){

    int a;
    scanf("%d",&a);

   switch(a/9)
   {
     case 10:
     if(a>=91&& a<=100)
      printf("grade a");
      break;
     case 9:
       if (a>=81&& a<=90)
       printf("drade b");
       break;
     case 8:
      if(a>=71 && a<=80)
      printf("grade c") ;  
      break; 
     case 7:
      if(a>=61&& a<=70)
      printf("grade d");
      break;    
     case 6:
      if(a>=51&& a<=60)
      printf("grade e"); 
      break;
     case 5:
      if(a>=41&& a<=50)
      printf("grade f") ; 
      break;  
     case 4:
      if(a>=31&& a<=39)
      printf("supplementary");  
      break;
     case 3:
      if(a<=30)
      printf("fail");
      break;

   } 

    return 0;
}