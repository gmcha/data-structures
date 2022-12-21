#include "ItemType.h"

class UnsortedType{
    public:
        UnsortedType(); // constructor
        bool IsFull() const;
        int LengthIs() const;
        void RetrieveItem(ItemType& item, bool& found);
        // Function: Retrieves list element whose key matches item's key (if present)
        void InsertItem(ItemType item);
        void DeleteItem(ItemType item);
        // Function: Deletes the element whose key matches item's key
        void ResetList();
        void GetNextItem(ItemType& item);
    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;
};