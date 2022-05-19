#Masukkan kalimat
kalimat = input("Input kalimat: ")
#Kalimat awal
new_kalimat = []
#hufur vokal
vokal = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', "o", "u"]
for kata in kalimat:
    new_kata = kata
    for huruf in kata:
        if huruf in vokal:
            #mengganti huruf vokal dengan bahasa G
            new_kata = new_kata.replace('a', 'aga')
            new_kata = new_kata.replace('A', 'Aga')         
            new_kata = new_kata.replace('e', 'ege')
            new_kata = new_kata.replace('E', 'Ege')         
            new_kata = new_kata.replace('i', 'igi')
            new_kata = new_kata.replace('I', 'Igi')         
            new_kata = new_kata.replace('o', 'ogo')
            new_kata = new_kata.replace('O', 'Ogo')         
            new_kata = new_kata.replace('u', 'ugu')
            new_kata = new_kata.replace('U', 'Ugu')         
        new_kalimat += new_kata
kalimat_akhir = "".join(new_kalimat)
print("Ouput Bahasa g:", kalimat_akhir) 
