#include<iostream>
#include<vector>
#define RESERVE 100
template<typename TYPE> class stack{
    private:
        std::vector<TYPE> data;
        int top;
    public:
    stack(){
        data.reserve(RESERVE);
        top=-1;
    }
    void reserved_space(){
        std::cout<<"Stack is reserved for "<<RESERVE<<" Elements OR "<<RESERVE*sizeof(TYPE)<<" Bytes."<<std::endl;
    }
    bool is_empty(){
        if(top==-1){return true;}
        return false;
    }
    bool is_full(){
        if(top==RESERVE-1){return true;}
        return false;
    }
    void push(TYPE value){
        if(!is_full()){
            top+=1;
            try{
            data.push_back(value);
            }catch (const std::bad_alloc& e){
                 std::cerr << "Memory allocation failed: " << e.what() << std::endl;
                 return;
            }
            std::cout<<"Pushed : "<<value<<std::endl;
            return;
        }else{
        std::cout<<"Stack Overflow";
        return;
        }
    }
    TYPE pop(){
        if(!is_empty()){
            top-=1;
            TYPE temp=data[top];
            data.pop_back();
            std::cout<<"Popped : "<<temp<<std::endl;
            return temp;            
        }
        std::cout<<"Stack Underflow!"<<std::endl;
        return TYPE();
    }
    TYPE peek(){
        if(!is_empty()){
         return data[top];   
        }else{
            std::cout<<"Stack is empty."<<std::endl;
            return TYPE();
        }        
    }
    void display(){
        if(!is_empty()){
            std::cout<<"All values of stack are :-"<<std::endl;
        for(int index=top; index>=0; index--){
            std::cout<<data[index]<<std::endl;
        }
        }else{
            std::cout<<"Stack is empty."<<std::endl;
        }
        return;
    }
    ~stack(){
        data.resize(0);
    }
};
int main(){
    stack<int> s1;
    s1.push(4);
    s1.push(5);
    s1.push(8);
    s1.push(9);
    s1.display();
    s1.pop();
    s1.display();
    s1.reserved_space();
    return 0;
}