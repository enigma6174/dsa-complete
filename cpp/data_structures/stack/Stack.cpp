#include <cassert>
#include "Stack.h"

Stack::Stack(int size) {
    capacity = size;
    buffer = new int[size];
    assert(buffer != nullptr);
    count = 0;
}

bool Stack::is_empty() const {
    return count == 0;
}

int Stack::get_top() {
    return (count == 0 ? -1 : buffer[count - 1]);
}

int Stack::size() const {
    return count;
}

void Stack::push(int value) {
    if (count >= capacity) {
        std::cout << "[ERR] STACK_FULL" << std::endl;
        return;
    }
    buffer[count++] = value;
}

int Stack::pop() {
    if (is_empty()) {
        std::cout << "[ERR] STACK_EMPTY" << std::endl;
        return -1;
    }
    return buffer[--count];
}