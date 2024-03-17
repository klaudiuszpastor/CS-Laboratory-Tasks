#include <iostream>

void printVar (int x) {
    using std::cout;
    cout << x << std::endl;
}

int main() {
    using namespace std;
    int number;
    cin >> number;
    printVar(number);
    return 0;
}