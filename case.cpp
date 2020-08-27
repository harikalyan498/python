#include<stdio.h>
int main()
{
	int x=200,y=300;
	 char ch;
	 
	  //scanf("%d %d",&x,&y);
	  scanf("%c",&ch);
	 //  printf("%d %d",x,y);
	  switch(ch)
	 {
	   
	     case'+':  	printf("sum=%d",x+y);
	      break;
          case'-':    printf("sub=%d",x-y);
	      break;
      
	     {  default:   printf("invalid choice");}
	   
	
    }
}
