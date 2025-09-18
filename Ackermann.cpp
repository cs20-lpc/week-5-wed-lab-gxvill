#include <iostream>
using namespace std;

// Ackermann function definition
unsigned long long ackermann(unsigned int m, unsigned int n) {
 // TODO: Complete the code.

    if(m == 0){
        return n++;
    }
    else if(m > 0 && n == 0){
        return ackermann(m-1,1);
    }
    else if(m > 0 && n > 0){
        return ackermann(m - 1, ackermann(m,n-1));
    }

    return -1;
}

int main() {
    unsigned int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;

    cout << "Ackermann(" << m << ", " << n << ") = " 
         << ackermann(m, n) << endl;

    return 0;
}
