#ifndef CPP_QUEUE_H
#define CPP_QUEUE_H

class Node {
public:
    int data;
    Node *next, *prev;

    Node() : next {nullptr}, prev {nullptr}, data {0} {};
};

class Queue {
private:
    int size;
    Node *head, *tail;

    void add_node(int);
    int delete_node();

public:
    Queue();
    void enqueue(int);
    int dequeue();
    [[nodiscard]] bool is_empty() const;
    [[nodiscard]] int get_size() const;
    int get_front();
    int get_tail();
};


#endif //CPP_QUEUE_H
