#include "ledDriver.h"
#include "ButtonDriver.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Khởi tạo bóng đèn led và button
ledDriver led1(LED_GREEN_PIN);
ledDriver led2(LED_RED_PIN);
ledDriver led3(LED_BLUE_PIN);
ButtonDriver bt1(BT_1_PIN);
ButtonDriver bt2(BT_2_PIN);

enum TRANG_THAI_DEN{
  KHOI_DONG_GIA_TRI,
  BAT_TAT_CA_DEN,
  BAT_LAN_LUOT,
};


int trangThai = KHOI_DONG_GIA_TRI;
long long thoi_gian_bau_dau_lap = 0;
bool daAnLapRoi = 0;

// khởi tạo màn hình
LiquidCrystal_I2C lcd(0x27, 16, 2);


#include "DieuKhienBongDen.h"
#include "CamBienNhietAmDriver.h"
#include "HienThiManHinh.h"

void setup() {
  Serial.begin(9600);
  CaiDatDriver();
  CaiDatLCD();
}

void loop() {
  KiemTraNutNhan();
  DieuKhienLed();
  DieuKhienLCD();
}
