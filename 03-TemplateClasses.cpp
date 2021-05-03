#include<iostream>
using namespace std;

template<class T>
class Stack{
	private:
    T *stk;
    int top;
    int size;
    public:
    Stack(int sz)    {
        size=sz;
        top=-1;
        stk=new T[size];
    }
    void push(T x);
    T pop();    
};    
template<class T>
void Stack<T>::push(T x){
    if(top==size-1)
        cout<<"Stack is Full";
    else{
        top++;
        stk[top]=x;
    }
}        
template<class T>
T Stack<T>::pop(){
    T x=0;
            
    if(top==-1)
        cout<<"Stack is Empty"<<endl;
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}        
int main(){
    Stack<float> floatStack(10);
    Stack<int> intStack(10);
    intStack.push(10);
    intStack.push(23);
    intStack.push(33);
    floatStack.push(10);
    floatStack.push(23);
    floatStack.push(33);        
}
    
