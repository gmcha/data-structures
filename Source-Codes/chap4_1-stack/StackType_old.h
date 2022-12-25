// nongeneric 
#include "ItemType.h"

class FullStack{};

class EmptyStack{};

class StackType{
    public:
        StackType();
        bool IsFull() const;
        bool IsEmpty() const;
        void Push(ItemType item);
        void Pop();
        ItemType Top();
    private:
        int top;
        ItemType items[MAX_ITEMS];
};