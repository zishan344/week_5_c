#include <stdio.h>
// void fun(int n);
void fun2(int n);
int main()
{
   int n;
   scanf("%d", &n);
   fun2(n);
  return 0;
}
 void fun(int n){
if(n==6) return;
fun(n+1);
printf("%d ", n);
};  
void fun2(int n){
if(n==0) return;
printf("%d ", n);
fun2(n-1);
}