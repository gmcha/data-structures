#include "ItemType.h"

class SortedType{
    public:
        SortedType();
        bool IsFull() const;
        int LengthIs() const;
        void InsertItem(ItemType item);
        void DeleteItem(ItemType item);
        void RetrieveItem(ItemType& item, bool& found); // binary search
        void ResetList();
        void GetNextItem(ItemType& item);
    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;
};