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
     cout<<"\nvector size :";
    int m;
    cin>>m;
    vector<int> v1(m,0);
    cout<<"\nenter elemetn :";
    for(int i=0;i<m;i++)
    {
        cin>>v1[i];
    }
    cout<<"print : ";
    
    for(int i=0;i<m;i++)
    {
        cout<<v1[i]<<" ";
    }
 

    return 0;
}