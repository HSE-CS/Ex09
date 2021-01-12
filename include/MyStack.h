// Copyright 2020 Konina Tatiana
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
template <typename T>
class MyStack
{
private:
  T* stackPtr; // указатель на стек
  int size; // размер стека
  T top; // вершина стека
public:
  MyStack(int size) :
    top(NULL), size(size) {
    stackPtr = new T[size];
  }
  T get()const {
    if (top)
      return stackPtr[top - 1];
    return NULL;
  }
  bool push(const T value) {
    if (top == size)
      return false; // стек полон
    top++;
    stackPtr[top] = value; // помещаем элемент в стек
    return true;
  }// поместить элемент в стек
  bool pop() {
    if (top == NULL)
      return false; // стек пуст

    stackPtr[top] = 0; // удаляем элемент из стека
    top--;

    return true; // успешное выполнение операции
  }// удалить из стека элемент
  bool isFull() const {
    return top == size;
  };
  bool isEmpty() const {
    return top == NULL;
  };
  void printStack() {
    for (int ix = size - 1; ix >= 0; ix--)
      std::cout << "|"  << stackPtr[ix] << std::endl;
  };
};

#endif  // INCLUDE_MYSTACK_H_



