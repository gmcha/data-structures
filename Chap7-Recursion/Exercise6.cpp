// Chap7 RevPrint.cpp 참고
// Chap5 LList Unsorted으로 가정

#include <iostream>
using namespace std;

template <class ItemType>
void PrintList(NodeType<ItemType>* listPtr) {
	if (listPtr != NULL) {
		cout << listPtr->info << endl;
		PrintList(listPtr->next);
	}
}