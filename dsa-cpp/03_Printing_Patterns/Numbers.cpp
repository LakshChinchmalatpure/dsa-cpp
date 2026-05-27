#include<iostream>
using namespace std;

void printPattern1(int num){
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void printPattern2(int num){
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void printPattern3(int num){
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <=num-i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printPattern4(int num){
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printPattern5(int num){
    int start;
    for (int i = 0; i < num; i++)
    {   
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for (int j = 0; j <=i; j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
    cout<<endl;
}

void printPattern6(int num)
{
    int space = 2 * (num - 1);

    for (int i = 1; i <= num; i++)
    {
        // Left numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // Right numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;

        // Reduce spaces after each row
        space -= 2;
    }

    cout << endl;
}


void printPattern7(int num)
{   
    int count=1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<count<<" ";
            count++;
        }
        cout<<endl;
    }

    cout << endl;
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

    //6 Pattern
    printPattern6(num);

    //7 Pattern
    printPattern7(num);


    return 0;
}