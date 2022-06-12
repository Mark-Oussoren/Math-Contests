/*
ID: oussore1
LANG: C++
TASK: ride
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string comet, group;
    fin >> comet >> group;
    // numerize the characters of the comet and group strs
    int comet_num = 1, group_num = 1;
    for (char & c : comet) {
        comet_num *= int(c);
    }
    for (char & c : group) {
        group_num *= int(c);
    }
    cout << comet_num;
    cout << group_num;
    comet_num = comet_num % 47;
    group_num = group_num % 47;
    if (comet_num == group_num) {
        fout << "GO" << endl;
    } else {
        fout << "STAY" << endl;
    }
}
