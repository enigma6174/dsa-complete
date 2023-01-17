#ifndef CPP_DOUBLYLINKEDLIST_H
#define CPP_DOUBLYLINKEDLIST_H
#include <iostream>


class Node {
public:
    int data;
    Node *next, *prev;

    Node() : next {nullptr}, prev {nullptr}, data {} {};
};


class DoublyLinkedList {

private:
    Node *head;
    Node *tail;

    void delete_single_node();

public:
    DoublyLinkedList();

    Node *get_head();
    Node *get_tail();
    bool is_empty();
    void insert_at_head(int);
    void insert_at_tail(int);
    void insert(int, int);
    bool search(int);
    void delete_head();
    void delete_tail();
    void delete_node(int);
};


#endif //CPP_DOUBLYLINKEDLIST_H
