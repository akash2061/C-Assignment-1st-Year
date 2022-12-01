#include <stdio.h> 
int main() { 
  int w;
  printf("Enter week number (1-7): \n"); 
  scanf("%d", &w); 
    if(w == 1){
     printf("Monday.\n\n"); 
  } else if(w == 2){
     printf("Tuesday.\n\n"); 
  } else if(w == 3){ 
     printf("Wednesday.\n\n"); 
  } else if(w == 4){ 
     printf("Thursday.\n\n"); 
  } else if(w == 5){ 
     printf("Friday.\n\n"); 
  } else if(w == 6){ 
     printf("Saturday.\n\n"); 
  } else if(w == 7){ 
     printf("Sunday.\n\n"); 
  } else { 
     printf("Invalid Input! Please enter week number between 1-7.\n\n"); 
      } 
  return 0;
}
