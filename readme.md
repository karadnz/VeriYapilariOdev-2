
# Veri Yapıları Ödev - 2

SAU 2022-23 Güz dönemi Veri Yapıları dersi 2. Ödevi


## İstenenler 

  * Verilen txt dosyasındaki satırları okuyup satırdaki her bir sayıdan bir `Hücre` nesnesi her satırdan ise bir `Doku` nesnesi oluşturup `Hücre` nesnelerini `Doku` nesnesi içinde saklamak.

  * `Doku` nesnelerininin içindeki `Hücre` nesnelerini `DNA uzunluk` larına göre `Queue` yapısını kullanarak `RadixSort` ile sıralamak. 
  
  * Sıralanmış `Doku` nesnelerini ortadaki sayıya göre `Organ` nesnesinde bulunan `Binary Search Tree` ye yerleştirmek.(Bir `Organ` 20 tane `Doku` tutacak.)

  * Oluşturulan `Organ` ları `Sistem` nesnesine koymak.(Bir `Sistem` 100 tane `Organ` tutacak).

  * Oluşturulan `Sistem` nesnelerini `Organizma` nesnesine koymak (Sayı sınırı yok).

  * `Organizma`da bulunan `Sistem`ler bir satırı, `Sistem`de bulunan `Organlar` ise bir karakteri temsil edecek şekilde istenen kurala göre `Organizma`yı ekrana yazdırmak.(Kural: `Organ`da bulunan `Binary Search Tree` AVL mantığına göre dengeli ise `"boşluk"` dengeli değil ise `"#"` karakteri yazdırılacaktır.).
  
  * Kullanıcı tuşa bastığında `Organizma` istenen kurala göre mutasyon geçirip, mutasyonlu `Binary Search Tree`ler `postOrder` mantığıyla bir diziye aktarılıp o diziden okunarak yeniden oluşturularak mutasyonlu `Organimza` ekrana yazdırılacaktır.

  * Mutasyon kuralı : `Binary Search Tree`lerin `root`unda bulunan `Doku`nun ortasındaki sayı 50'ye tam bölünüyorsa o ağacın `Doku`larındaki tüm `Hücre`ler çift ise yarıya bölünecek tek ise bir işlem uygulanmayacaktır.

  * Programda çöp hafıza oluşmamalıdır.
  


## Programın İşleyişi

* Oluşacak `Doku` `Organ` `Sistem` `Organizma` sayıları belirlenir.
* Belirlenen sayılara göre `Veri.txt` dosyasındaki verilerden nesneler oluşturulur.
* `Organizma` belirlenen kurala göre ekrana yazdırılır.
* Kullanıcı herhangi bir tuşa bastığında `Kontrol` nesnesinden mutasyon işlemi başlatılır mutasyon sonucu ekrana yazdırılır.
* Kullanıcı tekrar herhangi bir tuşa bastığında heap de oluşan nesneler çöp bırakmayacak şekilde silinir ve programdan çıkış yapılır.
## Hazırlayan

- Mustafa Karadeniz G211210066 / 2-A


