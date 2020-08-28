#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
 int a,b;
 char c,d;
 a:
 printf("what do u want to do [+(plus),-(subtract),*(multiply),/(divide),s for square root],\n");
 scanf(" %c", &c);
 printf("enter the first value\n");
 scanf("%i", &a);
 printf("enter the second value\n");
 scanf("%i", &b);
 printf("result is ");
 if(c=='+'){
    printf("%d",a+b);
 }
 else if(c=='-'){
    printf("%d",a-b);
 }
 else if(c=='*'){
    printf("%i",a*b);
 }
 else if(c=='/'){
    printf("%i",a/b);
 }
 else if(c=='s'){
    printf("%i", (int)sqrt(a));
    printf("\n");
    printf("%i", (int)sqrt(b));
 }
 else
    printf("error");
 printf("\ndo you want calculate again\n");
 scanf(" %c", &d);
 if(d=='y'||d=='Y'){
    goto a;
 }
 else
    exit(0);
}
