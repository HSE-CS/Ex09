// Copyright 2020 Konina Tatiana
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
template <typename T>
class MyStack
{
private:
  T* stackPtr; // ��������� �� ����
  int size; // ������ �����
  T top; // ������� �����
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
      return false; // ���� �����
    top++;
    stackPtr[top] = value; // �������� ������� � ����
    return true;
  }// ��������� ������� � ����
  bool pop() {
    if (top == NULL)
      return false; // ���� ����

    stackPtr[top] = 0; // ������� ������� �� �����
    top--;

    return true; // �������� ���������� ��������
  }// ������� �� ����� �������
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



