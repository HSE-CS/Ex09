#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template <typename T>
class MyStack{
public:
	MyStack(int stack_capacity) : size(0), capacity(stack_capacity), arr(new T[stack_capacity]){}
	MyStack(MyStack &another) : size(another.size), capacity(another.capacity), arr(new T[another.capacity]){
		for(int i = 0; i < size; i++){
			arr[i] = another.arr[i];
		}
	}
	T get() const{
		return arr[size - 1];
	}
	T pop(){
		T head = get();
		size -= 1;
		return head;
	}
	void push(T elem){
		if(isFull()){
			T *old_arr = arr;
			arr = new T[2 * capacity];
			for(int i = 0; i < size; i++){
				arr[i] = old_arr[i];
			}
			delete[] old_arr;
		}
		arr[size] = elem;
		size += 1;
	}
	bool isFull() const{
		return size == capacity;
	}
	bool isEmpty() const{
		return size == 0;
	}
	~MyStack(){
		delete[] arr;
	}
private:
	int size;
	int capacity;
	T *arr;
};

#endif /* INCLUDE_MYSTACK_H_ */
