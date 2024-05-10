#include <stdio.h>
int main()
{
  int stock = 5;
  int cnt = 0;
  int n;
  scanf("%d", &n);
   for (int i = 1; i <= n; i++)
   {
    if(i%2!=0){
      stock++;
    }
   }
   
  // printf("stock %d\n", stock);
  int s=0,k=1;
  s=stock-1;
  for (int i = 0; i < stock; i++)
  {
    for (int j = s; j > 0; j--)
    {
      printf(" ");
    }
    for (int j = 0; j < k; j++)
    {
      printf("*");
    }
    k+=2;
    s--;
    printf("\n");
    
  }
  // printf("\n");
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf(" ");
    }
    for (int i = 0; i < n; i++)
    {
      printf("*");
    }
    
    printf("\n");
    
  }
  

  return 0;
}