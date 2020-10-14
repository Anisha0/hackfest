#include<iostream>
using namespace std;
double power(double,int=2);
int main()
{
	int p;
	double n;
	cout<<"enter a no. ";
	cin>>n;
	cout<<"enter exponent";
	cin>>p;
	double result=power(n,p);
	cout<<"result="<<result<<endl;
	result=power(n);
	cout<<"result without passing argument="<<result<<endl;
	return 0;
}
double power(double x,int y)
{
	double z=1;
	for(int i=1;i<=y;i++){
		z=z*x;
		
	}
	return z;
}
