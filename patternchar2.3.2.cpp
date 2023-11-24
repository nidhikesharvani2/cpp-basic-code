# include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    int i=1;
    char count='A';
    while(i<=n)
    {
        int j=1;
        while(j<=n)// j<=i;(triangle)//
        {
            cout<<count<<"   ";
             count=count+1;
            j=j+1;

        }
    
        cout<<endl;
          i=i+1;
    }/*
    A B C
    D E F 
    G H I
    */

}