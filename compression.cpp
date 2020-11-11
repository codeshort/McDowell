/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   string s;
   cin>>s;
   if(s.length()<=2)
   {
       cout<<s<<endl;
       return 0;
   }
   char prev = s[0];
   int count =1;
   string ans;
   for(int i=1;i<s.length();i++)
   {
       if(s[i] == prev)
       {
           count++;
           continue;
       }
       else
       {
           
           ans+=(prev+to_string(count)+"");
           prev=s[i];
           count =1;
       }
   }
   ans+=(prev+to_string(count)+"");
   if(ans.length()>=s.length()) {cout<<"can't convert"<<endl; return 0;}
    cout<<ans<<endl;
    return 0;
}
