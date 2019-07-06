#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double x,e, result,n,j,fact=1,v,i;
	x = 10.5,e=2.7182;
	cout<<"Enter the value of n: -";
	cin>>n;
	result = pow(e,x)*pow(x,n+1);
	{
	for(i=1;i<=n;i++){    
      fact=fact*i;
	v=result/fact;
	cout<<"N:-"<<n<< endl;
	cout<< "Value: -"<< v<< endl;
	}}
	return 0;
}
