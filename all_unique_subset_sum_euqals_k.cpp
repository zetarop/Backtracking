/*
  Assuming input array have unique elements.
*/

#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;

void subset(ve<int> temp, ve<int> v, int start, int sum, int cnt)
{
    cnt += v[start];
    
    if(cnt == sum)
    {
    	for(auto a:temp)
    		cout<<a<<" ";
    	cout<<endl;
    }
    else if(cnt < sum)
    {
        for(int i=start;i<v.size();i++)
        {
            ve<int> temp1 = temp;
            temp1.pb(v[i]);
            subset(temp1,v,i,sum,cnt);
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
	int sum;
	cin>>sum;

	for(int i=0;i<n;i++)
    {
        ve<int> temp;
        temp.pb(v[i]);
        subset(temp, v, i, sum,0);
    }

	return 0;
}
