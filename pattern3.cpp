# include<iostream>
using namespace std;
int main()
{
    int n;cout<<"n=";cin>>n;
    int i=1;
    while(i<=n)
    { cout<<" ";
        int space=n-i;
    while(space){
        space=space-1;
    }  int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;}
    cout<<endl;
    i=i+1;
    }
}
