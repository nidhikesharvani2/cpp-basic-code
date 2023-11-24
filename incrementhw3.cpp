# include <iostream>
using namespace std;
int main(){
    int a=1,  b=a++ ,c=++a;
    cout<<b<<endl;
    cout<<c<<endl;
    // output = 1,3//
    int number=3;
    cout<<(25*(++ number));
    // 25*4=100//
}