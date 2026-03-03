#include <iostream>
using namespace std;

int main() {
    int start_day, end_day;
    int h1, m1, s1;
    int h2, m2, s2;
    char colon;
    string word;

    // Read start
    cin >> word >> start_day;
    cin >> h1 >> colon >> m1 >> colon >> s1;

    // Read end
    cin >> word >> end_day;
    cin >> h2 >> colon >> m2 >> colon >> s2;

    // Convert to seconds
    int start_total = start_day * 86400 + h1 * 3600 + m1 * 60 + s1;
    int end_total   = end_day * 86400 + h2 * 3600 + m2 * 60 + s2;

    int duration = end_total - start_total;

    // Convert back
    int days = duration / 86400;
    duration %= 86400;

    int hours = duration / 3600;
    duration %= 3600;

    int minutes = duration / 60;
    int seconds = duration % 60;

    // Output
    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
