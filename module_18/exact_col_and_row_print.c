#include <stdio.h>
int main()
{
  int col,row;
  scanf("%d %d",&col, &row);
  int arr[row][col];
  for (int i = 0; i < row; i++)
  {
   for (int j = 0; j < col; j++)
   {
    scanf("%d",&arr[i][j]);
   }
   
  }
  
  // print full array

/*   for (int i = 0; i < row; i++)
  {
   for (int j = 0; j < col; j++)
   {
    printf("%d ",arr[i][j]);
   }
   printf ("\n");
  }
   */
  // print exact raw
 /*  int er;
  scanf("%d",&er);
  for (int i = 0; i < col; i++)
  {
     printf("%d ",arr[er][i]);
  } */
  // print exact column
  int cr;
  scanf("%d",&cr);
  for (int i = 0; i < row; i++)
  {
     printf("%d\n",arr[i][cr]);
  }
  
  return 0;
}