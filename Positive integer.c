#include<stdio.h>
                                                                            
int main()                                                                     
{                                                                               
  int number;                                                                   
  positive:                                                                     
  printf("Enter any positive number: ");                                        
  scanf("%d", &number);                                                         
  if(number>0)                                                                  
  {                                                                             
    printf("Number %d is positive!", number);                                   
  }                                                                             
  else                                                                          
  {                                                                             
    goto positive;                                                              
  }                                                                             
}
