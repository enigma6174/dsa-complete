#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList(): head {nullptr}, tail {nullptr} {};

Node * DoublyLinkedList::get_head() {
    return head;
}

Node * DoublyLinkedList::get_tail() {
    return tail;
}

bool DoublyLinkedList::is_empty() {
    return head == nullptr;
}

void DoublyLinkedList::insert_at_head(int value) {
    Node *node = new Node();
    node->data = value;

    if (is_empty()) {
        head = node;
        tail = node;
        return;
    }

    node->next = head;
    head = node;
}

void DoublyLinkedList::insert_at_tail(int value) {
    Node *node = new Node();
    node->data = value;

    if (is_empty()) {
        head = node;
        tail = node;
        return;
    }

    tail->next = node;
    node->prev = tail;
    tail = tail->next;
}

void DoublyLinkedList::insert(int key, int value) {
    if (!search(key)) return;

    Node *node = new Node();
    node->data = value;

    Node *current = head;
    while (current->data != key) current = current->next;

    if (current->next == nullptr) {
        insert_at_tail(value);
        return;
    }

    Node *temp = current->next;
    node->next = temp;
    current->next = node;
    node->prev = current;
    temp->prev = node;
}

bool DoublyLinkedList::search(int key) {
    if (is_empty()) return false;

    if (head->data == key) return true;
    if (tail->data == key) return true;

    Node *current = head;
    while (current != nullptr) {
        if (current->data == key) return true;
        current = current->next;
    }
    return false;
}

void DoublyLinkedList::delete_single_node() {
    Node *current = head;
    head = nullptr;
    tail = nullptr;
    delete current;
}

void DoublyLinkedList::delete_head() {
    if (is_empty()) return;
    if (head->next == nullptr) {
        delete_single_node();
        return;
    }
    Node *current = head;
    head = head->next;
    delete current;
}

void DoublyLinkedList::delete_tail() {
    if (is_empty()) return;
    if (head->next == nullptr) {
        delete_single_node();
        return;
    }
    Node *current = tail;
    tail = tail->prev;
    tail->next = nullptr;
    delete current;
}

void DoublyLinkedList::delete_node(int key) {
    if (is_empty()) return;
    if (!search(key)) return;

    if (head->data == key) {
        delete_head();
        return;
    }
    if (tail->data == key) {
        delete_tail();
        return;
    }

    Node *current = head;
    while (current->data != key) current = current->next;

    current->prev->next = current->next;
    current->next->prev = current->prev;
    current->next = nullptr;
    current->prev = nullptr;
    delete current;
}

