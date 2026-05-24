#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Using For Loop"<<endl;
    for (i = 0; i < 5; i++)
    {
        cout<<"Laksh"<<i<<endl;
    }
    cout<<i<<endl;


    cout<<"Using While Loop"<<endl;
    i=0;
    while (i<5)
    {
        cout<<"Laksh"<<i<<endl;
        i++ ; //i=i+1
    }
    cout<<i<<endl;
    

    cout<<"Using Do-While Loop"<<endl;   //It will execute minimum 1 time

    i=2;
    do{
        cout<<"Laksh"<<i<<endl;
        i++;
    } while (i<=1);
    
    cout<<i<<endl;

    


    return 0;
}