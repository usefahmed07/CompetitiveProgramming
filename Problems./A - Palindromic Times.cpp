

    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        string s;
        cin >> s;
     
        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));
     
        while (true) {
            m++;
     
            if (m == 60) {
                m = 0;
                h++;
            }
     
            if (h == 24)
                h = 0;
     
            string t = "";
     
            if (h < 10) t += '0';
            t += to_string(h);
            t += ':';
            if (m < 10) t += '0';
            t += to_string(m);
     
            if (t[0] == t[4] && t[1] == t[3]) {
                cout << t;
                break;
            }
        }
     
        return 0;
    }
