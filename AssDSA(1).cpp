#include<iostream.h>
#include<conio.h>
double area_of_circle(int r)
{
double area=3.14*r*r;
cout<<"Area of a circle for radius "<<r<<"is: ";
return area;
void main()
{
cout<<area_of_circle(14)<<endl;
cout<<area_of_circle(5);
getch();
}

//   // Below is Factorial code
//   #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     long factorial = 1.0;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     if (n < 0)
//         cout << "Error! Factorial of a negative number doesn't exist.";
//     else {
//         for(int i = 1; i <= n; ++i) {
//             factorial *= i;
//         }
//         cout << "Factorial of " << n << " = " << factorial;    
//     }

//     return 0;
// }
