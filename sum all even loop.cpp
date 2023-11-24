# include <iostream>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    cout<<"n=";
    cin>>n;
    while(i<=n)
    {
    if(i%2==0)// this condition for even and i%2==1 that condition for odd //
    {
        sum=sum+i;
    }
    i++;
    }
         cout<<sum;
    
}