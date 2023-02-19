#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, string> givenD;
    for (int i = 0; i < n; i++) {
        string timestamp, email, birth, blood;
        cin >> timestamp >> email >> birth >> blood;
        givenD[email] = blood + "#" + birth;
    }
    map<string, int> blood_count;
    for (auto x : givenD) {
        string blood = x.second.substr(0, x.second.find("#"));
        blood_count[blood]++;
    }
    vector<string> bloods = {"A+", "A-", "AB+", "AB-", "B+", "B-", "O+", "O-"};
    sort(bloods.begin(), bloods.end());
    for (auto x : bloods) {
        cout << x << " " << blood_count[x] << endl;
    }
    map<string, int> year_count;
    for (auto x : givenD) {
        string birth = x.second.substr(x.second.find("#") + 1);
        string year = birth.substr(birth.length() - 4);
        year_count[year]++;
    }
    vector<string> years;
    for (auto x : year_count) {
        years.push_back(x.first);
    }
    sort(years.begin(), years.end());
    for (auto x : years) {
        cout << x << " " << year_count[x] << endl;
    }
    return 0;
}