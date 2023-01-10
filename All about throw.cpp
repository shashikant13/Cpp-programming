#include<iostream>
using namespace std;

class MyException: exception
{

};

int division(int a,int b)throw(int)
{
    if(b==0)
        throw 10;
    return a/b;
}

int main()
{
    int x=10, y=0, z;

    try
    {
        if(y==0)
            throw MyException();
        z=x/y;
        cout<<z<<endl;
    }
    catch(MyException e)
    {
        cout<<"Division by zero "<<endl;
    }
    cout<<"Bye"<<endl;

}
