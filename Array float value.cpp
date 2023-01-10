#include<iostream>
using namespace std;
int main()
{
    float A[]={2.5f,5.6f,6.5f,6,8,7,};

    //for (auto x:A) or
    for (float x:A)
        cout<<x<<endl;
    return 0;
}
