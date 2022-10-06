#include <iostream>
using namespace std; 

unsigned long long int factorial(int n) {
    unsigned long long int fac;
    fac = 1;

    for (int i = 1; i <= n; ++i) {
        fac *= i ;
    }

    return fac;

}

unsigned long long int n_permutations(int a, int b) {

    if (a < 0) {

        return -1;
    } 
    else if (b < 0) {
        return -1;
    } 
    
    else if (a >= b) {
        unsigned long long int perm;
        perm = (factorial(a))/(factorial((a-b)));
        return perm;
    } 
    
    else {
        return -1;
    } 
}

unsigned long long int n_combinations(int a, int b) {
    unsigned long long int comb;
    comb = (n_permutations(a, b))/(factorial(b));
    return comb;
}

int main() {
    char operationSymbol;
    int nValue;
    int rValue;
    cout << "Choose one of the following operators: " << endl;
    cout << "C for Combination" << endl;
    cout << "P for Permutation" << endl;
    cout << "B for Both" << endl;
    cin >> operationSymbol;


    switch (operationSymbol) {
        unsigned long long int finalCValue;
        unsigned long long int finalPValue;
        
        case 'C':
        case 'c':
            cout << "Enter your N value: ";
            cin >> nValue;
            cout << "Enter your R value: ";
            cin >> rValue;
            
            finalCValue = n_combinations(nValue, rValue);
            if (finalCValue == -1) {
                cout << "Incorrect Parameters! n ≥ r ≥ 0";
            }
            else {
                cout << finalCValue;
            }
            break;

        case 'P':
        case 'p':
            cout << "Enter your N value: ";
            cin >> nValue;
            cout << "Enter your R value: ";
            cin >> rValue;
            
            finalPValue = n_permutations(nValue, rValue);
            if (finalPValue == -1) {
                cout << "Incorrect Parameters! n ≥ r ≥ 0";
            }
            else {
                cout << finalPValue;
            }
            break;

        case 'B':
        case 'b':
            cout << "Enter your N value: ";
            cin >> nValue;
            cout << "Enter your R value: ";
            cin >> rValue;

            finalPValue = n_permutations(nValue, rValue);
            finalCValue = n_combinations(nValue, rValue);
            if (finalPValue == -1) {
                cout << "Incorrect Parameters! n ≥ r ≥ 0";
            }
            else {
                cout << "Permutation: "<< finalPValue << endl;
                cout << "Combination: "<< finalCValue << endl;
            }
            break;

        default:
            cout << "Incorrect operator!";

    }


}