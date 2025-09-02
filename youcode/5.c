#include <stdio.h>
int main ()
{
  int number ,n ;
  printf("write a number ") ;
  scanf("%d",&number) ;
  printf("if u wanna transforme it to days write 1\n");
  printf("if u wanna transforme it to months write 2\n");
  printf("if u wanna transforme it to hours write 3\n");
  printf("if u wanna transforme it to minutes write 4\n");
  printf("if u wanna transforme it to secondes write 5\n");
  scanf("%d",&n) ;


  switch (n)
  {
  case 1:
    number=number*365 ;
    printf("the nbr of years is %d",number) ;
    break;
  case 2:
    number=number*12 ;
    printf("%d",number) ;
   break;
 case 3 :
    number=number*365*24 ;
    printf("%d",number) ;
   break;
 case 4:
    number= number*365*24*60 ;
    printf("%d",number) ;
     break;

 case 5:
    number=number*356*24*60*60 ;
    printf("%d",number) ;
  default:
   
    break;
  }
}