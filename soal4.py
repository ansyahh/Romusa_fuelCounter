daftarAngka = []
for i in range (8):
    x = int(input("Masukkan Angka: "))
    daftarAngka.append(x)
print('Daftar Angka Sebelum di Sorting: ', daftarAngka)
list.sort(daftarAngka)
print('Daftar Angka Sesudah di Sorting: ', daftarAngka)
