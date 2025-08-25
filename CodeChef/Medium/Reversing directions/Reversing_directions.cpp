#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cin.ignore(); // clear newline

        vector<string> instr(N);
        for (int i = 0; i < N; i++) {
            getline(cin, instr[i]);
        }

        // Reverse directions
        string prevRoad = "";
        for (int i = N - 1; i >= 0; i--) {
            string s = instr[i];
            if (i == N - 1) {
                // Last instruction in original becomes "Begin"
                size_t pos = s.find(" on ");
                string road = s.substr(pos + 4);
                cout << "Begin on " << road << "\n";
                prevRoad = road;
            } else {
                size_t pos = s.find(" on ");
                string turn = s.substr(0, pos); // "Left" or "Right" or "Begin"
                string road = s.substr(pos + 4);

                if (turn == "Left")
                    cout << "Right on " << prevRoad << "\n";
                else if (turn == "Right")
                    cout << "Left on " << prevRoad << "\n";
                else if (turn == "Begin")
                    cout << "Begin on " << prevRoad << "\n";

                prevRoad = road;
            }
        }
        cout << "\n";
    }
    return 0;
}
