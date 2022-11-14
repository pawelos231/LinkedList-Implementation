#include <iostream>
#define LOG(x){std::cout<<x<<std::endl;}
#include "LinkedHeader.h"


int main() {
	LinkedList list;
	for (int i = 1; i <= 6; i++) {
		list.insertNode(i);
	}

	LOG("elements in list:")
	list.LogAllNodes();
	list.deleteNode(2);
	LOG("elements in list:")
	list.LogAllNodes();
	list.InsertNodeAtGivenPoint(3, 10);

	LOG("Elements in list:")
	list.LogAllNodes();

}