/*
Name-Purvansha Gehlod
PRN-22070123088
Exp-5
Part 1
Even_Odd */
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number:"<<endl;
    cin>>a;
    if(a==0)
    {
        cout<<"The number is zero:"<<endl;
    }
    else if (a%2==0)
    {
        cout<<"The number is even:"<<endl;
    }
    else
    {
        cout<<"The number is odd:"<<endl;
    } 
    /*OUTPUT
    Enter the number:2
    The number is even:*/

/* 
PART = 2
 Camparison between 3 numbers and print largest numbers using if else*/
    int x,y,z;
    cout<<"Enter the first number:"<<endl;
    cin>>x;
    cout<<"Enter the Second number:"<<endl;
    cin>>y;
    cout<<"Enter the third number:"<<endl;
    cin>>z;
    if ((x>y) && (x>z))
    cout<<"The first number is largest:"<<endl;
    else if ((y>x) && (y>z))
    cout<<"The second number is largest:"<<endl;
    else
    cout<<"The third number is largest:"<<endl;

/*OUTPUT
Enter the first number:
2
Enter the Second number:
5
Enter the third number:
6
The third number is largest:
*/


}