/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int i, j;
    cin>>i>>j;
    int mask;
    int allones= ~(0);
    string binary;
     binary = std::bitset<32>(allones).to_string(); //to binary
    //std::cout<<binary<<"\n";
    cout<<binary<<endl;
   // int 1s before j;
   
    int first = allones<<(j+1);
   binary = std::bitset<32>(first).to_string(); //to binary
    std::cout<<binary<<"\n";
    
    int second = (allones<<(i))-1;
    binary = std::bitset<32>(second).to_string(); //to binary
    std::cout<<binary<<"\n";
    
    int third = first|second;
  binary = std::bitset<32>(third).to_string(); //to binary
    std::cout<<binary<<"\n";
    
    int n_clear = n&third;
    int m_shift = m<<i;
    int result = n_clear| m_shift;
  binary = std::bitset<32>(result).to_string(); //to binary
    std::cout<<binary<<"\n";
    
    return 0;
}
