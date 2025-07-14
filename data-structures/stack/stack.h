typedef int type_item;
const int max_itens = 100;

class stack
{
private:
    int size;
    type_item *estructure;

public:
    stack();
    ~stack();
    bool is_full();
    bool is_empty();
    void insert(type_item item);
    type_item remove();
    int current_quantity();
    void print();
};