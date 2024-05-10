#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t;
   scanf("%d", &t);
 while (t--)
 {
  int n;
  scanf("%d", &n);

   int tmp;
   int a[n],b[n],c[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
   };
    
  for (int i = 0; i < n; i++)
  {
    
    b[i]=a[i];
  }
  
for (int i = 0; i < n; i++)
{
     for (int j = i+1; j < n; j++)
   {
    tmp = b[i];
    if(b[j] < b[i]){
    b[i] = b[j];
    b[j] = tmp;
    }
   }
 
}

  for (int i = 0; i < n; i++)
{
  printf("%d ", abs(a[i]-b[i]));
    
} 

 printf("\n");
 }
 
  
  return 0;
}