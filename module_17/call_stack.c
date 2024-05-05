#include <stdio.h>
void fun(void);
int main()
{
   printf("main start\n");
   fun();
   printf("main stop\n");
  return 0;
}

void fun(void){
  printf("fun start\n");
}