  #include <Arduino.h>

  #include <LiquidCrystal_I2C.h>
  LiquidCrystal_I2C lcd(0x27, 16, 2);
  
  // Teks 1-5
  // Mendeklarasikan dan menginisialisasi sebuah variabel
  // bernama teks1 yang bertipe data String
  // dengan nilai awal "Selamat Datang"
  String teks1 = "Latihan Arduino";
  
  String teks2 = "Simulasi LCD I2C";
  String teks3 = "BQ Islamic School";
  String teks4 = "Arduino Uno ";
  String teks5 = "Muhammad Fadil";
  String teks6 = "Kelas 8B ";
  
  void setup() {
  // Inisialisasi LCD 
  lcd.init();
  
  // Nyalakan lampu latar 
  lcd.backlight();
  }
  
  
  
  void loop(){
  
  // Teks 1 
  lcd.setCursor(0, 0); 
  lcd.print(teks1);
  
  // Teks 2
  lcd.setCursor(0, 1);
  lcd.print(teks2);
  
  // Menunda eksekusi program selama 2000 milidetik atau 2 detik 
  delay(2000);
  
  // Menghapus seluruh tampilan pada layar LCD 
  lcd.clear();
  
  // Membuat Teks 3 bergeser ke kiri
  for (int i= teks3.length() - 1; i >= 0; i--) {
  lcd.setCursor(0, 0);
  lcd.print(teks3.substring(i));
  delay(250);
  }
  
  delay(2000);
  
  // Membuat Teks 4 Muncul satu persatu
  for (int i=0; i < teks4.length(); i++) {
  lcd.setCursor(0, 1);
  lcd.print(teks4.substring(0, i + 1));
  delay(250);
  }
  
  delay(3000);
  
  lcd.clear();
  
  //teks 5
  lcd.setCursor(0, 0);
  lcd.print(teks5);
  
  //teks 6
  lcd.setCursor(0, 1);
  lcd.print(teks6);
  
  delay(2000);
  
  lcd.clear();
  
  }