#include<iostream>
using namespace std;

void printPattern1(int num){
    for (int i = 0; i < num; i++)
    {
        for (char ch ='A'; ch <='A'+i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void printPattern2(int num){
    for (int i = 0; i < num; i++)
    {
        for (char ch ='A'; ch <='A'+(num-i-1); ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void printPattern3(int num){
    for (int i = 0; i < num; i++)
    {   
        char ch='A'+i;
        for (int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printPattern4(int num){
    for (int i = 0; i < num; i++)
    {   
        //spaces
        for (int j=0;j<num-i-1;j++)
        {
            cout<<" ";
        }

        //character
        char ch='A';
        int breakPoint=(2*i+1)/2;
        for (int j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if (j<=breakPoint)
            {
                ch++;
            }
            else{
                ch--;
            }
           
            
        }
        //spaces
        for (int j=0;j<num-i-1;j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }
    cout<<endl;
}

void printPattern5(int num){
    for (int i = 0; i < num; i++)
    {
        for (char ch ='E'-i; ch <='E'; ch++)
        {
            cout<<ch<<" ";
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

    //4 Pattern
    printPattern4(num);

    //5 Pattern
    printPattern5(num);

    // //6 Pattern
    // printPattern6(num);

    // //7 Pattern
    // printPattern7(num);


    return 0;
}