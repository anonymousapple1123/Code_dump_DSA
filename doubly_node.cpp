#include<iostream>
#include"doubly_node.h"
Node::Node(int value){
    data=value;
    next=nullptr;
}
void Node::display(){
    std::cout<<"Node data = "<<data<<std::endl;
}
    