#include <iostream>
using namespace std;

int main() {
    int inter_wins = 0, gremio_wins = 0, draws = 0, total_matches = 0;
    int goals_inter, goals_gremio, choice;

    do {
        cin >> goals_inter >> goals_gremio;

        // Update statistics
        if (goals_inter > goals_gremio) inter_wins++;
        else if (goals_gremio > goals_inter) gremio_wins++;
        else draws++;

        total_matches++;

        // Ask if new Grenal
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> choice;

    } while (choice == 1);

    // Print statistics
    cout << total_matches << " grenais" << endl;
    cout << "Inter:" << inter_wins << endl;
    cout << "Gremio:" << gremio_wins << endl;
    cout << "Empates:" << draws << endl;

    if (inter_wins > gremio_wins) cout << "Inter venceu mais" << endl;
    else if (gremio_wins > inter_wins) cout << "Gremio venceu mais" << endl;
    else cout << "Não houve vencedor" << endl;

    return 0;
}
