#include <stdio.h>
int main()
{
  int r;
  scanf("%d", &r);
  for (int i = 0; i < r; i++)
  {
   long long int n;
  scanf("%lld", &n);
  char str[n+1];
  scanf("%s", str);
  int t=0,p=0;
  for (int j = 0; j < n; j++)
  {
    if(str[j] == 'P'){
      p++;
    }else{
      t++;
    }
  }

  if(t == p){
   printf("Draw");
  } else if(t > p){
   printf("Tiger");
  }else{
   printf("Pathaan");
  }   

   if(r-1 > i)
   printf("\n");
  };
  
  
  
  return 0;
}