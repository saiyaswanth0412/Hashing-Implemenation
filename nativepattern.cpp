#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
		int i,j;
		string text,pattern;
		cin>>text>>pattern;
		for( i=0;i<text.length()-pattern.length();i++)
		{
			for( j=0;j<pattern.length();i++)
			{
				if(text[i+j]!=pattern[j])
				{
					break;
				}
			}
			if(j==pattern.length())
			{
				cout<<i<<endl;
			}
		}
	}
	return 0;
}