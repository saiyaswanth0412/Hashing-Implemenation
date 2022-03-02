#include<iostream>
using namespace std;
int accept(int *a,int size)
{
	int c=0;
	for(int i=0;i<size;i++)
		{cin>>a[i];
			if(a[i]>=10&&a[i]<=60)
			{
				c++;
			}
		}
		return c;
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
		cout<<accept(a,size)<<endl;
		

	}
	return 0;
}