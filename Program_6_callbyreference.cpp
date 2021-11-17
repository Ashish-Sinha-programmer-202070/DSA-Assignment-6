//Program to Swap two numbers using call by refrence//
#include<iostream>
using namespace std;
void swap (int &A, int &B) //&x and &y are Reference variables
{
        int temp;
        temp=A;
        A=B;
        B=temp;
}
int main()
{
        int A=6,B=9;
        cout<<"\n Before swapping"<<"\n A = "<<A<<"\n B = "<<B<<endl;
        swap(A,B);
        cout<<"\n After swapping"<<"\n A = "<<A<<"\n B = "<<B<<endl;
        return 0;
}