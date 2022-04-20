#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int totalArgumen, char *nilaiArgumen[]){

    if(!(totalArgumen == 3)){ // Tidak sama dengan 3 
        printf("Inputan yang anda masukkan tidak sesuai prosedur -_-");
        return EXIT_FAILURE;
    }
    char userNameInput[50],passwordInput[50];
    strcpy(userNameInput,nilaiArgumen[1]);
    strcpy(passwordInput,nilaiArgumen[2]);

    long int pil;
    double bhanbkr,uang,bayar;
    float kembalian;
    char kem;

    FILE *fptr;
    // Membuat error handling jika file yang dituju tidak ditemukan
    if((fptr = fopen("Database/login.bin", "rb")) == NULL){
        printf("File tidak ditemukan -_-");
        return EXIT_FAILURE;
    }
    // Deklarasi Variabel untuk membaca isi file binari
    char bufferedReader[50];
    fread(bufferedReader,sizeof(char), sizeof(bufferedReader)/ sizeof(char),fptr);
    fclose(fptr);

    /* Deklarasi variabel untuk membuat variabel username dan password 
        dengan memakai fungsi strtok untuk pemisah antara username dan password
        isi dari file binari tersebuat adalah romusha@ardisholat
        username = romusha
        password = ardisholat
        Delimiter yang digunakan adalah tanda @*/

        char *string[3];
        char username[50], password[50];
        int temp = 0; // Variabel bantuan

        string[0] = strtok(bufferedReader,"@");
        while (string[temp++] != NULL){
            string[temp] = strtok(NULL,"@");
        }

        strcpy(username,string[0]);
        strcpy(password,string[1]);

        printf("Username:%s\n", username); 
        printf("Password:%s\n", password); 
        if((strcmp(userNameInput,username) == 0) && (strcmp(passwordInput,password) == 0)){
            printf("Selamat anda berhasil login ^_^");
        }else{
            printf("Maaf Anda gagal login -_-");
            return EXIT_FAILURE;
        }

    mulai:
  { 
    printf("\n* * * * * * * * * * * * * * * * * * * * * * \n"); 
    printf("* * * * * * * * * * * * * * * * * * * * * * \n");
    printf("** * * * * => SELAMAT  DATANG <= * * * * ** \n");
    printf("* * * * * * * * * * * * * * * * * * * * * * \n");
    printf("\n* * * * * * * * * * * * * * * * * * * * * \n");

    printf("==================================\n");
    printf("|| |POM BENSIN ULEE KAREUNG | ||\n");
    printf("==================================\n");
    printf("**********************************\n");
    printf("**\n");
    printf("____________________________________________\n"); 
    printf("||==      Menu    == |||==    Harga      ==|\n");
    printf("|1. Premium           | Rp.6450  /Liter    |\n");
    printf("|2. Solar             | Rp.6000  /Liter    |\n");
    printf("|3. Pertamax          | Rp.10000 /Liter    |\n");
    printf("|4. Pertalite         | Rp.7650  /Liter    |\n");
    printf("|5. Pertamax Dex      | Rp.11000 /Liter    |\n");
    printf("|6. Pertamax Dexlite  | Rp.12600 /Liter    |\n");
    printf("|7. Pertamax Turbo    | Rp.15000 /Liter    |\n");
    printf("____________________________________________\n"); 
    printf("**\n");
printf("**********************************************");

printf("\nMasukkan pilihan anda : "); scanf("%ld", &pil);

switch (pil)
{
case 1:
   printf(" =======================\n"); 
   printf(" Premium = Rp.4500/Liter\n");
   printf(" =======================\n");
   printf("Masukkan uang pembayaran : "); scanf("%le", &uang);
   bhanbkr= uang / 6450;
   printf("Premium %.1f liter\n", bhanbkr);
   printf("Bayar : "); scanf("%le",&bayar);
   if ((bayar == uang) || (bayar >= uang)){
          kembalian=bayar-uang;
          printf("Kembalian : %1.f\n", kembalian);
          printf("Terima kasih silakan berkunjung kembali\n");
    }else{
       printf("Uang yang anda masukkan tidak cukup\n");
       goto tidak;
        }break;
case 2:
   printf(" =======================\n"); 
   printf(" Solar = Rp.6000/Liter\n");
   printf(" =======================\n");
   printf("Masukkan uang pembayaran : "); scanf("%le", &uang);
   bhanbkr= uang / 6000;
   printf("Solar %.1f liter\n", bhanbkr);
   printf("Bayar : "); scanf("%le",&bayar);
   if ((bayar == uang) || (bayar >= uang)){
          kembalian=bayar-uang;
          printf("Kembalian : %1.f\n", kembalian);
          printf("Terima kasih silakan berkunjung kembali\n");
    }else{
       printf("Uang yang anda masukkan tidak cukup\n");
       goto tidak;
        }break;
case 3:
   printf(" =======================\n"); 
   printf(" Pertamax = Rp.10000/Liter\n");
   printf(" =======================\n");
   printf("Masukkan uang pembayaran : "); scanf("%le", &uang);
   bhanbkr= uang / 6000;
   printf("Pertamax %.1f liter\n", bhanbkr);
   printf("Bayar : "); scanf("%le",&bayar);
   if ((bayar == uang) || (bayar >= uang)){
          kembalian=bayar-uang;
          printf("Kembalian : %1.f\n", kembalian);
          printf("Terima kasih silakan berkunjung kembali\n");
    }else{
       printf("Uang yang anda masukkan tidak cukup\n");
       goto tidak;
        }break;
case 4:
   printf(" =======================\n"); 
   printf(" Pertalite = Rp.7650/Liter\n");
   printf(" =======================\n");
   printf("Masukkan uang pembayaran : "); scanf("%le", &uang);
   bhanbkr= uang / 6000;
   printf("Pertalite %.1f liter\n", bhanbkr);
   printf("Bayar : "); scanf("%le",&bayar);
   if ((bayar == uang) || (bayar >= uang)){
          kembalian=bayar-uang;
          printf("Kembalian : %1.f\n", kembalian);
          printf("Terima kasih silakan berkunjung kembali\n");
    }else{
       printf("Uang yang anda masukkan tidak cukup\n");
       goto tidak;
        }break;
case 5:
   printf(" =======================\n"); 
   printf(" Pertamax dex = Rp.11000/Liter\n");
   printf(" =======================\n");
   printf("Masukkan uang pembayaran : "); scanf("%le", &uang);
   bhanbkr= uang / 6000;
   printf("Pertamax dex %.1f liter\n", bhanbkr);
   printf("Bayar : "); scanf("%le",&bayar);
   if ((bayar == uang) || (bayar >= uang)){
          kembalian=bayar-uang;
          printf("Kembalian : %1.f\n", kembalian);
          printf("Terima kasih silakan berkunjung kembali\n");
    }else{
       printf("Uang yang anda masukkan tidak cukup\n");
       goto tidak;
        }break;
case 6:
   printf(" =======================\n"); 
   printf(" pertamax dexlite = Rp.12600/Liter\n");
   printf(" =======================\n");
   printf("Masukkan uang pembayaran : "); scanf("%le", &uang);
   bhanbkr= uang / 6000;
   printf("Pertamax dexlite %.1f liter\n", bhanbkr);
   printf("Bayar : "); scanf("%le",&bayar);
   if ((bayar == uang) || (bayar >= uang)){
          kembalian=bayar-uang;
          printf("Kembalian : %1.f\n", kembalian);
          printf("Terima kasih silakan berkunjung kembali\n");
    }else{
       printf("Uang yang anda masukkan tidak cukup\n");
       goto tidak;
        }break;
case 7:
   printf(" =======================\n"); 
   printf(" Pertamax turbo = Rp.15000/Liter\n");
   printf(" =======================\n");
   printf("Masukkan uang pembayaran : "); scanf("%le", &uang);
   bhanbkr= uang / 6000;
   printf("Pertamax turbo %.1f liter\n", bhanbkr);
   printf("Bayar : "); scanf("%le",&bayar);
   if ((bayar == uang) || (bayar >= uang)){
          kembalian=bayar-uang;
          printf("Kembalian : %1.f\n", kembalian);
          printf("Terima kasih silakan berkunjung kembali\n");
    }else{
       printf("Uang yang anda masukkan tidak cukup\n");
       goto tidak;
        }break;

default:
    printf("Maaf Pilihan anda tidak tersedia\n\n");
}
    }
       tidak :
    printf("Kembali ke menu utama [Y/T] ? "); 
    kem = getche();
    if (kem == 'y' || kem == 'Y')
    goto mulai;
 else if (kem == 't' || kem == 'T')
     {
         printf("\n--------------------------");
         printf("\n==========================");
         printf("\n\n...... TERIMA KASIH ......\n\n");
         printf("==========================");
         printf("\n--------------------------");
            }
     return 0;
  }    