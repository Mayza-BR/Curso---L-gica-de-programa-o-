//EX.2
int main() {
    int A[6], B[6];

    printf("Digite 6 elementos para a matriz A:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 6; i++) {
        B[i] = 1;
        for (int j = 1; j <= A[i]; j++) {
            B[i] *= j;
        }
    }

    printf("Os elementos da matriz B (fatoriais) sao:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");
    return 0;
}
