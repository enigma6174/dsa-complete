#ifndef CPP_STACK_H
#define CPP_STACK_H
#include <iostream>

class Stack {
private:
    int * buffer;
    int capacity;
    int count;

public:
    explicit Stack(int);
    [[nodiscard]] bool is_empty() const;
    int get_top();
    void push(int);
    int pop();
    [[nodiscard]] int size() const;
};

#endif //CPP_STACK_H
