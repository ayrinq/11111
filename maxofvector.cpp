#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	vector<int> a;
    a.push_back(12);
    a.push_back(-1000);
    a.push_back(20000);
    a.push_back(1900);
    a.push_back(-1970);
    
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "\nmax Element = "
        << *max_element(a.begin(), a.end());
}
