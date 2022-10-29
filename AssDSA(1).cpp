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
