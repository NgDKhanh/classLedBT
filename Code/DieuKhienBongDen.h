/* ý nghĩa: Điều khiển bóng đèn bằng nút nhấn
 * Người viết: Tuyền
 * cập nhật cuối: 07/07/2022 
 * 
 */
void CaiDatDriver();
void KiemTraNutNhan();
void DieuKhienLed();
void LedTatHet();
void LedBatHet();
void LedLanLuot();

void CaiDatDriver()
{
  led1.init();
  led2.init();
  led3.init();
  bt1.init();
  bt2.init();
}
void KiemTraNutNhan()
{
  if(bt1.getState() == 1)
  {
    trangThai = BAT_TAT_CA_DEN;
  }
  if(bt2.getState() == 1)
  {
    trangThai = BAT_LAN_LUOT;
  }
}
void DieuKhienLed()
{
  switch(trangThai)
  {
    case KHOI_DONG_GIA_TRI:
            LedTatHet();
        break;
        
    case BAT_TAT_CA_DEN:
            LedBatHet();
        break;
        
    case BAT_LAN_LUOT:
            if( not daAnLapRoi) 
            {
              thoi_gian_bau_dau_lap = millis();
              daAnLapRoi = true;
            }
            if ( daAnLapRoi ) {}
            LedLanLuot();
        break;
        
  }
}
void LedTatHet()
{
  led1.turnOff();
  led2.turnOff();
  led3.turnOff();
}
void LedBatHet()
{
  led1.turnOn();
  led2.turnOn();
  led3.turnOn();
}
void LedLanLuot()
{
  // millis() = thời gian chương trình đang chạy
  if(millis() - thoi_gian_bau_dau_lap > 2 * THOI_GIAN_GIUA_CAC_LED)
  {
    led1.turnOff();
    led2.turnOff();
    led3.turnOn();
  }
  else if(millis() - thoi_gian_bau_dau_lap >  THOI_GIAN_GIUA_CAC_LED) // nguoi yeu goi delay 2 phut
  {
    led1.turnOff();
    led2.turnOn();
    led3.turnOff();
  }
  else if(millis() - thoi_gian_bau_dau_lap <=  THOI_GIAN_GIUA_CAC_LED)
  {
    led1.turnOn();
    led2.turnOff();
    led3.turnOff();
  }
  else
  {
    thoi_gian_bau_dau_lap = millis();
  }
}
