#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void)
{
    double lq, br, hr, bt, ht, rc, Btr, btr, htr, bp, hp, Dl, dl;
    double ae, be, rs, ang, Rc, rc2, a, b, c, lado_poly;
    int n_poly;

    printf("Quadrado (lado): ");                    scanf("%lf", &lq);
    printf("Retangulo (base, altura): ");           scanf("%lf%lf", &br, &hr);
    printf("Triangulo b*h/2 (base, altura): ");     scanf("%lf%lf", &bt, &ht);
    printf("Circulo (raio): ");                     scanf("%lf", &rc);
    printf("Trapezio (B, b, h): ");                 scanf("%lf%lf%lf", &Btr, &btr, &htr);
    printf("Paralelogramo (base, altura): ");       scanf("%lf%lf", &bp, &hp);
    printf("Losango (D, d): ");                     scanf("%lf%lf", &Dl, &dl);
    printf("Elipse (a, b): ");                      scanf("%lf%lf", &ae, &be);
    printf("Setor circular (raio, angulo graus): ");scanf("%lf%lf", &rs, &ang);
    printf("Coroa circular (R, r): ");              scanf("%lf%lf", &Rc, &rc2);
    printf("Triangulo (lados a, b, c): ");          scanf("%lf%lf%lf", &a, &b, &c);
    printf("Poligono regular (n, lado): ");         scanf("%d%lf", &n_poly, &lado_poly);

    double A_quadrado   = lq * lq;
    double A_retangulo  = br * hr;
    double A_triang_bh  = 0.5 * bt * ht;
    double A_circulo    = M_PI * rc * rc;
    double A_trapezio   = 0.5 * (Btr + btr) * htr;
    double A_paralelo   = bp * hp;
    double A_losango    = 0.5 * Dl * dl;
    double A_elipse     = M_PI * ae * be;
    double A_setor      = M_PI * rs * rs * (ang / 360.0);
    double A_coroa      = M_PI * (Rc*Rc - rc2*rc2);
    double s            = (a + b + c) / 2.0;
    double A_heron      = sqrt(s * (s - a) * (s - b) * (s - c));
    double A_polig_reg  = (n_poly * lado_poly * lado_poly) / (4.0 * tan(M_PI / (double)n_poly));

    printf("\nAreas calculadas:\n");
    printf("Quadrado:            %.4f\n", A_quadrado);
    printf("Retangulo:           %.4f\n", A_retangulo);
    printf("Triangulo (b*h/2):   %.4f\n", A_triang_bh);
    printf("Circulo:             %.4f\n", A_circulo);
    printf("Trapezio:            %.4f\n", A_trapezio);
    printf("Paralelogramo:       %.4f\n", A_paralelo);
    printf("Losango:             %.4f\n", A_losango);
    printf("Elipse:              %.4f\n", A_elipse);
    printf("Setor circular:      %.4f\n", A_setor);
    printf("Coroa circular:      %.4f\n", A_coroa);
    printf("Triangulo (Heron):   %.4f\n", A_heron);
    printf("Poligono regular:    %.4f\n", A_polig_reg);

    return 0;
}
