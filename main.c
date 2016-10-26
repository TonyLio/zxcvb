#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
int n[5];  
int sum=0,i,m;
for (i=0;i<4;i++)
{
    scanf("%d",&n[i]);
    sum+=n[i];
}
printf("Á`¦@%d\n",sum);
scanf("%d",&m);

if(m>sum) 
      {     
      printf("y");
      }

else
      {   
      printf("n%d",sum-m);
      }

  
  
  
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
