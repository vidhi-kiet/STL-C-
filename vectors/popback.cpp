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
    vector<int> n={1,5,8,9,7};
    n.pop_back();
    
    
    cout<<"\nprint :"<<endl;
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<" ";
    }
    
    return 0;
}