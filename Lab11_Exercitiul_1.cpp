//Dumbrava Mihael
//Laborator 11

#include <iostream>
#include <vector>

using namespace std;

template<typename T>

class Stack
{
public:
	int size() const;

	bool isEmpty() const;

	const T& top() const
	{
		if (isEmpty()) throw "Stiva este goala \n"; //Am verificat daca stiva este goala
		return vect.back();
	}

	void push(const T& obj);

	void pop();

	vector <T> vect;
};

template<typename T> bool Stack<T>::isEmpty() const
{
	return (vect.empty());
}

template<typename T> void Stack<T>::push(const T& obj)
{
	vect.push_back(obj);
}

template<typename T> void Stack<T>::pop()
{
	if (isEmpty()) throw "Stiva este goala \n";
	vect.pop_back();
}

int main() {
	Stack <int> stiva;
	cout << "In stiva avem elementele: " << endl;
	for (int i = 1; i <= 10; i++)
        stiva.push(i);
		while (!stiva.isEmpty())
        {
			cout << stiva.top() << endl;
			stiva.pop();
		}

	return 0;
}
