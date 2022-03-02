#include<bits/stdc++.h>
using namespace std;
bool check(string str,int left,int right)
{
	while(left<right)
	{
		while(left<right&&!(isalnum(str[left])))
		{
			left++;
		}
		while(left<right&&!(isalnum(str[right])))
		{
			right--;
		}
		if(left<right&&(str[left]!=str[right]))
		{
			return false;
		}
		left++;
		right--;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	if(check(str,0,str.length()-1))
		cout<<"Yes its a palindrome"<<endl;
	else
		cout<<"No its not a palindrome"<<endl;
	return 0;
}