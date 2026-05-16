#include <iostream>
using namespace std;

void play(string t, int len) {                   // Song
    cout << "Song: " << t;
    if (len > 5) cout << " (extended)";
    cout << endl;
}

void play(string name, string res) {             // Video
    cout << "Video: " << name << " (" << res << ")";
    if (res == "4K") cout << " high quality";
    cout << endl;
}

void play(string t, string a, int dur) {         // Audiobook
    cout << "Audiobook: " << t << " by " << a;
    if (dur > 60) cout << " (chapters)";
    cout << endl;
}

int main() {
    play("Love Story", 6);
    play("Movie", "4K");
    play("Atomic Habits", "James", 120);
}

