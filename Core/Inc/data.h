#ifndef INC_DATA_H_
#define INC_DATA_H_

#include <stdint.h>

// Aracın anlık durumunu tutan ana yapı
// Bu yapıyı main.c içine extern edeceğiz.
typedef struct {
    // --- GPS (UBX Protokolü ile dolacak) ---
    double latitude;        // Enlem (deg)
    double longitude;       // Boylam (deg)
    float altitude;         // Yükseklik (m)
    float velN;             // Kuzey Hızı (m/s)
    float velE;             // Doğu Hızı (m/s)
    float velD;             // Aşağı Hızı (m/s)
    float heading;          // Hareket Yönü (deg)
    uint8_t fixType;        // 0=No, 3=3D, 4=DGNSS
    uint8_t numSV;          // Uydu Sayısı
    
    // --- IMU (Sensörden gelecek) ---
    float accel[3];         
    float gyro[3];          

    float temperature;
    float pressure;
    float humidity;
    
    // --- Sistem ---
    uint32_t last_update;   // Son güncelleme zamanı (ms)

} VehicleState_t;



#endif /* INC_DATA_H_ */