/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{

  int n;
  float *data;
  printf("Enter the total number of elements");
  scanf("%d",&n);
  data=(float*)calloc(n,sizeof(float));
  if(data==NULL) 
  {
    printf("memory not allocated");
    exit(0);
  }
  for(int i=0;i<n;++i)
  {
    printf("Enter number%d",i+1);
    scanf("%f",data+i);
  }
  for(int i=1;i<n;++i)
  {
    if(*data<*(data+i))
    {
      *data=*(data+i);
    }
  }
  printf("Largest number=%f",*data);
  free(data);
  return 0;
}