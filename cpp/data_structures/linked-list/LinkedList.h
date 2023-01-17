#ifndef CPP_LINKEDLIST_H
#define CPP_LINKEDLIST_H
#include <iostream>


class Node {
public:
    int data;
    Node *next;

    Node () : next {nullptr}, data {} {};
};

class LinkedList {

private:
    Node *head;

public:
    LinkedList();

    Node *get_head();
    bool is_empty();
    void insert_at_head(int);
    void insert_at_tail(int);
    bool search(int);
    void delete_head();
    void delete_node(int);
};


#endif //CPP_LINKEDLIST_H
