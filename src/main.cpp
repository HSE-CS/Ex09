#include "MyStack.h"

int main() {
	MyStack<int> stack(10);
	for (int i = 0; i < 10; i++) {
		int value = std::rand() % 10;
		std::cout << "Push " << value << std::endl;
		stack.push(value);
	}
	std::cout << std::endl << "Stack content: ";
	while (!stack.isEmpty()) {
		std::cout << stack.get() << " ";
		stack.pop();
	}
	std::cout << std::endl;
}