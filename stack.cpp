#include <iostream>
#define MAX 10
//comment here
class stack{
private:
    int *data;
    int top;
public: 
    stack(int size=MAX){
        data = new int[size];
        top=-1;
    }
    bool is_empty(){
        if(top==-1){return true;}
        return false;
    }
    bool is_full(){
        if(top==MAX-1){return true;}
        return false;
    }
    void push(int value){
        if(!is_full()){
            top+=1;
            data[top]=value;
        }
    }
    int pop(){
        if(!is_empty()){
            top-=1;
            return data[top];            
        }
        std::cout<<"Stack is empty."<<std::endl;
        return -1;
    }
    void display(){
        for(int i=0;i<=top;i++){
            std::cout<<data[i]<<std::endl;
        }
        return;
    }
    ~stack(){
        delete[] data;
    }

};
int main(){
    stack s1(MAX);
    s1.push(4);
    s1.push(5);
    s1.push(8);
    s1.push(9);
    s1.display();
    return 0;
}