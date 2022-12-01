#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter Any Number : \n");
   scanf("%d",&a);
   if(a%2==0)
   {
     printf("%d is Even.\n",a);
     b= a%3;
     c= a%2;
     if(b==0 && c==0){
       printf("%d is divisible by 3 and 2.\n\n", a);
       }else{
         printf("%d is not divisible by 3 and 2.\n\n");
       }
   }
   else
   {
     printf("%d is Odd.\n" , a);
     b= a%5;
     if(b==0){
       printf("%d is divisible by 5.\n\n",a);
     }else{
       printf("%d is not divisible by 5.\n\n",a);
     }
   }
  return 0;
}
