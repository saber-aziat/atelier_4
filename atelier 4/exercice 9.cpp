#include <iostream>
#include <list>
using namespace std ;
class Liste {
private:
    list<int> elements;

public:

    void ajouterDebut(int valeur) {
        elements.push_front(valeur);
    }


    void supprimerDebut() {
        if (!elements.empty()) {
            elements.pop_front();
        } else {
            cout << "La liste est deja vide";
        }
    }


    void afficher() const {
        for (const int& element : elements) {
           cout << element << " -> ";
        }
       cout << "null" << endl;
    }
};

int main() {
    Liste maListe;
    maListe.ajouterDebut(10);
    maListe.ajouterDebut(20);
    maListe.ajouterDebut(30);

    cout << "Liste apres ajout : ";
    maListe.afficher();

    maListe.supprimerDebut();
    cout << "Liste apres suppression : ";
    maListe.afficher();

    return 0;
}
