#include<stdio.h>
int main ()
{
    int num ;
 printf("write the number that u wanna check is it positiv") ; 
 scanf("%d",&num) ;
 if (num >0)
 {
    printf("This num %d is positiv", num) ;

 }else if (num==0)
 {
    printf("this num %d was null",num) ;
 }
 else if (num <0)
 {
    printf("this num %d is negative",num) ;
 }
 
 
}