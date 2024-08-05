#include <iostream>

using namespace std;
int playQuizz();

int main() {
    cout << "\t\t\t\t----------------- Welco to quizz -----------------\n" << endl;
    cout << "\t\t\t\t--------------Follow the intructions--------------\n\n" << endl;
    cout << "\t\t\t\tStep 1: Quiz contains total 10 questions\n" << endl;
    cout << "\t\t\t\tStep 2: You Will given 1 mark for each right answer\n" << endl;
    cout << "\t\t\t\tStep 3: There will be no negative marking\n" << endl;
    cout << "\t\t\t\tStep 4: Please press s to start the quizz\n" << endl;
    cout << "\t\t\t\tStep 5: Please select option 1 or 2\n" << endl;
    playQuizz();
}

int playQuizz() {
    char c;
    char option;
    int score {0};
    cin >> c;
    if(c == 's' || c == 'S') {
        cout << "Q1: Briseño es un mama pitos ?" << endl;
        cout << "A1: Si -- A2: No -- todos sabemos la respuesta...\n" << endl;
        cin >> option;
        if(option == '1') {
            cout << "Obio !!\n\n" << endl;
            score = score + 1;
        } else {
            cout << "No seas pendejo !!!\n\n" << endl;
        }

        cout << "Q2: a donde hay que poner al Rey de los pendejos ?" << endl;
        cout << "A1: En la Basura -- A2: En un puesto gerencial -- todos sabemos la respuesta...\n" << endl;
        cin >> option;
        if(option == '1') {
            cout << "Obio !!\n\n" << endl;
            score = score + 1;
        } else {
            cout << "No seas pendejo !!!\n\n" << endl;
        }
    } else {
        cout << "Pedazo de Basura inservible" << endl;
    }


    return 0;
};