#include<iostream>
#include<math.h>
#define e 0.001
#define f(x) x*x*x - 4*x + 1

using namespace std;

int main(){
	int i = 0;
	float x0, x1, x2, f0, f1, f2;
	
	cout<<"Enter the values of x0 and x1:";
	cin>>x0>>x1;
	
	do{
		f0 = f(x0);
		f1 = f(x1);
		
		x2 = ((x0*f1) - (x1*f0))/(f1 - f0);
		f2 = f(x2);
		
		f0 = f1;
		f1 = f2;
		x0 = x1;
		x1 = x2;
		i++;
		cout<<"No. of Iteration= %d\t"<<i;
		cout<<"Root = %f\t"<<x2;
		cout<<"Value of Function= %f\n"<<f2;
	}while(fabs(x2) > e);
	return 0;
}
