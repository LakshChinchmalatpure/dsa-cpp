//Functions are set of code which perfforms something for you,It is used to modularise code,It is used to increse readability,It is used to use same code multiple times
//We usually use 4 kinds of functions
// 1]void,2]return,3]parameterized,4]non-parameterized

//pass by value--- only copy goes to function ,original in main method remains same
//pass by reference ---It is declared using '"&"=address' in the function parameter
#include<iostream>
using namespace std;
void printName(){
    cout<<"Hi ,Laksh"<<endl;
}

void printName1(string name){
    cout<<"Hi "<<name<<endl;
}

int sum(int x,int y){
    int z=x+y;
    return z;
}

//5>=6
int maxx(int num1,int num2){
    if(num1>=num2) {
        return num1;
    }
    return num2 ;  //It is looking for return line
}

//pass by value(only copy is go, not reference)
void doingSomething(int num){
        cout<<num<<endl;
        num+=5;
        cout<<num<<endl;
        num+=5;
        cout<<num<<endl;
}

//Pass by value
void printStr(string s){
    s[0]='f';
    cout<<s<<endl;

}


//Pass by reference (there is going the original value and the change is happen in the main method)
void passbyRef(string &k){
    k[0]='j';
    cout<<k<<endl;

}


void printArr(int arr[],int n){
    arr[0]+=100;
    cout<<"Inside the Function  value is "<<arr[0]<<endl;
}

int main()
{
    cout<<"Enter the Name"<<endl;
    string name;
    cin>>name;

    printName();
    printName1(name);



    //Quiz: take 2 no. and print its sum
    int num1,num2;
    cout<<"Enter the value of num1 and num2"<<endl;
    cin>>num1>>num2;
    int result=sum(num1,num2);
    cout<<result<<endl;


    int maximum=maxx(num1,num2);
    cout<<"the Maximum number is "<<maximum<<endl;

    //way1
    int number=10;
    doingSomething(number);

    //Way 2
    //int number=10;
    //doingSomething(number);
    cout<<number<<endl;

    string b="Raj";
    printStr(b);
    cout<<b<<endl;

    string k="Mahesh";
    passbyRef(k);
    cout<<k<<endl;

    int n=5;
    int arr[n];
    cout<<"Enter the Array Elements "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Inside the main value is "<<arr[0]<<endl;
    printArr(arr,n);

    cout<<"Inside the main value(After executing function...) is "<<arr[0]<<endl;

    // for (int i = 0; i <=4; i++)
    // {
    //     cout<<arr[i];
    // }

    

    return 0;

}