#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
template <typename T>
class Node{
    public: 
        T data;
        Node* next;
        Node* prev;
        Node(T value): data(value), next(nullptr),prev(nullptr){}
};
template <typename T>
class LinkedList {
    private:
        Node<T>* head;
    public:
        LinkedList() : head(nullptr){}
}