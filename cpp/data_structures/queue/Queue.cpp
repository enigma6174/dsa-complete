#include "Queue.h"

Queue::Queue() : head {nullptr}, tail {nullptr}, size {0} {};

void Queue::enqueue(int value) {
    if (size == 0) {
        add_node(value);
        return;
    }
    Node *node = new Node();
    node->data = value;

    tail->next = node;
    node->prev = tail;
    tail = tail->next;

    ++size;
}

int Queue::dequeue() {
    if (size == 0) return -1;
    if (head == tail) return delete_node();

    Node *current = head;
    head = head->next;
    int value = current->data;
    delete current;
    --size;
    return value;
}

bool Queue::is_empty() const {
    return size == 0;
}

int Queue::get_size() const {
    return size;
}

int Queue::get_front() {
    if (size == 0) return -1;
    return head->data;
}

int Queue::get_tail() {
    if (size == 0) return -1;
    return tail->data;
}

void Queue::add_node(int value) {
    Node *node = new Node();
    node->data = value;
    head = node;
    tail = node;
    ++size;
}

int Queue::delete_node() {
    Node *current = head;
    int value = current->data;
    head = nullptr;
    tail = nullptr;
    delete current;
    --size;
    return value;
}