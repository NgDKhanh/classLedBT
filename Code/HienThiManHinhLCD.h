/* ý nghĩa: Điều hiển thị trên màn hình lcd 16x2 i2c
 * Người viết: Tuyền
 * cập nhật cuối: 07/07/2022 
 * 
 */

void LCD_CaiDat();
void LCD_KhoiTao();
void LCD_DieuKhien();
void LCD_Menu1();
void LCD_Menu2();

/**
 * @brief Cai dat man hinh LCD
 * 
 */
void LCD_CaiDat()
{
  lcd.begin();
  lcd.backlight();
  lcd.display();
}
/**
 * @brief Khoi tao man hinh, in ra dong 1: SPARC LAB 2, dong 2: hardware team
 * 
 */
void LCD_KhoiTao()
{
  lcd.setCursor(0, 0);
  lcd.print("SPARC LAB 2");
  lcd.setCursor(0, 1);
  lcd.print("hardware team");
}
/**
 * @brief dieu khien man hinh dua vao TRANG_THAI_DEN
 * 
 */
void LCD_DieuKhien()
{
  switch(trangThai)
  {
    case KHOI_DONG_GIA_TRI:
            KhoiTaoHienThi();
        break;
        
    case BAT_TAT_CA_DEN:
            HienThiMenu1();
        break;
        
    case BAT_LAN_LUOT:
            HienThiMenu2();
        break;
        
  }
}
/**
 * @brief hien thi menu 1: nhiet do, do am
 * 
 */
void LCD_Menu1()
{
/*
                  ---------------------------------
                  |  nhiet do : 27*C              |
                  |  do am    : 70%               |
                  ---------------------------------
 */
  lcd.setCursor(0, 0);
  lcd.print("nhiet do : ");
  lcd.print(docNhietDo());
  lcd.setCursor(0, 1);
  lcd.print("do am    : ");
  lcd.print(docDoAm());
}
/**
 * @brief hien thi menu 2: trang thai den gom 3 mau: r, g, b
 * 
 */
void LCD_Menu2()
{
/*
                  ---------------------------------
                  |        Trang thai den:        |
                  |       r[x]  g[o]   b[o]       |
                  ---------------------------------
 */
  lcd.setCursor(0, 0);
  lcd.print("Trang thai den:");
  lcd.setCursor(0, 1);
  lcd.print("r[");
  if(led1.isOn())
    lcd.print("x]");
  else
    lcd.print("o]");
  lcd.print("g[");
  if(led2.isOn())
    lcd.print("x]");
  else
    lcd.print("o]");
  lcd.print("b[");
  if(led3.isOn())
    lcd.print("x]");
  else
    lcd.print("o]");
    
}