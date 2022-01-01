#include <iostream>
using namespace std;
void ask1() {
    // In case1, I am getting my expected max and min. But in case2, i am not getting expected max and min. Why its happening like this?

    int n1=32, n2=45, mx, mn;
    // case1
    n1>n2 ? mx=n1 , mn=n2 : mx=n2, mn=n1;
    cout << "max = " << mx << " min= " << mn << endl;
    // case2
    n1<n2 ? mx=n2, mn=n1 : mx=n1, mn=n2;
    cout << "max = " << mx << " min= " << mn << endl;
}
int main() {
    ask1();
}
