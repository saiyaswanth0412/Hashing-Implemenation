#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
		int x1,x2,y1,y2;
		cin>>x1>>x2>>y1>>y2;
		if((double)(y1/x1)==((double)(y2/x2)))
		{

			cout<<"0"<<endl;
		}
		else if((double)(y1/x1)<((double)(y2/x2)))
		{
			//<<((double)(y2/x2))<<endl;
			cout<<"-1"<<endl;
		}
		else
			cout<<"1"<<endl;

	}
	return 0;
}