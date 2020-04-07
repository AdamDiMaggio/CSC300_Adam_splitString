#include <string.h>
#include <iostream>
#include "StringFactory.hpp"

using namespace std;

int main()
{
    string s = "1+51+91-71*91/181*1-";
    string delims = "+-*/";
    StringFactory* sf = new StringFactory();
    string* output = sf->split(s,delims);
     

    /*LinkedList* ll = new LinkedList();
    ll->addEnd("Hello");
    ll->addEnd("yolo");
    ll->addEnd("World");
    ll->addEnd("bazinga");
    ll->display();
    delete ll;
    */
    /*
    char s[] = "123+12-2";
    char delims[] = "+-/*";
    char* tempString;
    do
    {
        tempString = strtok(s, delims);
        cout << tempString << "\n";
    } 
    while (tempString);
    */

   /*char s[] = "123+13-2";
   string s2 = "123+13-2";  //solid object, use .length
   string s4 = "123+13-2";  //solid object, use .length
   string* s3 = &s2;    //pointer, use ->length
   char ar[20];

   //cout << sizeof(ar)/sizeof(int) << "\n";
    cout << sizeof(ar)/sizeof(char) << "\n";
    cout << sizeof(s)/sizeof(char) << "\n";
    cout << s2.length()<< "\n";
    cout << s3->length()<< "\n";
    cout << (*s3).length()<< "\n";
    cout << &s2 << "\n";
    cout << &s4 << "\n";*/


    
}