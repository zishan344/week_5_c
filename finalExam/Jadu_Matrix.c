#include <stdio.h>
int main()
{
   int row,col;
   scanf("%d %d",&row,&col);
   int arr[row][col];
   int flag= 1;
   for (int i = 0; i < row; i++)
   {
    for (int j = 0; j < col; j++)
    {
      scanf("%d",&arr[i][j]);
    }
   }
   if(row != col){
    flag=0;
   }
   for (int i = 0; i < row; i++)
   {
    for (int j = 0; j < col; j++)
    {
     if(i==j || i+j==row-1 ){
    if(arr[i][j] !=1 || arr[i][row-1-j]!=1){
     flag=0;
     }
        continue;
      }
     if(arr[i][j] !=0){
      flag=0;
     }  
    }
    
   }
  if(flag==0){
    printf("NO");
  }else{
    printf("YES");
  }
  return 0;
}