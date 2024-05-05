#include <stdio.h>
void fun (int n);
int main()
{
  int n;
  scanf("%d", &n);
  fun(n);
  return 0;
}
void fun (int n){
if(n==6)return;
printf("%d ", n);
fun(n+1);
}