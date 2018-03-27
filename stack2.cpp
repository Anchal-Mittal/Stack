#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;
int main() {
    stack<int> s;
    stack<int> m;
    m.push(-1);
    long int N;
    long int maximum=0;
    cin >>N;
    long int x;
    for(int i=0;i<N;i++){
       int type;
       cin>>type;
       if(type==1){
           cin>>x;
           if(m.top()<=x)
               m.push(x);
            s.push(x);
        }
        if(type==2){
           if(!s.empty())
               if(!m.empty())
                  if(s.top()==m.top())
                     m.pop();
                   s.pop();
              } 
         if(type==3){
            if(!m.empty())
                cout<<m.top()<< endl;
             }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
