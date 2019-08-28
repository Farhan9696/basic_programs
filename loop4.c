#include<stdio.h>

int main()
{
  int i=1,n=100;
  printf("All even numbers from 1 to 100 are: \n");
  while(i<=n){
    if(i%2==0){
      printf("%d\n",i);
    }
    i++;
  }
  return 0;
}
