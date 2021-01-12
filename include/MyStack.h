#include <iostream>


template <class T>
class MyStack{
private:
    int size = 0;
    int current = 0;
    T * mass;

public:
    explicit MyStack(int s = 10){
        size = s;
        mass = new T[size];
    }
    MyStack(const MyStack &other){//конструктор копирования
        this->size = other->size;
        this->mass = new T[other->size];
        for (int i = 0; i < other->size; i++) {
            this->mass[i] = other->mass[i];
        }
    }
    ~MyStack(){
        size = 0;
        current = 0;
        delete[] mass;

    }
    T get() const{
        if (!isEmpty()) {
            return mass[0];
        }
        else{
            throw "The stack is empty";
        }
    }
    T pop(){
        T * mass2;
        mass2= new T[size-1];
        T output = mass[0];
        if(current >=1)
            for (int i = 1; i <= current; i++) {
                mass2[i-1] = mass[i];
            }
        delete[] mass;
        mass = mass2;
        current--;

        return output;
    }
    void push(T a){
        if (!isFull()) {
            mass[current] = a;
            current++;
        } else {
            throw "It is impossible";
        }
    }
    [[nodiscard]] bool isFull() const{
        if (current == size)
            return true;
        return false;
    }
    [[nodiscard]] bool isEmpty() const{
        if (current == 0)
            return true;
        return false;
    }
};

