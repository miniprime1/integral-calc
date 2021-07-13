#include <iostream>
#include <cmath>
using namespace std;

double x(int k, double a, double b, int n) {
    double x_k = a + (b-a)/n * k;
    return x_k;
}

double delta_x(double a, double b, int n) {
    double delta = (b-a)/n;
    return delta;
}

double integrate(double (*f)(double), double a, double b, int n) {
    double result = 0;
    double delta = delta_x(a, b, n);

    for (int k=1; k<n; k++) {
        result += f(x(k, a, b, n)) * delta; 
    }

    return result;
}

int main() {
    int option;
    double inf = (double)100000000;
    double a, b;
    
    cout << "Definite Integral Calculator v1.0" << endl;
    cout << "Copyright (c) 2021 miniprime1." << endl;
    cout << endl;

    cout << "Options" << endl;
    cout << "1. Definite Integral of Trigonometric functions" << endl;
    cout << "2. Definite Integral of Exponential and logarithmic functions" << endl;
    cout << "3. Definite Integral of Power functions" << endl;
    cout << "Enter option: "; cin >> option; cout << endl;

    if (option == 1) {
        cout << "Options" << endl;
        cout << "1. Compute definite integral of cosine" << endl;
        cout << "2. Compute definite integral of sine" << endl;
        cout << "3. Compute definite integral of tangent" << endl;
        cout << "4. Compute definite integral of arc cosine" << endl;
        cout << "5. Compute definite integral of arc sine" << endl;
        cout << "6. Compute definite integral of arc tangent" << endl;
        cout << "Enter option: "; cin >> option; cout << endl;

        if (option == 1) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(cos, a, b, inf);
            cout << endl;
            cout << "Integrate(cos, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else if (option == 2) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(sin, a, b, inf);
            cout << endl;
            cout << "Integrate(sin, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else if (option == 3) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(tan, a, b, inf);
            cout << endl;
            cout << "Integrate(tan, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else if (option == 4) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(acos, a, b, inf);
            cout << endl;
            cout << "Integrate(arccos, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else if (option == 5) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(asin, a, b, inf);
            cout << endl;
            cout << "Integrate(arcsin, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else if (option == 6) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(atan, a, b, inf);
            cout << endl;
            cout << "Integrate(arctan, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else {
            cout << "Error: invalid choice" << endl;
            return 1;
        }
    } else if (option == 2) {
        cout << "Options" << endl;
        cout << "1. Compute definite integral of exponential function" << endl;
        cout << "2. Compute definite integral of natural logarithm" << endl;
        cout << "3. Compute definite integral of common logarithm" << endl;
        cout << "Enter option: "; cin >> option; cout << endl;

        if (option == 1) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(exp, a, b, inf);
            cout << endl;
            cout << "Integrate(exp, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else if (option == 2) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(log, a, b, inf);
            cout << endl;
            cout << "Integrate(log, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else if (option == 3) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(log10, a, b, inf);
            cout << endl;
            cout << "Integrate(log10, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else {
            cout << "Error: invalid choice" << endl;
            return 1;
        }
    } else if (option == 3) {
        cout << "Options" << endl;
        cout << "1. Compute definite integral of square root" << endl;
        cout << "2. Compute definite integral of cubic root" << endl;
        cout << "Enter option: "; cin >> option; cout << endl;

        if (option == 1) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(sqrt, a, b, inf);
            cout << endl;
            cout << "Integrate(sqrt, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else if (option == 2) {
            cout << "Enter upper bound: "; cin >> b;
            cout << "Enter lower bound: "; cin >> a;
            double I = integrate(cbrt, a, b, inf);
            cout << endl;
            cout << "Integrate(cbrt, {x, " << a << ", " << b << "}) = " << I;
            cout << endl;
        } else {
            cout << "Error: invalid choice" << endl;
            return 1;
        }
    }
   
    return 0;
}
