# include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    char op;
    cout<<"enter operation :";
    cin>>op;
    switch(op){
        case '+': cout<<(a+b)<<endl;
        break;
        case '-':cout<<(a-b)<<endl;
        break;
        case '*': cout<<(a*b)<<endl;
        break;
        case '/':  cout<< (a/b) <<endl;
        break;
        case '%': cout<<(a%b)<< endl;
        break;
        defalt: cout<<"please enter the valid operation"<<endl;
    }
}