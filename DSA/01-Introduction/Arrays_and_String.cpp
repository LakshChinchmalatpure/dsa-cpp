//array-collection of elements of the same data type stored in contiguous memory locations.

// #include <iostream>
// using namespace std;
// int main() {
//     int numbers[5] = {10, 20, 30, 40, 50};

//     cout << numbers[0] << endl; // Output: 10
//     cout << numbers[2] << endl; // Output: 30

//     return 0;
// }


//In C++, strings can be handled in two ways:
// 1) C-style Strings (Character Arrays)
//Ends with a null character \0

// #include <iostream>
// using namespace std;

// int main() {
//     char name[] = "Hello";

//     cout << name << endl;
//     return 0;
// }

//std::string (Recommended)
// This is part of the C++ Standard Library.

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string name = "John";

//     cout << name << endl;
//     cout << name.length() << endl;

//     string s1 = "Hello";
//     string s2 = "World";

//     // Concatenation
//     string s3 = s1 + " " + s2;

//     // Length
//     cout << s1.length()<<endl;

//     // Access character
//     cout << s1[0]; // H

//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    //1D Array
    int a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
    cout<<a[4]<<endl;

    a[2]=100;
    cout<<a[2]<<endl;


    //2D Array
    int arr[3][5];
    cout<<arr[2][2]<<endl;
    cout<<arr[1][2]<<endl;

    string s="Laksh";
    int len= s.size();
    cout<<s[len-1]<<endl;

    s[len-1]='z';
    cout<<s[len-1]<<endl;

    return 0;
}