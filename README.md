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

- C++ Shell üzerinde çalıştırmak için [tıklayın](https://cpp.sh/?source=%23include+%3Ciostream%3E%0D%0Ausing+namespace+std%3B%0D%0A%0D%0Astruct+soru+%7B+%2F%2F+bu+kismi+daha+iyi+nasil+yapacagimi+yapay+zeka+kullanarak+ogrendim.%0D%0A++++string+soruMetni%3B%0D%0A++++string+dogruCevap%3B%0D%0A%7D%3B%0D%0A%0D%0Avoid+cikis()+%7B%0D%0A++++cout+%3C%3C+%22Programdan+cikiliyor...%22+%3C%3C+endl%3B%0D%0A%7D%0D%0A%0D%0Avoid+basla(soru+sorular%5B%5D%2C+int+soruSayisi)+%7B%0D%0A++++int+puan+%3D+0%3B%0D%0A++++string+cevap%3B%0D%0A++++cout+%3C%3C+%22Test+basliyor...%22+%3C%3C+endl%3B%0D%0A%0D%0A++++for+(int+i+%3D+0%3B+i+%3C+soruSayisi%3B+i%2B%2B)+%7B%0D%0A++++++++cout+%3C%3C+i+%2B+1+%3C%3C+%22.+Soru%3A+%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+sorular%5Bi%5D.soruMetni+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22Cevabiniz%3A+%22%3B%0D%0A++++++++cin+%3E%3E+cevap%3B%0D%0A%0D%0A++++++++if+(cevap+%3D%3D+%22cikis%22)+%7B%0D%0A++++++++++++cikis()%3B%0D%0A++++++++++++break%3B%0D%0A++++++++%7D+else+if+(cevap+%3D%3D+sorular%5Bi%5D.dogruCevap)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Cevabiniz+dogru!+%2B10+puan.%22+%3C%3C+endl%3B%0D%0A++++++++++++puan+%2B%3D+10%3B%0D%0A++++++++%7D+else+%7B%0D%0A++++++++++++cout+%3C%3C+%22Cevabiniz+yanlis!+-5+puan.%22+%3C%3C+endl%3B%0D%0A++++++++++++puan+-%3D+5%3B%0D%0A++++++++%7D%0D%0A++++%7D%0D%0A%0D%0A++++cout+%3C%3C+%22%5CnToplam+puaniniz%3A+%22+%3C%3C+puan+%3C%3C+endl%3B%0D%0A%0D%0A++++if+(puan+%3C%3D+20)+%7B%0D%0A++++++++cout+%3C%3C+%22Daha+cok+calismalisin.%22+%3C%3C+endl%3B%0D%0A++++%7D+else+if+(puan+%3C%3D+60)+%7B%0D%0A++++++++cout+%3C%3C+%22Fena+degil%2C+gelistirebilirsin.%22+%3C%3C+endl%3B%0D%0A++++%7D+else+%7B%0D%0A++++++++cout+%3C%3C+%22Harika%2C+cok+zekisin!%22+%3C%3C+endl%3B%0D%0A++++%7D%0D%0A%7D%0D%0A%0D%0Aint+main()+%7B%0D%0A++++soru+sorular%5B%5D+%3D+%7B%0D%0A++++++++%7B%22Bir+saatin+akrep+ve+yelkovani+gunde+kac+kez+ust+uste+gelir%3F%22%2C+%2222%22%7D%2C%0D%0A++++++++%7B%22Turkiye+Cumhuriyeti+hangi+yil+ilan+edilmistir%3F%22%2C+%221923%22%7D%2C%0D%0A++++++++%7B%22Istanbulun+fethi+hangi+yilda+gerceklesmistir%3F%22%2C+%221453%22%7D%2C%0D%0A++++++++%7B%22Dunyada+kac+kita+vardir%3F%22%2C+%227%22%7D%2C%0D%0A++++++++%7B%22Bir+yil+kac+hafta+icerir%3F%22%2C+%2252%22%7D%2C%0D%0A++++++++%7B%22Ilk+insanli+Ay+yolculugu+hangi+yilda+gerceklesti%3F%22%2C+%221969%22%7D%2C%0D%0A++++++++%7B%22Internette+kullanilan+IPv4+adresleri+kac+bitliktir%3F%22%2C+%2232%22%7D%2C%0D%0A++++++++%7B%22Bir+byte+kac+bit+icerir%3F%22%2C+%228%22%7D%2C%0D%0A++++++++%7B%22Dunyanin+en+uzun+nehri+Nil+Nehri+yaklasik+kac+kilometredir%3F%22%2C+%226650%22%7D%2C%0D%0A++++++++%7B%22Turk+alfabesinde+kac+harf+vardir%3F%22%2C+%2229%22%7D%2C%0D%0A++++%7D%3B%0D%0A%0D%0A++++int+secim%3B%0D%0A++++cout+%3C%3C+%22-Bilgi+Oyunu-%22+%3C%3C+endl%3B%0D%0A++++cout+%3C%3C+%221.+Teste+Basla%22+%3C%3C+endl%3B%0D%0A++++cout+%3C%3C+%222.+Cikis%22+%3C%3C+endl%3B%0D%0A++++cout+%3C%3C+%22Seciminiz%3A+%22%3B%0D%0A++++cin+%3E%3E+secim%3B%0D%0A%0D%0A++++if+(secim+%3D%3D+1)+%7B%0D%0A++++++++basla(sorular%2C+10)%3B%0D%0A++++%7D+else+if+(secim+%3D%3D+2)+%7B%0D%0A++++++++cikis()%3B%0D%0A++++%7D+else+%7B%0D%0A++++++++cout+%3C%3C+%22Gecersiz+Secim%22+%3C%3C+endl%3B%0D%0A++++%7D%0D%0A%0D%0A++++return+0%3B%0D%0A%7D)

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

