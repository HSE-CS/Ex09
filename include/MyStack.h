#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template <typename T>

class MyStack 
{
private:
	unsigned int size;
	unsigned int head = 0;
	T* value;

public:
	explicit MyStack(unsigned int new_size) 
	{
		size = new_size;
		value = new T[size];
	}

	 MyStack(const MyStack& stack) 
	 {
        size = stack.size;
        data = new T[size];
        for (int i = 0; i < size; ++i) 
		{
            data[i] = stack.data[i];
        }
        head = stack.head;
    }

	~MyStack() 
	{
		delete value;
	}

	T get() const 
	{
		return value[head - 1];
	}

	T pop() 
	{
		head--;
		return value[head];
	}

	void push(T num)
	{
		value[head] = num;
		head++;
	}

	bool isFull() const 
	{
		if (head == size)
			return true;
		else
			return false;
	}

	bool isEmpty() const 
	{
		if (head == 0)
			return true;
		else
			return false;
	}
};

#endif
