//endl → inserts a new line and flushes the output buffer (slower).
//\n → inserts a new line (faster, commonly used).

#include<iostream>
using namespace std;
int main()
{
    string s;  
    cout<<"Enter the Word/line "<<endl; 
    getline(cin,s);       // input : Hey Laksh   output : Hey Laksh
    // cin>>s;               // input : Hey Laksh   output : Hey
    cout<<s<<endl;
    return 0;

    //correct
    char ch1 = 'A';
    string s1 = "A";

    //wrong
    // char ch2 = "A";
    // string s2 = 'A';
    // string arr[] = {'One', 'Two'};


    //correct
    char ch3 = 'A';
    char name[] = "Laksh";
    string s3 = "Hello";
    string arr1[] = {"One", "Two"};
}
