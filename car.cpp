#include<bits/stdc++.h>
using namespace std;
void accept(int *a,int size)
{
	for(int i=0;i<size;i++)
		cin>>a[i];
}
int main(int argc, char const *argv[])
{
	int test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
		int size;
		cin>>size;
		int *a=new int[size];
		accept(a,size);
		if(size>2)
		{
			cout<<"-1"<<endl;
		}
		else if(size%2==1)
		{

			for(int i=0;i<size;i++)
			{
				cout<<i<<endl;
			}
		}
	}
	return 0;
}