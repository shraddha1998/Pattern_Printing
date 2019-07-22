#include<stdio.h>
int main()
{
int i,j,num=1,c=0,d=0;
int arr[10];
for(i=1;i<=6;i++)
{

 
if(i%2==0)
{
  for(j=1;j<=7;j++)
   {
	c++;
      if(c<=6){
     arr[d]=num;d++;
           }
       else
      {  c=0;
         arr[d]=num+1;num++;d++;
        }       
    }
  for(int k=d-1;k>=0;k--)
	printf("%d",arr[k]);d=0;
}


 else{
 
    for(j=1;j<=7;j++)
   {
	c++;
      if(c<=6){
     printf("%d",num);
           }
       else
      {  c=0;
         printf("%d",++num);
        }       
    }
}

    printf("\n");
}






}
