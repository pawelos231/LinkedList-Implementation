#define LOG(x){std::cout<<x<<std::endl;}
#include "LinkedHeader.h"

LinkedList::LinkedList() {
	head = NULL;
}

void LinkedList::insertNode(int data) {
	Node* newNode = new Node(data);
	Node* temp = head;

	if (head == NULL) {
		head = newNode;
		return;
	}

	while (temp != NULL && temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = newNode;
}


void LinkedList::InsertNodeAtGivenPoint(int PointToInsert, int data) {
	Node* newNode = new Node(data);
	Node* temp = head;
	Node* temp2 = NULL;
	int helperValue = 0;

	if (head == NULL) {
		head = newNode;
	}
	while (temp != NULL) {
		temp = temp->next;
		helperValue++;
	}
	if (helperValue < PointToInsert || PointToInsert < 0) {
		LOG("the given number is too large or too small number")
			return;
	}
	temp = head;

	for (int i = 0; i < PointToInsert - 1; i++) {
		temp2 = temp;
		temp = temp->next;
	}
	if (temp2 == NULL || temp2->next == NULL) {
		return;
	}
	temp2->next = newNode;
	newNode->next = temp;
}


void LinkedList::LogAllNodes() {
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


void LinkedList::deleteNode(int nodeToDelete) {
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
	if (LinkedListLen < nodeToDelete) {
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