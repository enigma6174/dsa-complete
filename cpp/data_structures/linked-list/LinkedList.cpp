#include "LinkedList.h"


LinkedList::LinkedList() : head {nullptr} {};

Node * LinkedList::get_head() {
    return head;
}

bool LinkedList::is_empty() {
    return head == nullptr;
}

void LinkedList::insert_at_head(int value) {
    Node *node = new Node();
    node->data = value;
    node->next = head;
    head = node;
}

void LinkedList::insert_at_tail(int value) {
    Node *node = new Node();
    node->data = value;

    if (head == nullptr) {
        head = node;
        return;
    }

    Node *current = head;
    while (current->next != nullptr) current = current->next;
    current->next = node;
}

bool LinkedList::search(int key) {
    if (is_empty()) return false;

    Node *current = head;
    while (current != nullptr) {
        if (current->data == key) return true;
        current = current->next;
    }
    return false;
}

void LinkedList::delete_head() {
    if (is_empty()) return;
    Node *current = head;
    head = head->next;
    delete current;
}

void LinkedList::delete_node(int key) {
    if (is_empty()) return;

    if (head->data == key) {
        delete_head();
        return;
    }

    Node *current = head;
    while (current->next != nullptr && current->next->data != key)
        current = current->next;
    if (current->next == nullptr) return;

    Node *temp = current->next;
    current->next = temp->next;
    delete temp;
}