kalimat = input("Input kalimat: ")
new_kalimat = []
vokal = ['a', 'e', 'i', "o", "u"]
for kata in kalimat:
    new_kata = kata
    for huruf in kata:
        if huruf in vokal:
            new_kata = new_kata.replace('a', 'aga')
            new_kata = new_kata.replace('e', 'ege')
            new_kata = new_kata.replace('i', 'igi')
            new_kata = new_kata.replace('o', 'ogo')
            new_kata = new_kata.replace('u', 'ugu')
        new_kalimat += new_kata
kalimat_akhir = "".join(new_kalimat)
print("Ouput Bahasa g:", kalimat_akhir) 