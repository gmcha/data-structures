#include "SortedList.h"

SortedType::SortedType(){
    length = 0;
}

bool SortedType::IsFull() const{
    return (length == MAX_ITEMS);
}

int SortedType::LengthIs() const{
    return length;
}

void SortedType::InsertItem(ItemType item){

}

void SortedType::DeleteItem(ItemType item){

}

void SortedType::RetrieveItem(ItemType& item, bool& found){

}

void SortedType::ResetList(){
    currentPos = -1;
}

void SortedType::GetNextItem(ItemType& item){
    currentPos++;
    item = info[currentPos];
}
