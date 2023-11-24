# include <iostream>
using namespace std;
//1-> prime number//
// 0-> not prime number//
bool isprime(int n){
for(int i=2; i<n; i++)
{
if(n%i==0){
    return 0;
}
return 1;}

}
int main()
{
    int n;
    cin>>n;
    if(isprime(n))
    {
        cout<<"n is prime number"<<endl;
    }
}