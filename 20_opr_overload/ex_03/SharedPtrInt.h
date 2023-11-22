class SharedPtrInt
{
public:
    SharedPtrInt(int value);
    SharedPtrInt(const SharedPtrInt& other);
    ~SharedPtrInt();

    int& operator*() const;
    SharedPtrInt& operator=(const SharedPtrInt& other);
    int GetReffCount();

private:
    int* ptr_;
    int* count_;
};