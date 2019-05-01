#include "linkedlist.h"
#include <list>
#include <fstream>
linkedlist::linkedlist() {
	head = NULL;
	

}

linkedlist::~linkedlist() {
	// RECURSIVE
}

int linkedlist::count() {
	// RECURSIVE
	returnData(head);
	if (head->next = nullptr) {
		return 0;
	}
	return 0;
}

void linkedlist::addToFront(int n) {

	node *temp = new node();
	temp->data = n;
	temp->next = NULL;
	head = temp;
}

double linkedlist::average() {
	// uses sum and count functions
	double aveNum;
	aveNum = sum() / count();
	return aveNum;

}

int linkedlist::sum() {
	// RECURSIVE
	
	returnData(head);
	if (head->next == nullptr) {
		return 0;
	}
	
	return 0;
}

void linkedlist::writeInorder(string & file) {
	
}

void linkedlist::writeReversed(string & file) {
	// RECURSIVE
}

int linkedlist::returnData(node *temp) {
	readData(temp);
	if (temp->next == nullptr) {
		return 0;
	}
		returnData(temp->next);
		return temp->data;
}

void linkedlist::readData(node *temp) {
	ifstream read("list.txt");
	
	int num;
	while (!read.eof()) {
		read >> num;
		addToFront(num);

	}
	read.close();

}
