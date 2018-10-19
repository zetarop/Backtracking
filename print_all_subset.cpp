#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;


void print(ve<ve<int>> v)
{
	for(auto a:v)
	{
		for(auto b:a)
			cout<<b<<" ";
		cout<<endl;
	}
}

void subset(ve<ve<int>>& Ans, ve<int> temp, int start, ve<int> v, int n)
{
	Ans.pb(temp);
	for(int i=start+1;i<n;i++)
	{
		ve<int> temp1=temp;
		temp1.pb(v[i]);
		subset(Ans, temp1, i, v, n);
	}
}


int main()
{
	int n;
	cin>>n;
	ve<int> v(n);
	for(auto &a:v)
		cin>>a;
	sort(v.begin(), v.end());
	ve<ve<int> > Ans;
	ve<int> temp;
	subset(Ans, temp, -1, v, n);
	print(Ans);
	return 0;
}
