#include <bits/stdc++.h>
#include <string.h>
using namespace std;

string isBalanced(string s) {
    stack<char> s1;
    int i=0;
    int len=s.length();
    while(i<len){
        
        if((s[i]=='[')||(s[i]=='(')||(s[i]=='{'))       
             s1.push(s[i]);
        if(!s1.empty()){
              if (((s[i]==']')&&(s1.top()=='['))|| ((s[i]=='}')&&(s1.top()=='{'))||((s[i]==')')&&(s1.top()=='(')))
              s1.pop();  
        }
        else{
          return "NO"; 
        }
        i++;
      }  
  
    if(s1.empty())    
        return "YES";
    else
    return "NO";
        // Complete this function
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
