#include <vector>
#include <iostream>
using namespace std;
int main ()
{
    vector<int>v;
    v.push_back(10);///把10放准去，有1個
    v.push_back(11);///把11放進去，有2個
    v.push_back(15);///把13放准去，有3個
    for(int i=0;i<3;i++){
        cout <<v[i]<<endl;
    }
}
