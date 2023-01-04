#include <iostream>
using namespace std;
int f(int n){
    int r = n % 10;
    int x = n / 10;

    if (x == 0)
    {
        if (n==0)
        {
            return 1;
        }
        else
            return 0;
        }

    if (r == 0)
    {
        return f(x) + 1;
    }
    else
        return f(x);
}


int main(){
    cout << f(102400)<<endl;
    cout << f(0)<<endl;

    return 0;
}