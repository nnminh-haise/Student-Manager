#include <bits/stdc++.h>
#include "./libraries/Compare.h"

using namespace std;

void func (int x) {
    return;
}

int main() {
    void (*funcPtr) (int);
    funcPtr = &func;

    void *abc = funcPtr;

    printf ("Address of func (use printf): %p\n", funcPtr);
    cout << "Address of func (use cout)  : " << funcPtr << endl;
    cout << abc << endl;
    printf("%p\n", abc);

    return 0;
}
