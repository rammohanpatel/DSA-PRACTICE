#include<bits/stdc++.h>

using namespace std;

class Stack{

    public:
      int *arr ;
      int size;
      int top;
      Stack(){   //Constructor which is used here to initialize the value
        top=-1;
        size = 1000;
        arr = new int[size];
        }
        void push(int x){
            arr[++top]=x;
        }
        void pop(){
            top--;
        }
        int Top(){
            return arr[top];
        }
        int Size(){
            return top+1;
        }
        bool isEmpty(){
            return(top==-1);
        }

};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top Element of Stack is: "<<s.Top()<<endl;
    cout<<"Size of stack is : "<<s.Size()<<endl;
    s.pop();
    cout << "Size of stack after deleting an element " << s.Size() << endl;
    cout << "Top of stack after deleting an element " << s.Top() << endl;

   if(s.isEmpty()){ 
    cout<<"Stack is empty"<<endl;
    } else {
        cout<<"Stack is not Empty";
    }

    return 0;
}