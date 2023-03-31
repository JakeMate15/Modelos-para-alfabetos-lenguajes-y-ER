#include <bits/stdc++.h>

using namespace std;

int main() {
    regex patron("(((?=.*[a])[a-d|f-h|j-n|p-t|v-z]+)((?=.*[e])[b-d|e-h|j-n|p-t|v-z]+)((?=.*[i])[b-d|f-h|i-n|p-t|v-z]+)((?=.*[o])[b-d|f-h|j-n|o-t|v-z]+)((?=.*[u])[b-d|f-h|j-n|p-t|u-z]+))+");
    
    /*
    (
        ((?=.*[a])[a-d|f-h|j-n|p-t|v-z]+)
        ((?=.*[e])[b-d|e-h|j-n|p-t|v-z]+)
        ((?=.*[i])[b-d|f-h|i-n|p-t|v-z]+)
        ((?=.*[o])[b-d|f-h|j-n|o-t|v-z]+)
        ((?=.*[u])[b-d|f-h|j-n|p-t|u-z]+)
    )+
    */


    int t;cin>>t;
    while(t--){
        string palabra;
        getline(cin, palabra);
        cout << palabra << ":\t\t";
        // Validar la palabra con la expresión regular
        if (regex_match(palabra, patron)) {
            cout << "La palabra es válida." << endl;
        } else {
            cout << "La palabra no es válida." << endl;
        }
    }

    return 0;
}