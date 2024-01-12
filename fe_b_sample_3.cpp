#include <iostream>
#include <vector>
using namespace std;

vector<int> makeNewArray(vector<int>in) {
    vector<int>out(in.size());
    int i, tail;

     out[0] = in[0];
     for (i = 1; i < in.size(); i++) {
         tail = out[i - 1];
         out[i] = (tail + in[i]);
     }

     return out;
}

int main()
{
    vector<int>in = { 3, 2, 1, 6, 5 ,4 };
    in = makeNewArray(in);
    cout << in[4];
}
