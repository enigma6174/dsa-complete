#include <iostream>
#include <random>
#include "DoublyLinkedList.h"

using namespace std;


void print_list(Node *);

int main() {
    DoublyLinkedList dll;

    cout << boolalpha;
    cout << "empty? " << dll.is_empty() << endl;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> intDistribution(1, 20);

    for (int i=0; i<3; i++) dll.insert_at_tail(intDistribution(mt));

    cout << "\nempty? " << dll.is_empty() << endl;
    cout << "insert 3 random elements at tail" << endl;
    print_list(dll.get_head());

    for (int i=0; i<5; i++) dll.insert_at_head(i);

    cout << "\ninserting 5 sequential elements at head" << endl;
    print_list(dll.get_head());

    for (int i=200; i<205; i++) dll.insert_at_tail(i);

    cout << "\ninserting 5 sequential elements at tail" << endl;
    print_list(dll.get_head());

    Node *head = dll.get_head();
    Node *tail = dll.get_tail();

    cout << "\nhead->data " << head->data << endl;
    cout << "tail->data " << tail->data << endl;

    cout << "\n200 present? " << dll.search(200) << endl;
    cout << "5 present? " << dll.search(5) << endl;
    cout << "0 present? " << dll.search(0) << endl;
    cout << "4 present? " << dll.search(4) << endl;
    cout << "204 present? " << dll.search(204) << endl;
    cout << "345 present? " << dll.search(345) << endl;

    dll.insert(200, 13);
    dll.insert(2, 17);
    dll.insert(0, 37);
    dll.insert(204, 97);
    dll.insert(203, 61);
    dll.insert(4, 11);
    dll.insert(901, -101);
    dll.insert(37, 625);
    dll.insert(11, 121);
    dll.insert(97, 256);
    dll.insert(-101, 0);

    cout << "\ninsert sequence (200, 2, 0, 204, 203, 4, 901, 37, 11, 97, -101)" << endl;
    print_list(dll.get_head());

    head = dll.get_head();
    tail = dll.get_tail();

    cout << "\nhead->data " << head->data << endl;
    cout << "tail->data " << tail->data << endl;

    for (int i=0; i<5; i++) dll.delete_head();

    cout << "\ndelete 5 head elements" << endl;
    print_list(dll.get_head());

    for (int i=0; i<7; i++) dll.delete_tail();

    cout << "\ndelete 7 tail elements" << endl;
    print_list(dll.get_head());

    dll.delete_node(13);
    dll.delete_node(17);
    dll.delete_node(37);
    dll.delete_node(97);
    dll.delete_node(1000);
    dll.delete_node(626);
    dll.delete_node(61);
    dll.delete_node(1);

    cout << "\ndelete all prime elements" << endl;
    print_list(dll.get_head());

    head = dll.get_head();
    tail = dll.get_tail();

    cout << "\nhead->data " << head->data << endl;
    cout << "tail->data " << tail->data << endl;

    return 0;
}

void print_list(Node *node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "null" << endl;
}