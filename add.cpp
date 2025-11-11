#include <iostream>
#include <vector>
using namespace std;

vector<int> vec_add(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int n = min(a.size(), b.size());
    for (int i = 0; i < n; ++i) {
        result.push_back(a[i] + b[i]);
    }
    return result;
}

int main() {
    vector<int> kp1 = {1, 2, 3};
    vector<int> kp2 = {4, 5, 6};
	my name is amit;


    cout << "Performing vector addition..." << endl;

    vector<int> sum = vec_add(v1, v2);


    cout << "Result: ";
    for (int val : sum)
        cout << val << " ";
    cout << endl;

    return 0;
}



