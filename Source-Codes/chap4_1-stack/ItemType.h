const int MAX_ITEMS = 5;
enum RelationType{LESS, EQUAL, GREATER};

class ItemType{
    public:
        RelationType ComparedTo(ItemType otherItem) const;
        void Print() const;
        void Initialize(int number);
    private:
        int value; // data type is changed as the type wanted
};