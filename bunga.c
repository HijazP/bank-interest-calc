#include <stdio.h>

int main() 
{
    double totalBunga = 0, bunga, pajakBunga, saldo;

    printf("Mulai:\n");
    scanf("%lf", &saldo);

    while (saldo != 0)
    {
        bunga = saldo * 0.00172;
        pajakBunga = bunga * 0.2;
        totalBunga = totalBunga + (bunga - pajakBunga);
        printf("Masukkan angka 0 jika sudah selesai\n");
        scanf("%lf", &saldo);
    }

    printf("%lf\n", totalBunga);
    
    return 0;
}