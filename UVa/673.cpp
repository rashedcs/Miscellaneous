#include<bits/stdc++.h>
using namespace std;

stack<char>stk;

bool solve(string str)
{
        while(!stk.empty()) stk.pop();

        for(int i=0; i<str.size(); i++)
        {
            char c=str[i], t=stk.top();

           if(c=='(' || c=='{' || c=='[' ) 
           {
                stk.push(c);
           }
            else  if(stk.empty()) 
           {
                 return  false;
           }
           else if((c==')'&&t=='(') || (c=='}' && t=='{') || (c==']' && t=='['))
           {
                stk.pop();
           }

        }
        if(stk.empty()==true) return true;
        else                  return false;
}

int main(){
    int tc;
    scanf("%d ",&t);
    string str;

    for(int i=1; i<=tc; i++)
    {
        getline(cin,str);
        if(solve(s)==false) printf("No\n");
        else printf("Yes\n");
    }
}
