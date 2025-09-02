#include<unistd.h>
int main ()
{
    int a,b ,c ;
    printf ("wrtie the firste number") ;
    scanf("%d",&a) ;
    printf ("wrtie the sec number") ;
    scanf("%d",&b) ;

    if (a!=b)
    {
       c=a+b ;
       printf(" the result is %d",c) ;
    }
    else if (a==b)
    {
       c=(a+b)*3;
       printf("the result is %d",c) ;
    }
    
    
    

}