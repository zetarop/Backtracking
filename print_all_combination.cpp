#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;

void Combination(ve<int> temp, int start, int n, int k)
{
    if(temp.size() == k)
    {
    	for(auto a:temp)
    		cout<<a<<" ";
    	cout<<endl;
    }
    else
    {
        for(int i=start+1;i<=n;i++)
        {
            ve<int> temp1 = temp;
            temp1.pb(i);
            Combination(temp1, i, n, k);
        }
    }
}

int main()
{
	int n,k;
	cin>>n>>k;
	ve<int> temp;
	Combination(temp, 0, n, k);
	return 0;
}
