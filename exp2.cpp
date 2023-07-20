/*Name-Purvansha Gehlod
PRN-22070123088*/
#include<iostream>
using namespace std;
int main()
{
    //Declaring and intializing variable of different data types
    int myintVar = 45;
    float myfloatVar = 23.4;
    double myDoubleVar = 19.98;
    char myCharVar = '#';
    string myStringVar = "Hello";
    bool myBoolVar = true;
    // printing the values of variables
    cout<<"The value of myintVar is:"<<myintVar<<endl;
    cout<<"The value of myFloatVar is:"<<myfloatVar<<endl;
    cout<<"The value of myDoubleVar is:"<<myDoubleVar<<endl;
    cout<<"The value of myCharVar is:"<<myCharVar<<endl;
    cout<<"The value of myString is:"<<myStringVar<<endl;
    cout<<"The value of myBoolVar is:"<<myBoolVar<<endl;
    cout<<"The size of int var:"<<sizeof(myintVar)<<"bytes"<<endl;
    cout<<"The size of float var:"<<sizeof(myfloatVar)<<"bytes"<<endl;
     cout<<"The size of Double var:"<<sizeof(myDoubleVar)<<"bytes"<<endl;
     cout<<"The size of Bool var:"<<sizeof(myBoolVar)<<"bytes"<<endl;
     cout<<"The size of String var:"<<sizeof(myStringVar)<<"bytes"<<endl;
      cout<<"The size of Char var:"<<sizeof(myCharVar)<<"bytes"<<endl;

/* OUTPUT
The value of myintVar is:45
The value of myFloatVar is:23.4
The value of myDoubleVar is:19.98
The value of myCharVar is:#
The value of myString is:Hello
The value of myBoolVar is:1
The size of int var:4bytes
The size of float var:4bytes
The size of Double var:8bytes
The size of Bool var:1bytes
The size of String var:24bytes
The size of Char var:1bytes
*/

    bool imageColor = true;
    if(imageColor)
    cout<<"Yes, The image is colorfull"<<endl;
    else
    cout<<"image is not colorfull"<<endl;
    
    bool camparison;
    int num1 = 5,num2 = 3;
    camparison = num1>num2;
    if(camparison)
    cout<<num1<<"is grater than"<<num2<<endl;
    else
    cout<<num1<<"is smaller than"<<num2<<endl;
    return 0;
}