#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;

void print(ve<int> v)
{
	for(auto a:v)
		cout<<a<<" ";
	cout<<endl;
}

void Swap(ve<int>& v, int i, int j)
{
	int t=v[i];
	v[i]=v[j];
	v[j]=t;
}

void permutate(ve<int> v,int l, int h)
{
	if(l == h)
	{
		print(v);
	}
	else
	{
		for(int i=l;i<=h;i++)
		{
			Swap(v,l,i);
			permutate(v,l+1,h);
			Swap(v,l,i);
		}
	}
}

int main()
{
	int n;
	cin>>n;
	ve<int> v(n);
	for(auto &x:v)
		cin>>x;

	permutate(v,0,n-1);

	return 0;
}
