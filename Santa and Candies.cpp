//Santa and Candies 753A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int x;
	cin>>x;
	
	int steps=0;
	
	int i=1;
	vector<int>v;
	while(x>=i)
	{
		x=x-i;
		v.push_back(i);
		i++;
		
		steps++;
		
	}
	if(x>0)
	{
		v[steps-1]+=x;
	}
	cout<<steps<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
