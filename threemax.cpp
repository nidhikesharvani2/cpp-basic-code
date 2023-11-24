# include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers";
    
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<c;
        else{
            cout<<c;
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            cout<<b;
        }
        else{cout<<c;}
    }
    if(c>a){if(c>b)
    {cout<<c;}
    else{cout<<b;}}
}