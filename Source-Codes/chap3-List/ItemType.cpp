#include <iostream>
#include "ItemType.h"
using namespace std;

RelationType ItemType::ComparedTo(ItemType otherItem) const{
    if(value < otherItem.value)
        return LESS;
    else if (value > otherItem.value)
        return GREATER;
    else
        return EQUAL;
}

void ItemType::Print() const{
    cout << value << endl;
}

void ItemType::Initialize(int number){
    value = number;
}