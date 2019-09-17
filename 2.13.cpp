#include <iostream>
#include <cmath>

using namespace std;






double funktion1(int a, int b ,int c)

{
	if ((2*a-b) >= 0 && c >= 0)
	{
		double res=pow((2*a-b),0.5) / (5*pow(c,0.5));
	
		return res;
	}
	else 
	{
		cout<<"FALSE VALUE"<<endl;
		
	}
	cout<<res<<endl;
}






double funktion2(int x , int y)

{
	int a1,b1,c1,a2,b2,c2;
	a1=pow(x,2);
	b1=y;
	c1=pow(x,2)*y;
	a2=x-y;
	b2=pow(x,2);
	c2=y;

	// cout<<"a1 : "<<a1<<endl;
	// cout<<"b1 : "<<b1<<endl;
	// cout<<"c1 : "<<c1<<endl;
	// cout<<"a2 : "<<a2<<endl;
	// cout<<"b2 : "<<b2<<endl;
	// cout<<"c3 : "<<c2<<endl;





	return funktion1(a1,b1,c1)  / funktion1(a2,b2,c2);

}


	




int main()
{

	int x,y;
	double result;
	cout<<"enter x : ";
	cin>>x;
	cout<<"enter y : ";
	cin>>y;


	result=funktion2(x,y);

	if (!isnanl(result))
	{
		cout<<"result is "<<result<<endl;	
	}
	


	




	return 0;
}
