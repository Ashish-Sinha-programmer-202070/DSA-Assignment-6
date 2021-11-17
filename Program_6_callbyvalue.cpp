//Program to Swap two numbers using call by value//

#include<iostream>
using namespace std;

void swap(int,int);

int main()
{
        int X,Y;
        cout<<"Enter Value Of X :: ";
        cin>>X;
        cout<<"\nEnter Value of Y :: ";
        cin>>Y;

        cout<<"\nBefore Swapping, Value of :: \n\tX = "<<Y<<"\tY = "<<Y<<"\n";

        swap(X,Y);

       
}


void swap(int X,int Y)
{
        int Z;
        Z=X;
        X=Y;
        Y=Z;
        cout<<"\n After Swapping, Value of :: \n\tX = "<<X<<"\tY = "<<Y<<"\n";

}