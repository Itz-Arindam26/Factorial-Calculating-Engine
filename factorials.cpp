#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    cout<<"FACTORIAL FINDING ENGINE || BY ARINDAM SAMANTA\n"<<"This is an engine which can find factorial of any number...\n";
    cout<<"***Exclamation mark(!) is the sign of factorial***\n";
    int n;
    cout<<"Enter the value of the integer of which you want to find factorial:\n";
    cin>>n;
    cout<<n<<"! is "<<factorial(n)<<".\n"<<"**or**\n"<<"The factorial of "<<n<<" is "<<factorial(n)<<".\n";
    cout<<"ACTION SUCCESSFULLY TERMINATED\n";
    return 0;
}