#include <stdio.h>


void pobieranie(double *a1, double *a2, double *b1, double *b2, double *c1, double *c2);

void obliczanieWyznacznikow(double a1, double a2, double b1, double b2, double c1, double c2, double *w, double *wx,
                            double *wy);

void wysietlenieWynikow(double w, double wx, double wy, double x, double y);

int main() {

    double a1, a2, b1, b2, c1, c2, w, wx, wy, x, y;

    pobieranie(&a1, &a2, &b1, &b2, &c1, &c2);


    obliczanieWyznacznikow(a1, a2, b1, b2, c1, c2, &w, &wx, &wy);

    wysietlenieWynikow(w, wx, wy, x, y);

    return 0;
}

void wysietlenieWynikow(double w, double wx, double wy, double x, double y) {
    if (w) {
        x = wx / wy;
        y = wy / w;
        printf("Układ na jedno rozwiazanie x = %lf y = %lf", x, y);
    } else if (!w && !wx && !wy) {
        printf("Układ ma nieskończenie wiele rozwiązań");
    } else if ((!w && wx) || (!w && wy)) {
        printf("ukad jest sprzeczny");
    }
}

void obliczanieWyznacznikow(double a1, double a2, double b1, double b2, double c1, double c2, double *w, double *wx,
double *wy) {
    (*w) = a1 * b2 - b1 * a2;
    (*wx) = c1 * b2 - b1 * c2;
    (*wy) = a1 * c2 - c1 * a2;
}

void pobieranie(double *a1, double *a2, double *b1, double *b2, double *c1, double *c2) {
    printf("Podaj a1"); scanf(" %lf", a1);
    printf("Podaj b1"); scanf(" %lf", b1);
    printf("Podaj c1"); scanf(" %lf", c1);
    printf("Podaj a2"); scanf(" %lf", a2);
    printf("Podaj b2"); scanf(" %lf", b2);
    printf("Podaj c2"); scanf(" %lf", c2);
}
