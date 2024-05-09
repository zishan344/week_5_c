#include <stdio.h>
#include <string.h>
int fun(char str[],int i);
int main()
{
  char str[201];
  fgets(str, 201,stdin);
  int vowel = fun(str,0);
  // fun(str,0);
  printf("%d", vowel);
  return 0;
}
int fun(char str[],int i){
  if(str[i]=='\0'){
  return 0;
  }
  
 int cnt= fun(str,i+1);

 if(str[i] >= 'A' && str[i] <= 'Z'){
   str[i]= str[i] + 32;
   }  
   if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){

  return cnt+1;
}else {
  return cnt;
}
}