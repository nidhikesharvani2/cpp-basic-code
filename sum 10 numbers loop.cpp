# include<iostream>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    cout<<"n=";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<sum<<endl;
}