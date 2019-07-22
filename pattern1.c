#include<stdio.h>
int main()
{
int i,j,num=1,c;

for(i=1;i<=5;i++)
{
       if(i%2==0)
	{
        num=num+(i-1);
        c=num;
	for(j=1;j<=i;j++)
	{
           
              if(i==j)
			printf("%d ",num--);
              else
			printf("%d*",num--);
        }
	  num=c+1;		
         }
        else
        {
          for(j=1;j<=i;j++)
	{
           
              if(i==j)
			printf("%d ",num++);
              else
			printf("%d*",num++);
        }
		}

	
            
	
    printf("\n");
}

}
