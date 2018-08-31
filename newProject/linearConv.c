#include <stdio.h>
void main(void) {

	float x1[10]={1,2,2,2}, x2[10]={1,2,3,3,1}, y[20];

	int L=5,M=5,n,m,a,b,c,min,max;

	if(L>=M){
		c = M-L,max=L,min =M;
		for (n=0;n<L+M-1;n++){
			if(n-max<c) a=0;
			else a = n-min+1;
			if(n>=max) b= max-1;
			else b=n;
			for(y[n]=0,m=a;m<=b;m++)
				y[n]+=x1[m]*x2[n-m];}

	}
		else
		{
		c= L-M,max=M,min=L;
		for(n=0;n<L+M-1;n++){
			if(n<min)b=n;
			else b= min-1;
			for(y[n]=0,m=0;m<=b;m++)
			y[n]+=x1[m]*x2[n-m];
		}

		}

}
