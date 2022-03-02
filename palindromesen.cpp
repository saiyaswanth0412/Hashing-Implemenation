#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
		string text;
		cin>>text;
		bool flag=true;
		transform(text.begin(), text.end(), text.begin(), ::tolower);
		string rev=text;
		for(int i=0;i<(text.length()/2);i++)
		{
			swap(text[i],text[text.length()-i-1]);
		}
		for(int i=0,j=0;i<=text.length();i++,j++)
		{
			if(!(isalnum(text[i]))&&isalnum(rev[j]))
			{
				cout<<"going1 "<<endl;
				j--;
				
			}
			else if((isalnum(text[i]))&&!(isalnum(rev[j])))
			{
				cout<<"going2 "<<endl;
				i--;
				
				
			}
			else if(isalnum(text[i])&&isalnum(rev[j]))
			{
				
				cout<<text[i]<<" "<<rev[i]<<endl;
				if(text[i]!=rev[j])
				{
					cout<<"going3 "<<endl;
					flag=false;
					break;
				}
			}

		}
		if(flag==false)
			cout<<"Not an palindrome"<<endl;
		else
			cout<<"Yes its a palidnrome"<<endl;
	}

	return 0;
}