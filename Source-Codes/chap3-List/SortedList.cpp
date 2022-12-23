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
    bool moreToSearch;
    int location = 0;

    moreToSearch = (location < length);
    while(moreToSearch){
        switch(item.ComparedTo(info[location])){
            case LESS: 
                moreToSearch = false;
                break;
            case GREATER:
                location++;
                moreToSearch = (location < length);
                break;
        }
    }
    for(int index = length; index > location; index--)
        info[index] = info[index - 1];
    info[location] = item;
    length++;
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
