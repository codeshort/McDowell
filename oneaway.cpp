/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(abs(s1.length()-s2.length()) > 1)
    {
        cout<<"false";
        return 0;
    }
    map<int,int> m;
    int count =0;
    if(s1.length()>s2.length())
    {
        string temp = s1;
        s1 = s2;
        s2= temp;
    }
    for(int i =0;i<s1.length();i++)
    {
        if(m.find(s1[i])!=m.end())
        {
            m[s1[i]]++;
        }
        else
        m[s1[i]] = 1;
    }
    for(int i=0;i<s2.length();i++)
    {
        if(m.find(s2[i])!=m.end() && m.find(s2[i])->second >0 )
        {
            m[s2[i]]--;
        }
        else
        {
            count++;
        }
    }
    if(count<2)
    {
     cout<<"true";   
     
    }
    else
    cout<<"false";

    return 0;
}
