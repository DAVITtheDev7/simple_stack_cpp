#include <iostream>
#define object int
using namespace std;

struct Node {
public:
	Node* next;
	object value;

	Node(object k = 0) {
		next = 0;
		value = k;
	}
};


class Stack {

private:
	Node* Top;
	int k;
public:
	Stack() {
		k = 0;
		Top = 0;
	}

	int count() {
		return k;
	}


	Node* getTop() {
		return Top;
	}

	void getStack() {
		Node* x = Top;

		while (x != 0) {
			cout << x->value << " ";
			x = x->next;
		}
	}

	void push(Node* a) {
		if (a != 0) {
			a->next = Top;
			Top = a;
			k++;
		}
	}

	void pop() {
		if (Top != 0) {
			Node* temp = Top->next;
			Top->next = 0;
			Top = temp;
		}
	}


};



int main(int argc, char** argv) {

	Node* a = new Node(15);
	Node* b = new Node(25);
	Node* c = new Node(19);
	Node* d = new Node(45);

	Stack s;
	s.push(a);
	s.push(b);
	s.push(c);
	s.push(d);


	s.getStack();
	cout << endl << s.getTop()->value << endl;
	cout << s.count() << endl;

	s.pop();

	s.getStack();

	return 0;
}


