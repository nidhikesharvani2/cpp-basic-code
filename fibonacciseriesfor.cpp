# include <iostream>
using namespace std;
int main()
{
    int a=0,b=1,i=1,nextnumber;
    cout<<a<<""<<b<<"";
/*while(i<=10)
{
    i=i+1;
    nextnumber=a+b;
    cout<<nextnumber;
    a=b;
    b=nextnumber;}*/
    for(i=1;i<=10;i++)
{
    nextnumber=a+b;
    cout<<nextnumber;
    a=b;
    b=nextnumber;
}
}