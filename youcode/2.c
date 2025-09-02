#include<stdio.h>
int main()
{
    char c  ;
    printf( "write a caractere") ;
    scanf (" %c",&c) ;

    switch (c)
    {
    case 'a':
        
        printf("voyelle") ;
        break;
        
    case 'e':
        
        printf("voyelle") ;
        break;
    
    case 'i':
        
        printf("voyelle") ;
        break;
    case 'u':
        
        printf("voyelle") ;
        break;
   
                
    default:
    printf ("normal")  ;
        break;
    }
}