/* ý nghĩa: Điều hiển thị trên màn hình lcd 16x2 i2c
 * Người viết: Tuyền
 * cập nhật cuối: 07/07/2022 
 * 
 */
#include <DHT.h>

#ifdef DHT_SENSOR
  DHT camBienNhietAm(DHT_PIN, DHT11);
#endif
#ifdef SHT_SENSOR
//
#endif

void KhoiTaoNhietAm();
int docNhietDo();
int docDoAm();


void KhoiTaoNhietAm()
{
  camBienNhietAm.begin();
}
int docNhietDo()
{
  return (int)camBienNhietAm.readTemperature();
}
int docDoAm()
{
    return (int)camBienNhietAm.readHumidity();
}
