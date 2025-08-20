#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin >> s;
   stack <char> st;
   for(int i=0;i<s.length();i++){
       
       st.push(s[i]);
   }
   string t="";
   while(st.empty()==false){
       t+=st.top();
       st.pop();
   }
   cout << t<< endl;
}

