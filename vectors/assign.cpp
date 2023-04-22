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
    int n[]={10,50,40,30,70};
    vector<int>n1;
    vector<int>n2;
    n1.assign(n,n+5);
    n2.assign(n,n+2);
     cout<<"print :"<<endl;
     cout<<"array 1:";
     for(int i=0;i<n1.size();i++)
     {
         cout<<n1[i]<<" ";
         
     }
     cout<<"\narray 2:";
     for(int i=0;i<n2.size();i++)
     {
         cout<<n2[i]<<" ";
         
     }
    
    return 0;
}