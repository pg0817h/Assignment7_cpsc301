#include "linkedlist.h"
#include <list>
#include <fstream>
#include <iostream>
linkedlist::linkedlist() {
	head = NULL;


}

linkedlist::~linkedlist() {
	// RECURSIVE
	delete head;
}

int linkedlist::count() {
	// RECURSIVE
node *temp1 = head;
return count(temp1);
}
int linkedlist::count(node *temp){
	if(temp==NULL){
		return 0;
	}

	return count(temp->next)+1;
}
void linkedlist::addToFront(int n) {
	node *temp = new node();
	temp->data = n;
	temp->next = NULL;
	node* current;
if(head == NULL || head->data >= temp->data ){
	temp->next = head;
	head = temp;
}
else {
	current = head;
	while(current->next!=NULL && current->next->data < temp->data){
		current = current->next;
	}
	temp->next = current->next;
	current->next = temp;
}

}

double linkedlist::average() {
	// uses sum and count functions
	double aveNum;
	aveNum = sum() / count();
	return aveNum;

}

int linkedlist::sum() {
	// RECURSIVE
node *head1 = head;
	return sum(head1);
}

int linkedlist::sum(node* node){
  if(node == NULL){
    return 0;
  }




  return node->data+sum(node->next);
}

void linkedlist::writeInorder(string & file) {

}

void linkedlist::writeReversed(node *head1) {
	// RECURSIVE
if(head1 == NULL){
		return;
	}

writeReversed(head1->next);
cout << head1->data << " ";

}
void linkedlist::writeReversed(){
node* head1 = head;
writeReversed(head1);
}


void linkedlist::print(){
	node *head2 = head;
	while(head2 !=NULL){
		cout << head2->data << " ";
		head2 = head2->next;
	}
}

int linkedlist::FindSmallest(node *temp){
if(temp ->next == NULL){
	return temp->data;
}

if(temp->data < FindSmallest(temp->next)){

	return temp->data;
}


return FindSmallest(temp->next);
}

int linkedlist::FindSmallest(){
	node *head1 = head;

return FindSmallest(head1);
}
