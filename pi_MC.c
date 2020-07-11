#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//The area of a circle is defined as pi*r^2. Estimate pi to 3 decimal places using a Monte Carlo method.
//Hint: The basic equation of a circle is x2 + y2 = r2.

//Generates two random numbers in the range [-1,1]
double random(){
	double r=(double) rand()/RAND_MAX;
	return r;
}
int main(){
	
	int i,n,k=0;
	double pi,x,y,r;
	
	srand(time(NULL));
	
	printf("Number of experiments:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		x=-1 + 2.0*random();
		y=-1 + 2.0*random();
		r=sqrt(pow(x,2)+pow(y,2));
		if(r <1.0){
			k++;
		}
	}
	
	pi=(double)4.0*k/n;
	
	printf("PI:%10f",pi);
	
	return 0;
}
