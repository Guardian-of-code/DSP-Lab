#include<stdio.h>
#include<math.h>
main()
{
	float a[5],b[5],x[25],y[25],h[25],sumXn_k,sumYn_k;
	int N,M,k,L,n;

	N=1;
	a[1] = -0.9;
	M=1;
	b[0] = 1;
	L =25;
	x[0]=1.0;
	for(k=1;k<5;k++)
		x[k] = 0.0;
	for(n= 0;n<L;n++)
	{
		sumYn_k = 0;
		sumXn_k = 0;

		for(k =1 ;(k<=n)&&(k<=N);k++)

			sumYn_k += a[k]*h[n-k];


		for(k =0 ;(k<=n)&&(k<=M);k++)

					sumXn_k += b[k]*x[n-k];

		h[n] = -sumYn_k + sumXn_k;


	}


}



