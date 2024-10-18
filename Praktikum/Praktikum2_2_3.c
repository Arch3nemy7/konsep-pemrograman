#include <stdio.h>

int main()
{
    int jumlahAnak, masaKerja, masukKerja;
    float gajiPokok, tunjanganIstriSuami, tunjanganAnak, tunjanganHariRaya, pajak, bantuanTransport, polisiAsuransi, pendapatanBulanan;

    printf("Masukkan sebuah besar gaji pokok Anda : Rp");
    scanf("%f", &gajiPokok);
    puts("Berapakah anak Anda ?");
    scanf("%i", &jumlahAnak);
    puts("Berapa lama tahun masa kerja Anda ?");
    scanf("%i", &masaKerja);
    puts("Berapa hari Anda masuk kerja setiap bulan ?");
    scanf("%i", &masukKerja);

    tunjanganIstriSuami = gajiPokok * 0.1;
    tunjanganAnak = 0.05 * jumlahAnak * gajiPokok;
    tunjanganHariRaya = 5000.0 * masaKerja;
    pajak = ((gajiPokok + tunjanganIstriSuami) * 0.15);
    bantuanTransport = masukKerja * 3000.0;
    polisiAsuransi = 20000.0;

    pendapatanBulanan = gajiPokok + tunjanganIstriSuami + tunjanganAnak + tunjanganHariRaya + bantuanTransport - pajak - polisiAsuransi;

    printf("Pendapatan bulanan Anda adalah Rp%.2f", pendapatanBulanan);

    return 0;
}