#include <stdio.h>
int main()
{
   int row,col;
   scanf("%d %d",&row,&col);
   int arr[row][col];
   for (int i = 0; i < row; i++)
   {
    for (int j = 0; j < col; j++)
    {
     scanf("%d ",&arr[i][j]);
    }
    
   }
   for (int i = 0; i < row; i++)
   {
    for (int j = col-1; j >=0; j--)
    {
     printf("%d ",arr[i][j]);
    }
    if(i < row-1){
    printf("\n");
    }
   }
   
  return 0;
}