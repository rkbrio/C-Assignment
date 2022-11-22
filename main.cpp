#include <iostream>
using namespace std;

template <class T1, class T2>

class A
{

    public:
    display(T1 x, T2 y)
    {
        cout << x << ", " << y << endl;
        return 0;
    }
};

int main() {
    A<int,float> a;
    A<float,double> b;
    a.display(4,7.52);
    b.display(8.55,9.2);
    return 0;
}
