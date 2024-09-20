#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
template <typename T>
class Node{
    public: 
        T *data;
        Node* next;
        Node* prev;
        Node(T value): next(nullptr),prev(nullptr){
            data = new T(value);
        }
        ~Node(){
            delete data;
        }
};
template <typename T>
class LinkedList {
    private:
    int top{-1};
        Node<T>* head;
        Node<T>* tail;
    public:
        LinkedList() : head(nullptr){}
        void create_node(T value){
            Node<T> *temp1->data=value;
            if(!temp==nullptr){
                head->next=temp1;
                temp->prev=head;
                temp->next=nullptr;
                tail=temp1;
                top+=1;
            }else{
                std::cout<<"Node created !";
                head=temp1;
                tail=temp1;
                top+=1;
            }
        }
        void push(T data){
            create_node(data);
            std::cout<<"Pushed."<<std::endl;
        }
        T pop(){
            T value_to_return;
            if(tail!=nullptr){
                value_to_return=tail->data;
                top-=1;
                tail=tail->prev;
            }else{
                std::cout<<"Underflow."<<std::endl;
            }
        }
        T peek(){
            if(tail!=nullptr){
                return tail->data;
            }else{
                std::cout<<"Underflow."<<std::endl;
            }
        }
};
#endif