#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100000];
    
    while (cin.getline(s, 100000)) {
        int length = strlen(s);
        int idx = 0;

        for (int i = 0; i < length; i++) {
            if (s[i] != ' ') {
                s[idx++] = s[i];
            }
        }
        s[idx] = '\0';
        sort(s, s + idx);

        cout << s << endl;
    }

    return 0;
}
