typedef int type_item;
const int max_itens = 5;

class queue
{
private:
    int first_index = 0;
    int last_index = 0;
    int size;
    type_item *estructure;

public:
    queue();
    ~queue();
    bool is_full();
    bool is_empty();
    void insert(type_item item);
    int remove();
    void print();
};