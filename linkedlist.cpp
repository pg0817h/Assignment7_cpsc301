#include "linkedlist.h"
#include <list>
#include <fstream>
linkedlist::linkedlist() {
	head = NULL;
	node *temp = new node();


}

linkedlist::~linkedlist() {
	// RECURSIVE
}

int linkedlist::count() {
	// RECURSIVE
	int num = 0;
	node *temp = new node();
	ifstream read("list.txt");
	while (!read.eof()) {
		read >> num;
		addToFront(num);
	}
	int countN = 0;

	if (temp->next == nullptr) {
		return 0;
	}
	countN++;
	count();

	return countN;

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
	int num = 0;
	node *temp = new node();
	ifstream read("list.txt");
	while (!read.eof()) {
		read >> num;
		addToFront(num);
	}
	int total = 0;


	if (temp->next =nullptr) {
		return 0;
	}
	total += temp->data;
	temp->next;


	return sum();

}

void linkedlist::writeInorder(string & file) {

}

void linkedlist::writeReversed(string & file) {
	// RECURSIVE
}
