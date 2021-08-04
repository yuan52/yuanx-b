#include <iostream>
using namespace std;

class Complex {
public:
    Complex(double r) {
        real = r;
        imag = 0.0;
    }
    Complex(double r, double i) {
        real = r;
        imag = i;
    }
    double getreal() { return real; }
    double getimag() { return imag; }
private:
    double real;
    double imag;
};

class Mycout {
public:
    Mycout& operator<<(Mycout&(*pf)(Mycout&)) {
        return pf(*this);
    }
    
    Mycout& operator <<(int data) {
        printf("%d", data);
        return *this;
    }
    Mycout& operator <<(char data) {
        printf("%c", data);
        return *this;
    }
    Mycout& operator <<(double data) {
        printf("%f", data);
        return *this;
    }
    Mycout& operator <<(const char * data) {
        printf("%s", data);
        return *this;
    }
    Mycout& operator << (Complex&C) {
        printf("%f+%fi", C.getreal(),C.getimag());
        return *this;
    }
};
Mycout& endl(Mycout& os) {
    printf("\n");
    return os;
}
int main() {
    Complex f = Complex(2.3,8);
    Mycout mycout;
    int x1 = 23;
    char x2 = 's';
    double x3 = 26.184;
    const char * x4 = "hfjeoir5rjijh";
    mycout << x1 << endl << x2 << endl << x3 << endl << x4 << endl << f << endl;
    system("pause");
    return 0;
}