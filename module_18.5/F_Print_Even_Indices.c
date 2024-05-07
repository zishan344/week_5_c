#include <stdio.h>
void fun(int arr[], int n);
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  
  fun(arr,n-1);
  return 0;
}

void fun(int arr[], int n){
  if(n==-1) return;
  if(n%2==0) {
  printf("%d ",arr[n]);
  }
  fun(arr,n-1);
}