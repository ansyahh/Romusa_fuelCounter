rows = int(input("Masukkan jumlah kolom/baris : "));
#baris pertama ini berfungsi untuk menginput berapa jumlah rows atau baris yang akan dimasukkan nanti
for row in range(1, rows+1):
    #perulangan for di sini berfungsi untuk melakukan perulangan berdasarkan interval yang sudah ditentukan
    #range\batas 1 merupakan titik mula dan rows+1 merupakan titik akhir kolom/baris
    for i in range(0, rows-row+1):
        print(" ",end="")
        # print angka akan berhenti saat baris sudah di angka yan di input
    for column in range(1, row + 1):
        print(column, end=" ")
    print("")
