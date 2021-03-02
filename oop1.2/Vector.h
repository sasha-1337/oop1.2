#pragma once
class Vector
{
private:
    int* a;
    int i{};
public:
    int GetI() const { return i; }
    void SetI(int value);

    void Read(int size);
    void Display();
    bool Init(int N);
    int Max();
    int Min();
    void SortHigh();
    void SortLow();

    Vector(int i)
    {
        a = new int[i];
        for (int n = 0; n < i; n++)
        {
            a[n] = 100;
        }
    }
    ~Vector() { delete[]a; }
};

