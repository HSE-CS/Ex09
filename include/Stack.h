// Copyright 2021 Краюшкина Екатерина
#ifndef INCLUDE_STACK_H_
#define INCLUDE_STACK_H_

#include <iostream>
#include <string>
#include <cassert>

template<class S>
class Stack {
 public:
  explicit Stack(int size);
  ~Stack();  
  Stack(const Stack<S>&);
  int takeStakeSize() const; 
  int takeUpper() const;  
  S* takePtr() const; 
  void push(const S&);  
  void pop();  
  void printStack();
  S isEmpty() const; 
  S isFull() const;
  S take() const;
 private:
  int size;
  int upper;
  S* store;
};

template<class S>
Stack<S>::Stack(int _size) :
  size(_size), upper(0) {
  store = new S[size]; }

template<class S>
Stack<S>::Stack(const Stack <S>& otherSt) :
  size(otherSt.takeStackSize()) {
  store = new S[size];
  upper = otherSt.takeUpper;
  for (int ix = 0; ix < upper; ix++)
    store[ix] = otherSt.getPtr()[ix]; }

template<class S>
Stack<S>::~Stack() {
  delete[] store; }

template <class S>
int Stack<S>::takeStackSize() const {
  return size; }

template <class S>
int Stack<S>::takeUpper() const {
  return upper; }

template <class S>
S* Stack<S>::takePtr() const {
  return store; }

template <typename S>
void Stack<S>::push(const S& value) {
  assert(upper < size);
  store[upper++] = value; }

template <typename S>
void Stack<S>::pop() {
  assert(upper > 0);
  store[--upper]; }

template <typename S>
void Stack<S>::printStack() {
  for (int ix = upper - 1; ix >= 0; ix--)
    std:: cout << store[ix] << " "; }

template <typename S>
S Stack<S>::isEmpty() const {
  if (upper == 0) return 1;
  return 0; }

template <typename S>
S Stack<S>::isFull() const {
  if (upper == size) return 1;
  return 0; }

template <typename S>
S Stack <S>::take() const {
  if (upper != 0)
    return store[upper - 1]; }

#endif  // INCLUDE_STACK_H_