//#include<bits/stdc++.h>  //this cover all libraries
#include<iostream>   // Input and Output
#include<cmath>      // sqrt(), pow()
#include<string>     // string handling  (length(),size(),+,substr(),find())
#include<cstring>    // C-style string functions  (strlen(),strcpy(),strcat(),strcmp())

using namespace std;

int main()
{
    int n;

    cout << "Hey Laksh Choose 1/2/3" << endl;
    cin >> n;

    // cmath
    cout << "Square root of 9 is " << sqrt(9) << endl;
    cout << "Square of 5 is " << pow(5,2) << endl;

    // string library
    string n1 = "Laksh";
    string n2 = "Chinchmalatpure";

    cout << n1.length() << endl;
    cout << n1.size() << endl;
    cout << n1 + n2 << endl;
    cout << n1.substr(0,3) << endl;
    cout << n1.find("aks") << endl;

    // cstring library
    char s[] = "Hello";
    cout << strlen(s) << endl;

    char a[20];
    char b[] = "Laksh";

    strcpy(a,b);
    cout << a << endl;

    char x[20] = "Hello ";
    char y[] = "World";

    strcat(x,y);
    cout << x << endl;

    char p[] = "Ball";
    char q[] = "Cat";

    cout << strcmp(p,q) << endl;

    return 0;
}