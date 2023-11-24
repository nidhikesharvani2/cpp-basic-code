# include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++)
    if(i%2!=0)
    {
       cout<<i*i<<endl; 
       cout<<i*i*i<<endl;
    }
}