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

void printPattern4(int num){
    for (int i = 0; i < num; i++)
    { 
         //spaces
        for(int j=0;j<num-i-1;j++)                 
        {
            cout<<" ";
        }

        //Stars
        for(int j=0;j<2*i+1;j++)                 
        {
            cout<<"*";
        }

        //spaces
        for(int j=0;j<num-i-1;j++)                 
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
         //spaces
        for(int j=0;j<i;j++)                 
        {
            cout<<" ";
        }

        //Stars
        for(int j=0;j<2*(num-i)-1;j++)                 
        {
            cout<<"*";
        }

        //spaces
        for(int j=0;j<i;j++)                 
        {
            cout<<" ";
        }

        cout<<endl;
    }
    cout<<endl;
}

void printPattern6(int num){
        for (int i = 0; i < num; i++)
    { 
         //spaces
        for(int j=0;j<num-i-1;j++)                 
        {
            cout<<" ";
        }

        //Stars
        for(int j=0;j<2*i+1;j++)                 
        {
            cout<<"*";
        }

        //spaces
        for(int j=0;j<num-i-1;j++)                 
        {
            cout<<" ";
        }

        cout<<endl;
    }


    for (int i = 0; i < num; i++)
    {   
        
         //spaces
        for(int j=0;j<i;j++)                 
        {
            cout<<" ";
        }

        //Stars
        for(int j=0;j<2*(num-i)-1;j++)                 
        {
            cout<<"*";
        }

        //spaces
        for(int j=0;j<i;j++)                 
        {
            cout<<" ";
        }

        cout<<endl;
    }
    cout<<endl;
}

void printPattern7(int num){
   
    for (int i = 1; i <= 2*num-1; i++)
    {   int stars=i;
        if(i>num) stars=2*num-i;
        for (int j = 0; j < stars; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printPattern8(int num){
    int inis=0;
    for (int i = 0; i < num; i++)
    {   
        //stars
        for(int j=1;j<=num-i;j++)
        {
            cout<<"*";
        }
        //spaces
        for(int j=0;j<inis;j++)
        {
            cout<<" ";
        }

        //stars
        for(int j=1;j<=num-i;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        inis+=2;
    }

    inis=2*(num-1);
    for (int i = 1; i <= num; i++)
    {   
        //stars
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //spaces
        for(int j=0;j<inis;j++)
        {
            cout<<" ";
        }

        //stars
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        inis-=2;
    }

    cout<<endl;
}


void printPattern9(int num){

   int spaces=2*(num-1);
    for (int i = 1; i <= 2*num-1; i++)
    {   int stars=i;
        if(i>num) stars=2*num-i;
        for (int j = 1; j <= stars; j++)
        {
            cout<<"*";
        }
        //spaces
        for (int j = 1; j <=spaces; j++)
        {
            cout<<" ";
        }
        //stars
        for (int j = 1; j <= stars; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        if (i<num)
        {
            spaces-=2;
        }
        else{
            spaces+=2;
        }
    }
    cout<<endl;
}

void printPattern10(int num){
   
    for (int i = 1; i <= num; i++)
    {   
        for (int j = 1; j <=num; j++)
        {
            if (i==1||i==num||j==1||j==num)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    cout<<endl;
}


void printPattern11(int num){
   
    for (int i = 0; i < 2*num-1; i++)
    {   
        for (int j = 0; j <2*num-1; j++)
        {
            int top=i;
            int left=j;
            int right=(2*num-2)-j;
            int bottom=(2*num-2)-i;
            cout<<(num-min(min(top,bottom),min(left,right)));

            
        }
        cout<<endl;
    }
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

    //8 Pattern
    printPattern8(num);

    //9 Pattern
    printPattern9(num);

    //10 Pattern
    printPattern10(num);

    //11 Pattern
    printPattern11(num);


    return 0;
}