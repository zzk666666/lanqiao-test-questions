#include <stdio.h>
#include<cmath>
using namespace std;
int a,b,c,s,p;
int main ()
{   
    scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
  	{
  		p = (a+b+c)/2;
	    s = sqrt(p*(p-a)*(p-b)*(p-c));  
	    s=pow(s,2);	
	    printf("%d",s);
    }else{
		printf("%d",-1);	
	}
    return 0;
}