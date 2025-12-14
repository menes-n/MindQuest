#include <iostream>
using namespace std;

struct soru { // bu kismi daha iyi nasil yapacagimi yapay zeka kullanarak ogrendim.
    string soruMetni;
    string dogruCevap;
};

void cikis() {
    cout << "Programdan cikiliyor..." << endl;
}

void basla(soru sorular[], int soruSayisi) {
    int puan = 0;
    string cevap;
    cout << "Test basliyor..." << endl;

    for (int i = 0; i < soruSayisi; i++) {
        cout << i + 1 << ". Soru: " << endl;
        cout << sorular[i].soruMetni << endl;
        cout << "Cevabiniz: ";
        cin >> cevap;

        if (cevap == "cikis") {
            cikis();
            break;
        } else if (cevap == sorular[i].dogruCevap) {
            cout << "Cevabiniz dogru! +10 puan." << endl;
            puan += 10;
        } else {
            cout << "Cevabiniz yanlis! -5 puan." << endl;
            puan -= 5;
        }
    }

    cout << "\nToplam puaniniz: " << puan << endl;

    if (puan <= 20) {
        cout << "Daha cok calismalisin." << endl;
    } else if (puan <= 60) {
        cout << "Fena degil, gelistirebilirsin." << endl;
    } else {
        cout << "Harika, cok zekisin!" << endl;
    }
}

int main() {
    soru sorular[] = {
        {"Bir saatin akrep ve yelkovani gunde kac kez ust uste gelir?", "22"},
        {"Turkiye Cumhuriyeti hangi yil ilan edilmistir?", "1923"},
        {"Istanbulun fethi hangi yilda gerceklesmistir?", "1453"},
        {"Dunyada kac kita vardir?", "7"},
        {"Bir yil kac hafta icerir?", "52"},
        {"Ilk insanli Ay yolculugu hangi yilda gerceklesti?", "1969"},
        {"Internette kullanilan IPv4 adresleri kac bitliktir?", "32"},
        {"Bir byte kac bit icerir?", "8"},
        {"Dunyanin en uzun nehri Nil Nehri yaklasik kac kilometredir?", "6650"},
        {"Turk alfabesinde kac harf vardir?", "29"},
    };

    int secim;
    cout << "-Bilgi Oyunu-" << endl;
    cout << "1. Teste Basla" << endl;
    cout << "2. Cikis" << endl;
    cout << "Seciminiz: ";
    cin >> secim;

    if (secim == 1) {
        basla(sorular, 10);
    } else if (secim == 2) {
        cikis();
    } else {
        cout << "Gecersiz Secim" << endl;
    }

    return 0;
}
