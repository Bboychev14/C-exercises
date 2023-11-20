template <typename T>
class ForwardList
{
    struct Node
    {
        explicit Node(const T& data, Node* nex = nullptr)
            : data_(data), next_(next) {}
        explicit Node(T&& data, Node* next = nullptr)
            : data_(std::move(data)), next_(next) {}

        T data_;
        Node* next_;
    };
    Node* head_ = nullptr;
public:
    //Ex 7
    class iterator
    {
    public:
        using value_type = T;
        using difference_type = std::ptrdiff_t;
        using reference = T &;
        using pointer = T *;
        using iterator_category = std::forward_iterator_tag;

        iterator(Node *node) : node_(node) {}

        reference operator*() const { return node_->data_; }
        pointer operator->() { return &(node_->data_); }

        iterator &operator++()
        {
            if (node_)
                node_ = node_->next_;
            return *this;
        }

        iterator operator++(int)
        {
            iterator temp = *this;
            ++(*this);
            return temp;
        }

        bool operator==(const iterator &other) const { return node_ == other.node_; }
        bool operator!=(const iterator &other) const { return !(*this == other); }

    private:
        Node *node_;
    };
    
    using value_type = T;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;
    using reference = T&;
    using pointer = T*;
    using const_pointer = const T*;

    ForwardList() = default;
    void push_back(const T& val);
    void push_back(T&& val);
    void push_front(const T& val);
    void push_front(T&& val);
    Node* lastNode() const;
    bool empty();
    void clear();

};

template <typename T>
void ForwardList<T>::clear()
{
    Node* current = head_;
    while (current != nullptr)
    {
        Node* nodeToDelete = current;
        current = current->next_;
        delete nodeToDelete;
    }
    head_ = nullptr;
}

template <typename T>
bool ForwardList<T>::empty()
{
    return head_ == nullptr;
}

template <typename T>
Node* ForwardList<T>::lastNode() const
{
    Node* result = head_;
    while (result && result->next_)
    {
        result = result->next_;
    }
}

template <typename T>
void ForwardList<T>::push_front(const T& val)
{
    head_ = new Node(val, head_);
}

template <typename T>
void ForwardList<T>::push_front(T&& val)
{
    head_ = new Node(std::move(val), head_);
}

template <typename T>
void ForwardList<T>::push_back(const T& val)
{
    Node* newNode = new Node(val);
    if (head_)
    {
        lastNode()->newxt_ = newNode;
    }
    else
    {
        head_ = newNode;
    }
}

template <typename T>
void ForwardList<T>::push_back(T&& val)
{
    Node* newNode = new Node(std::move(val));
    if (head_)
    {
        lastNode()->next_ = newNode;
    }
    else
    {
        head_ = newNode;
    }
}