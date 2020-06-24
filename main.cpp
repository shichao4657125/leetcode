#include "Solution202.h"
#include <chrono>
#include <unistd.h>

using namespace std;


int main() {
    Solution202 solution;
    int n =14567;

    auto start = chrono::steady_clock::now();

    solution.isHappy(n);

    auto end = chrono::steady_clock::now();

    cout<<chrono::duration_cast<chrono::microseconds>(end-start).count()<<endl;
}
