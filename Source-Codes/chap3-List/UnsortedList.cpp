#include "UnsortedList.h"

UnsortedType::UnsortedType(){
    length = 0;
}

bool UnsortedType::IsFull() const{
    return (length == MAX_ITEMS);
}

int UnsortedType::LengthIs() const{
    return length;
}

void UnsortedType::RetrieveItem(ItemType& item, bool& found){
    bool moreToSearch = true;
    int location = 0;

    found = false;
    if(!moreToSearch && !found){
        switch(info[location].ComparedTo(item)){
            case LESS:
            case GREATER:
                location++;
                moreToSearch = location < length;
                break;
            case EQUAL:
                found = true;
                item = info[location]; // code unneeded
                break;
            
        }
    }
}

void UnsortedType::InsertItem(ItemType item){
    info[length] = item;
    length++;
}

void UnsortedType::DeleteItem(ItemType item){
    int location = 0;
    while(item.ComparedTo(info[location]) != EQUAL)
        location++;
    
    info[location] = info[length - 1];
    length--;
}

void UnsortedType::ResetList(){
    currentPos = -1;
}

void UnsortedType::GetNextItem(ItemType& item){
    currentPos++;
    item = info[currentPos];
}

#include "UnsortedList.h"

UnsortedType::UnsortedType(){
    length = 0;
}

bool UnsortedType::IsFull() const{
    return (length == MAX_ITEMS);
}

int UnsortedType::LengthIs() const{
    return length;
}
void UnsortedType::RetrieveItem(ItemType& item, bool& found){
    bool moreToSearch;
    found = false;

    int location = 0;
    moreToSearch = location < length;
    while(!moreToSearch && !found){
        switch(info[location].ComparedTo(item)){
            case LESS:
            case GREATER:
                location++;
                moreToSearch = location < length;
                break;
            case EQUAL:
                found = true;
                break;
        }
    }
}

void UnsortedType::InsertItem(ItemType item){
    info[length] = item;
    length++;
}

void UnsortedType::DeleteItem(ItemType item){
    int location = 0;
    while(info[location].ComparedTo(item) != EQUAL){
        location++;
    }
    length--;
    info[location] = info[length];
}

void UnsortedType::ResetList(){
    currentPos = -1;
}

void UnsortedType::GetNextItem(ItemType& item){
    currentPos++;
    item = info[currentPos];
}