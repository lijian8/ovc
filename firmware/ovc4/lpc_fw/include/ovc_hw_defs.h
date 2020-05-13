// In dev board I2C is connected to internal 12MHz oscillator
#define I2C_CLOCK_FREQUENCY (12000000)

#define CAM_I2C_BUF_SIZE 16
#define DEFAULT_CAM_I2C_FREQUENCY 400000

#define CAM0_I2C ((I2C_Type *)(I2C4_BASE))
#define CAM1_I2C ((I2C_Type *)(I2C1_BASE))


// SPI IMUs
#define SPI_CLOCK_FREQUENCY (12000000)
#define IMU_SPI SPI3
#define IMU_SPI_SS_NUM 0
#define IMU_SPI_BAUD 12000000
#define IMU_SPI_SPOL kSPI_SpolActiveAllLow
