#include<iostream>
using namespace std;
class twostack{
	public:
	int top1,top2;
	int *array;
	int size;

	twostack(int n){
  		size=n;
	  	top1=-1;
		  top2=size;
		  array=new int[n];
	}
	void push1(int el);
	int pop1();
	void push2(int el);
	int pop2();
	void display1();
	void display2();
};

void twostack::push1(int el){
  if(top1==size)
	  cout<< "STACK IS FULL";
  else
	  array[++top1]=el;
}

void twostack::push2(int el){
  if(top2==-1)
	  cout<< "STACK IS FULL";
  else
     array[--top2]=el;
}

int twostack::pop1(){
  if(top1==-1){
	  cout << "STACK IS EMPTY"<< endl;
	  return -1;
  }
  int el=array[top1--];
  return el;
}

int twostack::pop2(){
  if(top2==size){
	  cout << "STACK IS EMPTY"<< endl;
	  return -1;
  }
  int el=array[top2++];
  return el;
}

void twostack::display1(){
  int n=top1;
  cout << "FIRST STACK IS"<< endl;
  while(n!=-1)
	  cout<<array[n--]<< " ";
	}

void twostack::display2(){
  int n=top2;
  cout << "\nSECOND STACK IS "<< endl;
  while(n!=size)
	  cout<<array[n++]<< " ";
  cout << endl;	
}

int main(){
	twostack stack(100);
	stack.push1(7);
	stack.push1(3);
	stack.push1(4);
	stack.push1(8);
	stack.display1();
	stack.push2(4);
	stack.push2(42);
	stack.push2(24);
	stack.push2(12);
	stack.push2(45);
	stack.display2();
	stack.pop1();
	stack.display1();
	stack.pop2();
	stack.display2();
}
