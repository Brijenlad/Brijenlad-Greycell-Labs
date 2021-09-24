/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "pybrxwuvncehkolfagjqszidmt";
    vector<string> v;
    v.push_back("boy");
    v.push_back("your");
    v.push_back("toy");
    v.push_back("kkr");
    v.push_back("krk");
    v.push_back("rrk");
    for(char ch : s){
        // y 
        for(auto tmp : v){
            if(tmp[0] == ch)  
                cout << tmp << " ";
        }
    }
    cout << "\n";
    return 0;
}
