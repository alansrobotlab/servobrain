#ifndef CONFIGURATION_H
#define CONFIGURATION_H


#if (0)
  // Proof of Concept Configuration for digispark
  //#define LED     1  // no LED in POC
  #define SERVOPIN  1
  #define SENSORPIN 0  //digital 5 is adc channel 0
#elif (0)
  //Prototype Configuration
  #define LEDPIN    1  // no LED in POC
  #define SERVOPIN  3
  #define SENSORPIN 2  //digital 4 is adc channel 2
#else
  //V4.1 Configuration
  #define LEDPIN    1  // no LED in POC
  #define SERVOPIN  5  // reset pin for double duty
  #define SENSORPIN 2  //digital 4 is adc channel 2
#endif

#define EEPROM_SIZE 64  // total number of 16 bit words

#define MAX_SAMPLES 60
#define BATCH_SAMPLES 5


// The default buffer size, Can't recall the scope of defines right now
#ifndef TWI_RX_BUFFER_SIZE
#define TWI_RX_BUFFER_SIZE ( 32 )
#endif

#ifndef TWI_TX_BUFFER_SIZE
#define TWI_TX_BUFFER_SIZE ( 32 )
#endif


#endif
