// check odd and even

#include<iostream>
using namespace std;

int main()
{
	int n,rem;
	cout<<"Enter a number ";
	cin>>n;
	rem=n%2;
	if(rem==0)
	{
		cout<<n<<" is an even number";
	}
	else
	{
		cout<<n<<" is an odd number";
	}
	return 0;
	
}
