#include <iostream>
using namespace std;
int main()
{
    int i,n,m=0,find=0;
    cout<<"Enter the number  : "<<endl;
    cin >>n;
    m =n/2;
    for ( i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout<<"The number is not prime"<<endl;
            find =1;
            break;
        }
    }
    if (find == 0) 
        cout<<"The number is prime"<<endl;
    return 0;
}
