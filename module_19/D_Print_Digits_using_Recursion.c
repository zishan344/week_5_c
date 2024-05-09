#include <stdio.h>
void fun(int n);
int main()
{
  int n;
  scanf("%d", &n);
    for(int i = 0; i < n; i++){
    int j;
    scanf("%d", &j);
    fun(j);
    if(j==0){
      printf("0");
    }
    if(i < n-1){
    printf("\n");
    }
   };  
   
  return 0;
}

void fun(int n){
if(n == 0) return;
 int x = n % 10;
 fun(n/10);
 printf("%d ", x);
}