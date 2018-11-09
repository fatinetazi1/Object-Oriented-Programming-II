/*
CH08-320143
problem 2.2.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

template <class S> class Stack{
	private:
		int size;
		S top;
		S *stack;
	public:
		Stack();
    	Stack(int);
    	Stack(const Stack&);
    	~Stack();

    	bool push(const S&);
    	bool pop(S&);

    	S back(void);
    	int getNumEntries();

    	void resize(int);
    	int getSize();

};

template<class S> Stack<S>::Stack(){
	size = 10;
	top = 0;
	stack = new S[10];
}

template<class S> Stack<S>::Stack(int newsize){
	size = newsize;
	top = 0;
	stack = new S[newsize];
}

template<class S> Stack<S>::Stack(const Stack& n){
	size = n.size;
	top = n.top;
	stack = new S[size];
	for (int i = 0; i < top; ++i){
		stack[i] = n.stack[i];
	}
}

template<class S> Stack<S>::~Stack(){
	delete[] stack;
}

template<class S> bool Stack<S>::push(const S& p){
	if (top == size){
		return false;
	} else {
		top++;
		stack[top] = p;
		return true;
	}
}

template<class S> bool Stack<S>::pop(S& p){
	if(top == 0){
		return false;
	} else {
		p = stack[top];
		top--;
		return true;
	}
}

template<class S> S Stack<S>::back(void){
	if (top == 0){
		return false;
	} else {
		return stack[top];
	}
}

template<class S> int Stack<S>::getNumEntries(){
	return top;
}

template<class S> void Stack<S>::resize(int newsize){
	S *newstack = new S[newsize];
	int sz = (top < newsize ? top : newsize);
	for (int i = 0; i < sz; ++i){
		newstack[i] = stack[i];
	}
	delete[] stack;
	stack = newstack;
	top = sz;
	size = newsize;
}

template<class S> int Stack<S>::getSize(){
	return size;
}
