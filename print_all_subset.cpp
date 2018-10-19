#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;

void subset(ve<int> temp, int start, ve<int> v, int n)
{
	for(auto a:temp)
		cout<<a<<" ";
	cout<<endl;
	for(int i=start+1;i<n;i++)
	{
		ve<int> temp1=temp;
		temp1.pb(v[i]);
		subset(temp1, i, v, n);
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
	ve<int> temp;
	subset(temp, -1, v, n);
	return 0;
}
