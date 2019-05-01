#include <iostream>
#include <string>
#include <cctype>
#include "linkedlist.cpp"
#include <fstream>
#include <list>
#include <iterator>
using namespace std;

void readFile(linkedlist & list, string & file) {
	ifstream read(file);
	int num = 0;


	 std::list<int> mylist;

	while (!read.eof()) {
		read >> num;
		list.addToFront(num);


	}
	mylist.sort(list);

}

int main() {
	linkedlist l;
	string fileName = "list.txt";
	readFile(l, fileName);


	system("pause");
}
