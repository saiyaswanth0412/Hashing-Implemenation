#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int c=0;

	while((n))
	{
		c++;
		cout<<(n&n-1)<<endl;
		n=(n&n-1); 
		
	}
	cout<<c<<endl;
	return 0;
	/*10100 
	first iteration
	c=1;
	n=(n&n-1);//oka 10100=0100*/
}
