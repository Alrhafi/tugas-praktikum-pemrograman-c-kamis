#include <stdio.h>

int main() {
	int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0, countB = 0, countC = 0;

    // Hitung rata-rata nilai
    for (int i = 0; i < 12; ++i) {
        sum += A[i];
    }
    float average = (float)sum / 12;

    // Pindahkan nilai ke array B atau C berdasarkan rata-rata
    for (int i = 0; i < 12; ++i) {
        if (A[i] > average) {
            B[countB++] = A[i];
        } else {
            C[countC++] = A[i];
        }
    }

    // Tampilkan isi array A
    printf("Array A: ");
    for (int i = 0; i < 12; ++i) {
        printf("%d ", A[i]);
    }

    // Tampilkan isi array B
    printf("\nArray B: ");
    for (int i = 0; i < countB; ++i) {
        printf("%d ", B[i]);
    }

    // Tampilkan isi array C
    printf("\nArray C: ");
    for (int i = 0; i < countC; ++i) {
        printf("%d ", C[i]);
    }

    return 0;
}
