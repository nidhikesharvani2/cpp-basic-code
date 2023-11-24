# include<iostream>
using namespace std;
int main()
{
    int a ,i,count=0 ;
    cout<<"a=";
    cin>>a;
    for(i=1;i<=a;i++)
    if(a%i==0)
    {
        count++;
    }
    if(count==2)
    {
        cout<<"prime number"<<endl;
    }
    else
    {
        cout<<"a is not prime"<<endl;
        }
}
