#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n=s.length();
	for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
	return 0;
}