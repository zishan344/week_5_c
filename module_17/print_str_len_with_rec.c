#include <stdio.h>
 int fun(char str[],int i);
int main()
{
  char str[6];
  scanf("%s", str);
  int length= fun(str,0);
  printf("%d",length);
  return 0;
}
  int fun(char str[], int i){
  if(str[i] =='\0') return 0;
  int l =  fun(str,i+1);
  return l+1;

}  