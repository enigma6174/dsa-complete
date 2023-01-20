#include "Queue.h"
#include <random>
#include <iostream>

using namespace std;


void display(Queue);

int main() {

    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> intDistribution(1, 100);

    Queue q;

    cout << "queue initialized..." << endl;
    cout << endl;

    display(q);

    cout << "enqueue() x 5 random elements...\n" << endl;
    for (int i=0; i<5; i++) q.enqueue(intDistribution(mt));
    display(q);

    cout << "clearing the queue...\n" << endl;
    while (!q.is_empty())
        cout << "dequeue(): " << q.dequeue() << endl;
    cout << endl;
    display(q);

    for (int i=0; i<3; i++)
        cout << "dequeue(): " << q.dequeue() << endl;
    cout << endl;
    display(q);

    cout << "enqueue() x 3 random elements...\n" << endl;
    for (int i=0; i<3; i++) q.enqueue(intDistribution(mt));
    display(q);

    cout << "clearing the queue...\n" << endl;
    while (!q.is_empty())
        cout << "dequeue(): " << q.dequeue() << endl;
    cout << endl;
    display(q);

    return 0;
}

void display(Queue queue) {
    cout << boolalpha;
    cout << "queue_size: " << queue.get_size() << endl;
    cout << "queue_empty? " << queue.is_empty() << endl;
    cout << "queue(front): " << queue.get_front() << endl;
    cout << "queue(tail): " << queue.get_tail() << endl;
    cout << endl;
}