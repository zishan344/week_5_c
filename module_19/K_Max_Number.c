#include <stdio.h>
#include <limits.h>
int fun(int arr[], int n, int i);
int main()
{
   int n;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &arr[i]);
   }
   int max= fun(arr,n,0);
   printf("%d",max);
  return 0;
}

int fun(int arr[], int n, int i){
  if(i==n) {
    return INT_MIN;
  }
  int mx = fun(arr,n,i+1);

  if(arr[i] > mx ){
    return arr[i];
  }else {
    return mx;
  }
}