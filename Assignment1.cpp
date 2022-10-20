#include <iostream>
using namespace std;
int main()
{
    cout <<"Enter Two Numbers" << endl;
    int n1,n2;
    cin >> n1 >> n2;
    if (n1==n2)
        cout <<"The two numbers are equal "<<(" %d ",n1)<<" == "<<(" %d ",n2)<<endl;
    else
        cout<<"The two numbers are not equal "<<(" %d ",n1)<<" != "<<(" %d ",n2)<<endl;
    return 0;
}
