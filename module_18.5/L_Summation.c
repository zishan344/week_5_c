#include <stdio.h>
int fun(int arr[], int n);
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  
 int sum = fun(arr,n-1);
 printf("%d",sum);
  return 0;
}

int fun(int arr[], int n){
  if(n==0) return arr[0];
  int l= fun(arr,n-1);
  return l+arr[n];
}