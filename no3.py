rows = int(input("Masukkan maks jumlah kolom/baris : "));
for row in range(1, rows+1):
    for i in range(0, rows-row+1):
        print(" ",end="")
    for column in range(1, row + 1):
        print(column, end=" ")
    print("")