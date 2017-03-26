
/*
Given a number, you need to check whether any permutation of the number is divisible by 8 or not. Print Yes or No.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of one line. The first line of each test case consists of an integer N.

Output:
Corresponding to each test case, in a new line, print Yes if divisible by 8, else No.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100000

Example:

Input
2
46
345

Output
Yes
No
*/




#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,cnt,tc;
    string s ;
    cin>>tc;

   while(tc--)
   {
       cnt = 0;
       cin>>s;
       sort(s.begin(), s.end());
   
      do
      {
        num = stoi(s);
        if(num%8==0) 
         {
            cnt++;
            break;
         }
      }
      while(next_permutation(s.begin(), s.end()));
    
      if(cnt!=0)     cout<<"Yes\n";
      else           cout<<"No\n";
   } 
    
    return 0;
}



