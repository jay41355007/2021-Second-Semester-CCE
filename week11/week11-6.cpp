#include <vector>
#include <iostream>
using namespace std;
int main ()
{
    vector<int>v;
    v.push_back(10);///��10���h�A��1��
    v.push_back(11);///��11��i�h�A��2��
    v.push_back(15);///��13���h�A��3��

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout <<*it<<endl;
    }
}
