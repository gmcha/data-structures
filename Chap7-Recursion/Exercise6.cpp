// Chap7 RevPrint.cpp ����
// Chap5 LList Unsorted���� ����

#include <iostream>
using namespace std;

template <class ItemType>
void PrintList(NodeType<ItemType>* listPtr) {
	if (listPtr != NULL) {
		cout << listPtr->info << endl;
		PrintList(listPtr->next);
	}
}