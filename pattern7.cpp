#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,i,j,k;
    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
        k=n-i;
        while (k) 
        {
            cout<<"  ";
            k--;
        }
        for(j=1 ; j<=i ; j++)
        {
            cout<<"* ";                        
        }
        cout<<endl;
    }

    for(i=1 ; i<=n-1 ; i++)
    {
        k=i;
        while (k) 
        {
            cout<<"  ";
            k--;
        }
        for(j=1 ; j<=n-i ; j++)
        {
            cout<<"* ";                        
        }
        cout<<endl;
    }
    
    return 0;
}