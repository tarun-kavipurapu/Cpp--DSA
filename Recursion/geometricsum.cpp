#include <iostream>
using namespace std;
double f(int k){
if (k==0)
{
    return 1;
    /* code */

}
else 
       for (int  i = 1; i <=k; i++)
       {
    /* code */
    double ans = 0;
    ans = ans + ((double)1 / (double)2) * f(k - i);
    return ans + (double)1;

    }

}

int main(){

    cout << f(4);
    return 0;
}