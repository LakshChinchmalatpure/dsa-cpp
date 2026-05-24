#include<iostream>
using namespace std;

void printPattern1(int num){
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void printPattern2(int num){
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}
        

void printPattern3(int num){
    for (int i = 1; i <= num; i++)
    {
        for(int j=0;j<num-i+1;j++)                 //1 way
        // for (int j = num; j > i; j--)          //2 way    
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}



int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    //1 Pattern
    printPattern1(num);

    //2 Pattern
    printPattern2(num);

    //3 Pattern
    printPattern3(num);


    return 0;
}