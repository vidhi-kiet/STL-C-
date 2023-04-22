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
    vector<int>n2={3,4,9,10,45};
    n1.erase(n1.begin()+4);
    n2.erase(n2.begin()+1,n2.begin()+3);
    //printing the values of v1
    cout << "Values of v1" << endl;
    for(int i = 0; i < n1.size(); i++)
    {
        cout << n1[i] << endl;
    }

    //printing the values of v2
    cout << "Values of v2" << endl;
    for(int i = 0; i < n2.size(); i++)
    {
        cout << n2[i] << endl;
    }
    
      return 0;
}