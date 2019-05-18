#include <iostream>
#include <string>

#include "linkedlist.cpp"
#include <fstream>
#include <list>
#include <iterator>
using namespace std;
list<int> myList;





void readFile(linkedlist & list, string & file) {
	ifstream read;

	read.open(file);
	int num = 0;



if(read.is_open()){
	read >>num;
	while (!read.eof()) {

		//cout << num << " " ;

		list.addToFront(num);
		read >> num;
	}
}

read.close();


}

void printList(list <int> aList){
  list<int>::iterator it;
  for(it = aList.begin(); it != aList.end(); it++){
    cout << *it << " ";

  }
  cout << '\n';

}
int main() {
	linkedlist l;
	string fileName = "list.txt";
	readFile(l, fileName);
	l.print();
	cout << endl;
	cout << endl;
cout << l.FindSmallest();

cout << endl;
l.print();
	return 0;
}
