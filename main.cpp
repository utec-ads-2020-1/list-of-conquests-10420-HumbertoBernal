#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {

    map<string,int > contador;
    char pais[75];
    string dama;
    int n;
    vector<string> paises;

    cin >> n;
    for (int i = 0; i < n ; ++i) {
        scanf("%s", pais);
        getline(cin, dama);
        contador[pais] += 1;
    }

    for (auto& x: contador) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
