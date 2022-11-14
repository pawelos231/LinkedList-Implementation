#include <iostream>
#define LOG(x){std::cout<<x<<std::endl;}

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
public:
	Node* head;
	LinkedList() {
		head = NULL;
	};
	void insertNode(int data) {
		Node* newNode = new Node(data);
		Node* temp = head;

		if (head == NULL) {
			head = newNode;
			return;
		}
	
		while (temp!= NULL && temp->next != NULL) {
			temp = temp->next;
		}

		temp->next = newNode;
		
		
	}
	void InsertNodeAtGivenPoint(int PointToInsert) {
	
	}

	void LogAllNodes() {
		if (head == NULL) {
			LOG("empty list");
			return;
		}
		Node* temp = head;
		while (temp != NULL) {
			LOG(temp->data);
			temp = temp->next;
		}
	}
	void deleteNode(int nodeToDelete) {
		Node* temp = head;
		Node* temp2 = NULL;
		int LinkedListLen = 0;
		if (head == NULL) {
			LOG("empty list");
			return;
		}
		while (temp->next != NULL) {
			temp = temp->next;
			LinkedListLen++;
		}
		if (LinkedListLen < nodeToDelete){
			LOG("too large number");
			return;
		}

		temp = head;
		if (nodeToDelete == 1) {
			head = head->next;
			delete temp;
			return;
		}
		for (int i = 0; i < nodeToDelete; i++) {
			temp2 = temp;
			temp = temp->next;
		}
		if (temp2 == NULL || temp2->next == NULL) {
			return;
		}

		temp2->next = temp->next;
		delete temp;
		
	}
	
};

int main() {
	LinkedList list;
	for (int i = 1; i <= 6; i++) {
		list.insertNode(i);
	}
	LOG("elements in list:")
	list.LogAllNodes();
	list.deleteNode(2);

	LOG("Elements in list:")
	list.LogAllNodes();

}