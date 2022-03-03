#define d 256
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string text,pat;
	cin>>text>>pat;
	int length_text=text.length();
	int length_pat=pat.length();
	int h=1;
	int i,j,p=0,t=0;
	int q=101;

	for(i=0;i<length_pat-1;i++)
	{
		h=(h*d)%q;
	}
	
	for(int i=0;i<length_pat;i++)
	{
		p=(d*p+pat[i]);
		t=(d*t+text[i]);
	}
	
	for(int i=0;i<=(length_text-length_pat);i++)
	{
		if(p==t)
		{
			for(j=0;j<length_pat;j++)
			{
				if(text[i+j]!=pat[j])
				{
					break;
				}

			}
			if(j==length_pat)
			{
				cout<<"The word is found at"<<i<<endl;
			}

			
		}
		
		
		if(i<length_text-length_pat)
		{
			t=(d*(t-text[i]*h)+(text[i+length_pat]))%q;
			
			if(t<0)
			{
				t=t+q;
			}
			
		}
	}


	return 0;
}	