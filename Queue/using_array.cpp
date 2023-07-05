#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
      int front;
      int rear;
      int size;
      int *arr;
      Queue(){
         front = -1;
         rear = -1;
         size = 0;
         arr = new int[16];
      }
      void push(int x){
        if(size == 16){
            exit(1);
        }
        arr[rear%16] = x;
            rear++;
            size++;
      }
      void pop(){
        if(size==0) {exit(1);}
        arr[front%16]=-1;
        front++;
        size--;       
      }
      int Top(){
        if(size==0){exit(1);}
        return arr[front%16];
      }
      int Size(){
        return size;
      }
};

int main (){
 
 Queue q ;
 q.push(10);
 q.push(20);
 q.push(30);

 cout <<"Size of queue is: "<<q.Size()<<endl;
 cout << "Top element is: "<<q.Top()<<endl;
 q.pop();
 cout<<"Updated top element is: "<<q.Top()<<endl;
 return 0;
}