#include <stdio.h>
int main()
{
   long long int T;
  scanf("%lld", &T); 
 
  while (T--)
  {
  long long int M, A, B, C;
  scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
    long long int value = A*B*C;
    long long int  missing = M % value;
    if(M == 0){
      printf("0\n");
    }
   else if(missing==0){
      printf("%lld\n",M/value);
    }else{
     printf("-1\n");
    }
  }
  
  return 0;
}






/* #include <stdio.h>
int main()
{
   long long int n;
  scanf("%lld", &n); 
  long long int arr[n][4];
 
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < 4; j++)
    {
    scanf("%lld", &arr[i][j]);
    }
    
   };
   for (int i = 0; i < n; i++)
   {
   
     int j=0;
   while (1)
   {
      long long int c=arr[i][1]*arr[i][2]*arr[i][3]*j;
      if(arr[i][0]==0){
        printf("%d\n",0);
        break;
      } else if(arr[i][0]==c){
  
      printf("%d\n",j);
      break;
     }else if(arr[i][0]< c){
      printf("%d\n",-1);
      break;
     }
    j++;
};
  
   }
  return 0;
}

 */
