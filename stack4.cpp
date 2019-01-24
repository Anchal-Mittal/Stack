#include <bits/stdc++.h> 

using namespace std; 

stack<int> s;

void sort(){
	
  int y;
	
  stack<int> temp;
	
  while(!s.empty()){
	   
     int x=s.top();
	   
     s.pop();
		
     if(temp.empty())
		  
        temp.push(x);
		
		 else{
		    
        y=temp.top();
		 
     while((y >x)&&(!temp.empty())){
				
        s.push(y);
				
        temp.pop();
				
        y=temp.top();
			
      }
			  
        temp.push(x);
			}
      
	}
	
  while(!temp.empty()){
		
    int el=temp.top();
		
    temp.pop();
		
    cout << el << " ";
	}
}
int main(){
     s.push(10);
     s.push(2);
     s.push(17);
     s.push(4);
     s.push(12);
     s.push(1);
    
     sort();
}
