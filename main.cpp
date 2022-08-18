#include <iostream>
using namespace std;
int t,n,sum;
int tab[1000000];
int main()
{
    cin>>t;
    while(t>=1)
    {
        sum=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tab[i];
            sum += tab[i];
        }
        cout<<sum<<endl;
        t--;
    }
    return 0;
}
