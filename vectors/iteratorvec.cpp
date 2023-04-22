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
    vector<int> n1;
    for(int i=0;i<5;i++)
    {
        n1.push_back(i);
    }
    cout<<"print:";
    for(auto i=n1.begin();i!=n1.end();i++)
    cout<<*i<<" ";
    
         return 0;
}