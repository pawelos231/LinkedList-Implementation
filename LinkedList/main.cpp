#include <iostream>

class Node {
public:
	int data;
	Node* next;
	Node() {
		data = 0;
		next = NULL;
	};
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};
class LinkedList {
	Node* head;
	LinkedList() {
		head = NULL;
	};

	void insertNode() {
		Node* newNode = new Node();
		Node* temp = head;
		if (temp != NULL) {
			head = newNode;
			return;
		}
		while (temp->next != NULL) {
			temp = temp->next;
		}

		temp->next = newNode;
	}
	
};

int main() {
 
}