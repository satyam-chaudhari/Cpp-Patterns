#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,i,j,k=1;
    cin>>n;

    for (i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=i ;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
   
    return 0;
}