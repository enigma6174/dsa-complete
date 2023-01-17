#include <iostream>
#include <random>
#include "LinkedList.h"

using namespace std;


void print_list(Node *);

int main() {
    LinkedList list;

    cout << boolalpha;
    cout << "list empty? " << list.is_empty() << endl;

    for (int i=100; i<105; i++) list.insert_at_tail(i);

    cout << "\ninserting 5 elements at tail: " << endl;
    print_list(list.get_head());

    for (int i=0; i<10; i++)  list.insert_at_head(i);

    cout << "\ninserting 10 elements at head: " << endl;
    print_list(list.get_head());

    for (int i=10; i<15; i++) list.insert_at_tail(i);

    cout << "\ninserting 5 elements at tail: " << endl;
    print_list(list.get_head());

    cout << "\n10 present? " << list.search(10) << endl;
    cout << "3 present? " << list.search(3) << endl;
    cout << "20 present? " << list.search(20) << endl;
    cout << "0 present? " << list.search(0) << endl;
    cout << "15 present? " << list.search(15) << endl;
    cout << "-1 present? " << list.search(-1) << endl;
    cout << "9 present? " << list.search(5) << endl;
    cout << "14 present? " << list.search(5) << endl;

    list.delete_node(0);
    list.delete_node(10);
    list.delete_node(14);
    list.delete_node(-1);
    list.delete_node(0);
    list.delete_node(13);
    list.delete_node(4);
    list.delete_node(12);

    cout << "\ndeleted nodes (0, 10, 14, -1, 0, 13, 4, 12): " << endl;
    print_list(list.get_head());

    cout << "\ndeleting all nodes in the list:\n" << endl;

    Node *current = list.get_head();
    while (current != nullptr) {
        list.delete_head();
        print_list(list.get_head());
        current = list.get_head();
    }
    cout << "\nlist empty? " << list.is_empty() << endl;

    // generate random number
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 20);

    for (int i=0; i<7; i++) list.insert_at_tail(dist(mt));

    cout << "\ninserting 7 random numbers at tail: " << endl;
    print_list(list.get_head());

    for (int i=0; i<5; i++) list.insert_at_head(dist(mt));

    cout << "\ninserting 5 random numbers at head: " << endl;
    print_list(list.get_head());

    return 0;
}

void print_list(Node *temp) {
    while (temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "null" << endl;
}

