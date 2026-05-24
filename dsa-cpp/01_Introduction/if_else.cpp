//If-else

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter Your age "<<endl;
//     cin>>age;
//     if (age>=18)
//     {
//         cout<<"You  are Adult "<<endl;
//     }
//     else{
//         cout<<"You  are not Adult "<<endl;
//     }
    
//     return 0;
// }

//Grading Calculating
#include <iostream>
using namespace std;

int main() {
   
    int marks = 54;
    //Way 1

    // Check grade conditions using if-else ladder
    // if (marks < 25) {
    //     cout << "Grade: F" << endl;  // Less than 25 is Grade F
    // } else if (marks >= 25 && marks <= 44) {
    //     cout << "Grade: E" << endl;  // Between 25 and 44 is Grade E
    // } else if (marks >= 45 && marks <= 49) {
    //     cout << "Grade: D" << endl;  // Between 45 and 49 is Grade D
    // } else if (marks >= 50 && marks <= 59) {
    //     cout << "Grade: C" << endl;  // Between 50 and 59 is Grade C
    // } else if (marks >= 60 && marks <= 79) {
    //     cout << "Grade: B" << endl;  // Between 60 and 79 is Grade B
    // } else if (marks >= 80  && marks<=100) {
    //     cout << "Grade: A" << endl;  // Between 80 and 100 is Grade A
    // } else {
    //     cout << "Invalid marks entered." << endl;  // Handles unexpected cases
    // }




    //way 2

    if (marks < 25) {
        cout << "Grade: F" << endl;  // Less than 25 is Grade F
    } else if (marks <= 44) {
        cout << "Grade: E" << endl;  // Between 25 and 44 is Grade E
    } else if (marks <= 49) {
        cout << "Grade: D" << endl;  // Between 45 and 49 is Grade D
    } else if (marks <= 59) {
        cout << "Grade: C" << endl;  // Between 50 and 59 is Grade C
    } else if (marks <= 79) {
        cout << "Grade: B" << endl;  // Between 60 and 79 is Grade B
    } else if (marks <= 100) {
        cout << "Grade: A" << endl;  // Between 80 and 100 is Grade A
    } else {
        cout << "Invalid marks entered." << endl;  // Handles unexpected cases
    }

    return 0;
}
