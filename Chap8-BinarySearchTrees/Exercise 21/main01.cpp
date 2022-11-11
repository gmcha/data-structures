#include <iostream>
#include <fstream>
#include "TreeType.h"
using namespace std;

int main() {
	TreeType case1;
	TreeType case2;
	TreeNode* ptr1;
	TreeNode* answer;
	ofstream fileStream;

	/*Recursive version*/
	// case 1
	/*case1.InsertItem('b');
	case1.InsertItem('a');
	case1.InsertItem('c');
	case1.InsertItem('d');

	fileStream.open("case1-1.txt");
	case1.Print(fileStream);

	case1.CheckPTS_Recur();*/

	// case 2
	/*case2.InsertItem('c');
	case2.InsertItem('a');
	case2.InsertItem('b');
	case2.InsertItem('d');
	case2.InsertItem('e');

	fileStream.open("case1-2.txt");
	case2.Print(fileStream);

	case2.CheckPTS_Recur();
	
	fileStream.close();*/

	/*Nonecursive version*/
	// case 1
	/*case1.InsertItem('b');
	case1.InsertItem('a');
	case1.InsertItem('c');
	case1.InsertItem('d');

	fileStream.open("case2-1.txt");
	case1.Print(fileStream);

	case1.CheckPTS_NonRecur();*/

	// case 2
	case2.InsertItem('c');
	case2.InsertItem('a');
	case2.InsertItem('b');
	case2.InsertItem('d');
	case2.InsertItem('e');

	fileStream.open("case2-2.txt");
	case2.Print(fileStream);

	case2.CheckPTS_NonRecur();

	fileStream.close();

}