#include <bits/stdc++.h>
using namespace std;

multiset<int> leftHalf, rightHalf;

void rebalance() {
    // keep sizes balanced (|left| = |right| or |left| = |right| + 1)
    while (leftHalf.size() > rightHalf.size() + 1) {
        rightHalf.insert(*leftHalf.rbegin());
        leftHalf.erase(prev(leftHalf.end()));
    }
    while (rightHalf.size() > leftHalf.size()) {
        leftHalf.insert(*rightHalf.begin());
        rightHalf.erase(rightHalf.begin());
    }
}

void addNumber(int x) {
    if (leftHalf.empty() || x <= *leftHalf.rbegin()) {
        leftHalf.insert(x);
    } else {
        rightHalf.insert(x);
    }
    rebalance();
}

bool removeNumber(int x) {
    if (leftHalf.find(x) != leftHalf.end()) {
        leftHalf.erase(leftHalf.find(x));
    } else if (rightHalf.find(x) != rightHalf.end()) {
        rightHalf.erase(rightHalf.find(x));
    } else {
        return false; // number not found
    }
    rebalance();
    return true;
}

void printMedian() {
    if (leftHalf.empty() && rightHalf.empty()) {
        cout << "Wrong!" << endl;
        return;
    }
    if (leftHalf.size() > rightHalf.size()) {
        cout << *leftHalf.rbegin() << endl;
    } else {
        long long a = *leftHalf.rbegin();
        long long b = *rightHalf.begin();
        long long sum = a + b;
        if (sum % 2 == 0) cout << sum / 2 << endl;
        else cout << fixed << setprecision(1) << sum / 2.0 << endl;
    }
}

void median(vector<char> s, vector<int> X) {
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'a') {
            addNumber(X[i]);
            printMedian();
        } else {
            if (!removeNumber(X[i])) {
                cout << "Wrong!" << endl;
            } else {
                printMedian();
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<char> s;
    vector<int> X;
    char temp;
    int tempint;

    for (int i = 0; i < N; i++) {
        cin >> temp >> tempint;
        s.push_back(temp);
        X.push_back(tempint);
    }

    median(s, X);
    return 0;
}
