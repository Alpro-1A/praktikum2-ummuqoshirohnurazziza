#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "banyak bebek=" ;
    cin >> a;
    cout << "banyak teman=" ;
    cin >> b;
    cout << "jumlah bebek yang dibagi ke teman=" << (a/b) << endl;
    cout << "sisa bebek yang telah dibagi=" << (a%b) << endl;

    return 0;
}
