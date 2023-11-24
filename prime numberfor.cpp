# include <iostream>
using namespace std;
int main()
{
    int n,i, isprime=1;
    cout<<"n=";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
        break;
        }
        if(isprime==0){
            cout<<"not prime number";
        }
        else{
            cout<<"prime number";
        }

        }
    }
