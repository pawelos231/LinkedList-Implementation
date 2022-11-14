#pragma once
#include<iostream>
class LinkedList {
private:
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
	Node* head;
public:
	LinkedList();
	void insertNode(int data);
	void InsertNodeAtGivenPoint(int PointToInsert, int data);
	void LogAllNodes();
	void deleteNode(int nodeToDelete);

};