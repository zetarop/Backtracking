#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;


ve<ve<string> > Ans;
ve<string> temp;

bool is_safe(int r, int c, int n)
{
    for(int i=0;i<r;i++)
        if(temp[i][c] == 'Q')
            return 0;
    int i,j;
    for(i=r,j=c ; i>=0 && j>=0 ; i--,j--)
        if(temp[i][j] == 'Q')
            return 0;
    for(i=r,j=c ; i>=0 && j<n; i--,j++)
        if(temp[i][j] == 'Q')
            return 0;
    return 1;
}



void Queen(int row, int n)
{
    if(row == n)
        Ans.pb(temp);
    else if(row < n)
    {
        for(int i=0;i<n;i++)
            if(is_safe(row, i, n))
            {
                temp[row][i]='Q';
                Queen(row+1,n);
                temp[row][i]='.';
            }
    }
    else
        return;
}


void print()
{
	for(auto a:Ans)
	{
		for(auto b:a)
		{
			for(auto x:b)
				cout<<x<<" ";
			cout<<endl;
		}
		cout<<endl<<endl<<endl;
	}
}


int main()
{
    int n;
    cin>>n;

    if(n == 1)
    {
    	cout<<"Q"<<endl;
    	return 0;
    }

    if(n == 2 || n == 2)
    {
    	cout<<"NO Any Combination Possible: "<<endl;
    	return 0;
    }

    string  str(n,'.');
    temp.resize(n,str);
    Queen(0,n);
    print();
    return 0;

}
