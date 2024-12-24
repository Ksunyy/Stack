#include <iostream>

#include <vector>

template <class T>
class Stack {

private:
	int count;
	std::vector<T> data;

public:

	Stack(int n = 0, T val = T()) : count(n - 1) {
		if (n < 0) throw "wrong value";
		data = std::vector<T>(n, val);
	}



	void push(const T val) {
		data.push_back(val);
		count++;

	}

	void pop() {
		if (count <= 0) throw "Stack is empty";
		data.pop_back();
		count--;

	}

	T& top() {
		if (count < 0) throw "Stack is empty";
		return data[count];
	}

	size_t get_size() {
		if (count >= 0) return (count + 1);
		else return 0;
	}

	bool empty() {
		return (count == -1);
	}

};



