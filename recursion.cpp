#include <iostream>

using namespace std;

int add(int n)
{
    if (n == 0)
        return 0;
    return n + add(n - 1);
}

int main(int argc, char const *argv[])
{
    int n = 10;
    cout << "Sum : " << add(n);
    return 0;
}
