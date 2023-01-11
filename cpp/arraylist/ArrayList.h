#ifndef CPP_ARRAYLIST_H
#define CPP_ARRAYLIST_H

class ArrayList {
private:
    int *array;
    int num_elements;
    int capacity;

    // private methods - not accessible to user
    void resize();

public:
    explicit ArrayList(int); // constructor

    void insert(int);
    int get_at(int);
    int length();
    const int *get();

};

#endif //CPP_ARRAYLIST_H
