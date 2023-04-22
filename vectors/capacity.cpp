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
    vector<int> n;
    
   for(int i=0;i<50;i++)
   {
       n.push_back(i);
   }
   cout<<"size :"<<n.size()<<endl;
   cout<<"max_size :"<<n.max_size()<<endl;
   cout<<"capacity :"<<n.capacity()<<endl;
    return 0;
}