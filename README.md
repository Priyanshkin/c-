  #include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b;
    scanf("%d%d",&a,&b);

switch (a)
{
    case 1:
    printf("first");
    break;
    case 2:
    printf("second");
    break;
    case 3:
    printf("third");
    break;
    case 4:
    printf("four");
    break;
    case 5:
    printf("five");
    break;
    case 6:
    printf("six");
        break;
    case 7:
    printf("seven");
    break;
    case 8:
    printf("eight\n");
    break;
    case 9:
    printf("nine");
    break;
    default:
    printf("even");
    break;
    }
switch (b)
{
    case 1:
    printf("first");

    break;
    case 2:
    printf("second");
    break;
    case 3:
    printf("third");
    break;
    case 4:
    printf("four");
    break;
    case 5:
    printf("five");
    break;
    case 6:
    printf("six");
    break;
    case 7:
    printf("seven");
    break;
    case 8:
    printf("eight");
    
    
   
    break;
    case 9:
    printf("nine");

    break;
    default:
    printf("nine\n");
    if((a%2==0 ))

   printf("even\n");
      
     else 
printf("odd\n");
     if (b%2==0)
     {
        printf("even\n");
     }
     
     else
   printf("odd\n");
    break;
}
return 0;
}
