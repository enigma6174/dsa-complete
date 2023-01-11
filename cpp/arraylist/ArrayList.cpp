#include "ArrayList.h"

ArrayList::ArrayList(int size) {
    array = new int[size];
    num_elements = 0;
    capacity = size;
}

void ArrayList::insert(int value) {
    if (num_elements < capacity) {
        array[num_elements] = value;
        num_elements++;
    }
    else {
        resize();
        array[num_elements] = value;
        num_elements++;
    }
}

int ArrayList::get_at(int index) {
    return array[index];
}

int ArrayList::length() {
    return num_elements;
}

const int* ArrayList::get() {
    return array;
}

void ArrayList::resize() {
    // create a new temporary storage area in heap with double the previous size
    int *buffer = new int[capacity * 2];
    capacity *= 2;

    // copy elements from previous heap allocation to new allocation
    for (int i=0; i < num_elements; i++) {
        buffer[i] = array[i];
    }

    // delete the original allocation and point to new
    delete [] array;
    array = buffer;
}