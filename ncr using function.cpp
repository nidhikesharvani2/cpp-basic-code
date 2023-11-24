# include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1,i=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    int num= factorial(n);
    int denum= factorial(r)*factorial(n-r);
    int ans= num/denum;
    return ans;
}int main()
{
    int n,r;
    cin>>n>>r;
    cout<<" answer is "<< ncr(n,r)<<endl;
}
