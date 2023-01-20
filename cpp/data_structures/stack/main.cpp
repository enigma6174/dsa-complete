#include "Stack.h"
#include <random>
#include <iostream>


using namespace std;


void print(Stack);

int main() {

    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> intDistribution(100, 200);

    Stack stack {10};

    cout << "stack initialized!" << endl;
    cout << endl;

    print(stack);

    stack.push(12);
    stack.push(0);
    stack.push(19);
    stack.push(56);
    stack.push(91);
    stack.push(45);
    stack.push(134);
    stack.push(213);

    cout << "insert (12, 0, 19, 56, 91, 45, 134, 213)" << endl;
    cout << endl;

    print(stack);

    cout << "pop(): " << stack.pop() << endl;
    cout << "pop(): " << stack.pop() << endl;
    cout << "pop(): " << stack.pop() << endl;
    cout << endl;

    print(stack);

    while (!stack.is_empty()) stack.pop();
    print(stack);

    cout << "pushing 5 random values...\n" << endl;
    for (int i=0; i <5; i++)
        stack.push(intDistribution(mt));
    print(stack);

    cout << "emptying the stack...\n" << endl;
    while (!stack.is_empty())
        cout << "pop(): " << stack.pop() << endl;
    cout << endl;
    print(stack);

    cout << "pop(): " << stack.pop() << endl;
    cout << "pop(): " << stack.pop() << endl;
    cout << endl;

    print(stack);

    cout << "pushing 15 random values...\n" << endl;
    for (int i=0; i<15; i++)
        stack.push(intDistribution(mt));
    print(stack);

    return 0;
}

void print(Stack s) {
    cout << boolalpha;
    cout << "stack_size: " << s.size() << endl;
    cout << "current_top: " << s.get_top() << endl;
    cout << "stack_empty: " << s.is_empty() << endl;
    cout << endl;
}