#include <iostream>
#include <cmath>

using namespace std;

double dabc(double a) // abc() for double 
{
	if (a>=0)
	{
		return  a;

	}

	else
	{
		return -a;
	} 

}


double equation(int x,int y)
{
	if (y!=0 && pow(x,2)+pow(y,2)!=0 && pow(x,1/3)!=3 )
	{
		return dabc(5*x/(pow(x,3)+pow(y,3)))  /  (dabc(pow(x,3))-3)  -  (sin(3*x/y)/cos(3*x/y));

	}
	else 
	{
		cout<<"FALSE VALUE"<<endl;
	}






	

}



int main()
{


	int x,y;
	double result;
	cout<<"enter x : ";
	cin>>x;
	cout<<"enter y : ";
	cin>>y;


	
	result = equation(x,y);
	if (!isnanl(result))
	{
		cout<<"result is "<<result<<endl;
	}





	return 0;
}
