# 🎮 MindQuest

> *"Bilgini test et, zekânı zorla ve zirveye yüksel!"*

**MindQuest**, C++ ile geliştirilmiş basit ama etkili bir **bilgi yarışması oyunu**.  
Oyunculara 10 farklı genel kültür sorusu sorulur. Doğru cevaplar puan kazandırır, yanlış cevaplar puan kaybettirir.  
Oyun sonunda ise **kişiselleştirilmiş motivasyon mesajları** ile bilgi seviyen ölçülür.  

---

## ✨ Özellikler (Features)

- 🎯 Soru Havuzu
Oyunculara farklı kategorilerden seçilmiş 10 genel kültür sorusu sunar.

- 🧠 Zekâ ve Bilgi Testi
Doğru cevaplar +10 puan kazandırırken, yanlış cevaplar -5 puan düşürür.
Böylece oyuncunun bilgi seviyesi net bir şekilde ölçülür.

- ⚡ Dinamik Oyun Akışı
Her soru sırasıyla ekrana gelir, oyuncu anında cevap verir.
"cikis" komutu ile oyunu istediğin anda sonlandırabilirsin.

- 🔧 Geliştirilebilir Yapı
Yeni sorular eklemek ve sistemi geliştirmek çok kolay  

- 🏆 Motivasyon Sistemi
Oyun sonunda toplam puana göre kişiselleştirilmiş geri bildirim mesajları verir:
  - Düşük puan → “Daha çok çalışmalısın.”
  - Orta puan → “Fena değil, geliştirebilirsin.”
  - Yüksek puan → “Harika, çok zekisin!”

💻 Kolay Çalıştırma
- Tek bir main.cpp dosyası ile derlenip çalıştırılabilir.
  Platform bağımsızdır, C++11 ve üzeri tüm derleyicilerde sorunsuz çalışır.

- C++ Shell üzerinde çalıştırmak için [tıklayın](https://cpp.sh/?source=%23include+%3Ciostream%3E%0D%0A%23include+%3Cstring%3E%0D%0Ausing+namespace+std%3B%0D%0A%0D%0A%2F%2F+Caesar+sifreleme%0D%0Astring+sifrele(string+metin%2C+int+kaydirma)+%7B%0D%0A++++string+sonuc+%3D+%22%22%3B%0D%0A++++kaydirma+%3D+(kaydirma+%25+26+%2B+26)+%25+26%3B%0D%0A++++for+(char+c+%3A+metin)+%7B%0D%0A++++++++if+(isupper(c))+%7B%0D%0A++++++++++++sonuc+%2B%3D+char((c+-+%27A%27+%2B+kaydirma)+%25+26+%2B+%27A%27)%3B%0D%0A++++++++%7D+else+if+(islower(c))+%7B%0D%0A++++++++++++sonuc+%2B%3D+char((c+-+%27a%27+%2B+kaydirma)+%25+26+%2B+%27a%27)%3B%0D%0A++++++++%7D+else+%7B%0D%0A++++++++++++sonuc+%2B%3D+c%3B%0D%0A++++++++%7D%0D%0A++++%7D%0D%0A++++return+sonuc%3B%0D%0A%7D%0D%0A%0D%0A%2F%2F+Caesar+cozme%0D%0Astring+coz(string+metin%2C+int+kaydirma)+%7B%0D%0A++++string+sonuc+%3D+%22%22%3B%0D%0A++++kaydirma+%3D+(kaydirma+%25+26+%2B+26)+%25+26%3B%0D%0A++++for+(char+c+%3A+metin)+%7B%0D%0A++++++++if+(isupper(c))+%7B%0D%0A++++++++++++sonuc+%2B%3D+char((c+-+%27A%27+-+kaydirma+%2B+26)+%25+26+%2B+%27A%27)%3B%0D%0A++++++++%7D+else+if+(islower(c))+%7B%0D%0A++++++++++++sonuc+%2B%3D+char((c+-+%27a%27+-+kaydirma+%2B+26)+%25+26+%2B+%27a%27)%3B%0D%0A++++++++%7D+else+%7B%0D%0A++++++++++++sonuc+%2B%3D+c%3B%0D%0A++++++++%7D%0D%0A++++%7D%0D%0A++++return+sonuc%3B%0D%0A%7D%0D%0A%0D%0A%2F%2F+Vigenere+sifreleme%0D%0Astring+vigenereSifrele(string+metin%2C+string+key)+%7B%0D%0A++++string+sonuc+%3D+%22%22%3B%0D%0A++++int+keyLen+%3D+key.size()%3B%0D%0A++++int+j+%3D+0%3B%0D%0A++++for+(char+c+%3A+metin)+%7B%0D%0A++++++++if+(isupper(c))+%7B%0D%0A++++++++++++sonuc+%2B%3D+char((c+-+%27A%27+%2B+(toupper(key%5Bj+%25+keyLen%5D)+-+%27A%27))+%25+26+%2B+%27A%27)%3B%0D%0A++++++++++++j%2B%2B%3B%0D%0A++++++++%7D+else+if+(islower(c))+%7B%0D%0A++++++++++++sonuc+%2B%3D+char((c+-+%27a%27+%2B+(tolower(key%5Bj+%25+keyLen%5D)+-+%27a%27))+%25+26+%2B+%27a%27)%3B%0D%0A++++++++++++j%2B%2B%3B%0D%0A++++++++%7D+else+%7B%0D%0A++++++++++++sonuc+%2B%3D+c%3B%0D%0A++++++++%7D%0D%0A++++%7D%0D%0A++++return+sonuc%3B%0D%0A%7D%0D%0A%0D%0A%2F%2F+Vigenere+cozme%0D%0Astring+vigenereCoz(string+metin%2C+string+key)+%7B%0D%0A++++string+sonuc+%3D+%22%22%3B%0D%0A++++int+keyLen+%3D+key.size()%3B%0D%0A++++int+j+%3D+0%3B%0D%0A++++for+(char+c+%3A+metin)+%7B%0D%0A++++++++if+(isupper(c))+%7B%0D%0A++++++++++++sonuc+%2B%3D+char((c+-+%27A%27+-+(toupper(key%5Bj+%25+keyLen%5D)+-+%27A%27)+%2B+26)+%25+26+%2B+%27A%27)%3B%0D%0A++++++++++++j%2B%2B%3B%0D%0A++++++++%7D+else+if+(islower(c))+%7B%0D%0A++++++++++++sonuc+%2B%3D+char((c+-+%27a%27+-+(tolower(key%5Bj+%25+keyLen%5D)+-+%27a%27)+%2B+26)+%25+26+%2B+%27a%27)%3B%0D%0A++++++++++++j%2B%2B%3B%0D%0A++++++++%7D+else+%7B%0D%0A++++++++++++sonuc+%2B%3D+c%3B%0D%0A++++++++%7D%0D%0A++++%7D%0D%0A++++return+sonuc%3B%0D%0A%7D%0D%0A%0D%0A%2F%2F+Caesar+brute+force%0D%0Avoid+bruteForce(string+metin)+%7B%0D%0A++++char+cevap%3B%0D%0A++++int+tur+%3D+1%3B%0D%0A++++while+(true)+%7B%0D%0A++++++++bool+bulundu+%3D+false%3B%0D%0A++++++++cout+%3C%3C+%22%5Cn%3D%3D%3D+TUR+%22+%3C%3C+tur+%3C%3C+%22+BASLIYOR+%3D%3D%3D%5Cn%22+%3C%3C+endl%3B%0D%0A++++++++for+(int+kaydirmaDegeri+%3D+1%3B+kaydirmaDegeri+%3C+26%3B+kaydirmaDegeri%2B%2B)+%7B%0D%0A++++++++++++cout+%3C%3C+%22-----------------------------%22+%3C%3C+endl%3B%0D%0A++++++++++++cout+%3C%3C+%22Kaydirma+degeri%3A+%22+%3C%3C+kaydirmaDegeri+%3C%3C+endl%3B%0D%0A++++++++++++cout+%3C%3C+%22Cozum%3A+%22+%3C%3C+coz(metin%2C+kaydirmaDegeri)+%3C%3C+endl%3B%0D%0A++++++++++++cout+%3C%3C+%22Bu+mu%3F+(E%2FH)%3A+%22%3B%0D%0A++++++++++++cin+%3E%3E+cevap%3B%0D%0A++++++++++++cout+%3C%3C+%22-----------------------------%22+%3C%3C+endl%3B%0D%0A%0D%0A++++++++++++if+(cevap+%3D%3D+%27E%27+%7C%7C+cevap+%3D%3D+%27e%27)+%7B%0D%0A++++++++++++++++cout+%3C%3C+%22%5Cn***+Dogru+metin+bulundu!+***%22+%3C%3C+endl%3B%0D%0A++++++++++++++++cout+%3C%3C+%22Kaydirma+degeri%3A+%22+%3C%3C+kaydirmaDegeri+%3C%3C+endl%3B%0D%0A++++++++++++++++cout+%3C%3C+%22Toplam+tur%3A+%22+%3C%3C+tur+%3C%3C+endl%3B%0D%0A++++++++++++++++bulundu+%3D+true%3B%0D%0A++++++++++++++++break%3B%0D%0A++++++++++++%7D%0D%0A++++++++%7D%0D%0A++++++++if+(bulundu)+break%3B%0D%0A++++++++cout+%3C%3C+%22%5CnTum+kaydirma+degerlerine+Hayir+dediniz.+Tekrar+kontrol+ediniz...%5Cn%22+%3C%3C+endl%3B%0D%0A++++++++tur%2B%2B%3B%0D%0A++++%7D%0D%0A%7D%0D%0A%0D%0Aint+main()+%7B%0D%0A++++int+secim%3B%0D%0A++++string+metin%3B%0D%0A++++int+kaydirma%3B%0D%0A++++string+key%3B%0D%0A++++char+devam%3B%0D%0A%0D%0A%0D%0A++++while+(true)+%7B%0D%0A++++++++cout+%3C%3C+%22----------------------------------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22---------+Cipher+Program+---------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22----------------------------------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22---------------------------------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%221.+Caesar+ile+metin+sifrele%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22---------------------------------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%222.+Caesar+ile+sifrelenmis+metni+coz+(kaydirma+degeri+biliniyor)%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22----------------------------------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%223.+Caesar+brute+force+coz+(kaydirma+degeri+bilinmiyor)%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22----------------------------------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%224.+Vigenere+ile+metin+sifrele%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22----------------------------------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%225.+Vigenere+ile+sifrelenmis+metni+coz%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22----------------------------------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%226.+Cikis%22%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22----------------------------------%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22Seciminiz%3A+%22%3B%0D%0A++++++++cin+%3E%3E+secim%3B%0D%0A++++++++cin.ignore()%3B%0D%0A%0D%0A++++++++if+(secim+%3D%3D+1)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Metin+giriniz%3A+%22%3B%0D%0A++++++++++++getline(cin%2C+metin)%3B%0D%0A++++++++++++cout+%3C%3C+%22Kaydirma+degeri+giriniz%3A+%22%3B%0D%0A++++++++++++cin+%3E%3E+kaydirma%3B%0D%0A++++++++++++cout+%3C%3C+%22Sifrelenmis+metin%3A+%22+%3C%3C+sifrele(metin%2C+kaydirma)+%3C%3C+endl%3B%0D%0A++++++++%7D+else+if+(secim+%3D%3D+2)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Sifrelenmis+metin+giriniz%3A+%22%3B%0D%0A++++++++++++getline(cin%2C+metin)%3B%0D%0A++++++++++++cout+%3C%3C+%22Kaydirma+degeri+giriniz%3A+%22%3B%0D%0A++++++++++++cin+%3E%3E+kaydirma%3B%0D%0A++++++++++++cout+%3C%3C+%22Cozulmus+metin%3A+%22+%3C%3C+coz(metin%2C+kaydirma)+%3C%3C+endl%3B%0D%0A++++++++%7D+else+if+(secim+%3D%3D+3)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Sifrelenmis+metin+giriniz%3A+%22%3B%0D%0A++++++++++++getline(cin%2C+metin)%3B%0D%0A++++++++++++bruteForce(metin)%3B%0D%0A++++++++%7D+else+if+(secim+%3D%3D+4)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Metin+giriniz%3A+%22%3B%0D%0A++++++++++++getline(cin%2C+metin)%3B%0D%0A++++++++++++cout+%3C%3C+%22Anahtar+kelime+giriniz%3A+%22%3B%0D%0A++++++++++++getline(cin%2C+key)%3B%0D%0A++++++++++++cout+%3C%3C+%22Sifrelenmis+metin+(Vigenere)%3A+%22+%3C%3C+vigenereSifrele(metin%2C+key)+%3C%3C+endl%3B%0D%0A++++++++%7D+else+if+(secim+%3D%3D+5)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Sifrelenmis+metin+giriniz%3A+%22%3B%0D%0A++++++++++++getline(cin%2C+metin)%3B%0D%0A++++++++++++cout+%3C%3C+%22Anahtar+kelime+giriniz%3A+%22%3B%0D%0A++++++++++++getline(cin%2C+key)%3B%0D%0A++++++++++++cout+%3C%3C+%22Cozulmus+metin+(Vigenere)%3A+%22+%3C%3C+vigenereCoz(metin%2C+key)+%3C%3C+endl%3B%0D%0A++++++++%7D+else+if+(secim+%3D%3D+6)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Programdan+cikiliyor...%22+%3C%3C+endl%3B%0D%0A++++++++++++break%3B%0D%0A++++++++%7D+else+%7B%0D%0A++++++++++++cout+%3C%3C+%22Gecersiz+secim.+Lutfen+tekrar+deneyiniz.%22+%3C%3C+endl%3B%0D%0A++++++++%7D%0D%0A++++++++cout+%3C%3C+%22%5CnYeni+bir+islem+yapmak+ister+misiniz%3F+(E%2FH)%3A+%22%3B%0D%0A++++++++cin+%3E%3E+devam%3B%0D%0A++++++++if+(devam+%3D%3D+%27H%27+%7C%7C+devam+%3D%3D+%27h%27)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Programdan+cikiliyor...%22+%3C%3C+endl%3B%0D%0A++++++++++++break%3B%0D%0A++++++++%7D%0D%0A%0D%0A++++%7D%0D%0A%0D%0A++++return+0%3B%0D%0A%7D%0D%0A)

- Windows için hazır .exe dosyasını indirmek için [Google Drive bağlantısı](https://drive.google.com/file/d/1O0oQNGQPyurkcCu8zWTt8Lq88dS7nOBR/view?usp=sharing)

## 📂 Proje Yapısı

- main.cpp → Oyun kodu
- README.md → Proje açıklaması
- LICENSE → Lisans bilgisi

## 🛠️ Gereksinimler
- C++11 veya üstü
- Terminal/komut satırı ortamı

## 🤝 Katkı
Pull request gönderebilir veya issue açabilirsiniz.
Yeni soru eklemek, puanlama sistemini geliştirmek veya kullanıcı arayüzünü iyileştirmek için katkılarınızı bekliyoruz.

## 📜 Lisans
Bu proje MIT lisansı ile sunulmaktadır. Ayrıntılar için LICENSE dosyasına bakınız.

