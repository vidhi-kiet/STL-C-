/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int> n1={1,2,5,7,8};
    vector<int>n2={8,9,41,57,67};
    
    n1.swap(n2);
    cout<<"array 1:"<<endl;
    for(auto i:n1)
    {
        cout<<i<<" ";
    }
    cout<<"\narray 2:"<<endl;
    for(auto j:n2)
    {
        cout<<j<<" ";
    }
      return 0;
}