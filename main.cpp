#include <iostream>
using namespace std;

int main() {
    short ns = 25, t1s = 0, t2s = 1, nextTerms = 0;

    cout << "Variable entera tipo 'short': \n";

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= ns; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << t1s << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << t2s << ", ";
            continue;
        }
        nextTerms = t1s + t2s;
        t1s = t2s;
        t2s = nextTerms;

        cout << nextTerms << ", ";
    }
    cout << "\n Overflow en n = "<< ns;
    cout << "\n ";


    int n = 48, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Variable entera tipo 'int': \n";

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";
    }
    cout << "\n Overflow en n = "<< n;
    cout << "\n ";

    long nl = 94, t1l = 0, t2l = 1, nextTerml = 0;

    cout << "Variable entera tipo 'long': \n";

    cout << "Fibonacci Series: ";

    for (long i = 1; i <= nl; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << t1l << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << t2l << ", ";
            continue;
        }
        nextTerml = t1l + t2l;
        t1l = t2l;
        t2l = nextTerml;

        cout << nextTerml << ", ";
    }
    cout << "\n Overflow en n = "<< nl;
    cout << "\n ";

    long long nll = 94, t1ll = 0, t2ll = 1, nextTermll = 0;

    cout << "Variable entera tipo 'long long': \n";

    cout << "Fibonacci Series: ";

    for (long long i = 1; i <= nll; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << t1ll << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << t2ll << ", ";
            continue;
        }
        nextTermll = t1ll + t2ll;
        t1ll = t2ll;
        t2ll = nextTermll;

        cout << nextTermll << ", ";
    }
    cout << "\n Overflow en n = "<< nll;
    cout << "\n ";

    return 0;
}