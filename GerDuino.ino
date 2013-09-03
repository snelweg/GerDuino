/*
GerDuino
 My attempt at an electronic garden.
 
 03 sept 2013 initial version
 
 Ton with additional code from various public examples
 */

#include <IOlcd.h>
#include <PS2Keyboard.h>
#include <DS1307RTC.h> //Required for time chip
#include <Time.h>  //Arduino Time library
#include <Wire.h>  //Used to acces the time from the chip and other I2C stuff

#define EEPROM_ADDR 0x50           // I2C Buss address of 24LC256 256K EEPROM
#define LEDPIN 13 // generic status LED
#define tm int;


void setup() {
  Wire.begin(); // join i2c bus (address optional for master)
  pinMode(LEDPIN, OUTPUT);

  //Sets up the RTC
 // if (RTC.read(tm)) {
//  }

  Serial.begin(9600);   // set the data rate for the hardware serial port
  Serial.println("");   // begin printing to debug output
  Serial.println("GerDuino starting...");
}

void loop() {
  // put your main code here, to run repeatedly: 

}




