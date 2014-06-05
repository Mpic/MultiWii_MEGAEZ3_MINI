/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}


#include "C:\Program Files\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Program Files\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\MultiWii_MEGAEZ3_MINI.ino"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Alarms.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Alarms.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\EEPROM.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\EEPROM.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\GPS.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\GPS.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\IMU.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\IMU.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\LCD.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\LCD.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\MultiWii.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\MultiWii.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Output.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Output.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Protocol.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Protocol.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\RX.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\RX.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Sensors.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Sensors.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Serial.cpp"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\Serial.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\config.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\def.h"
#include "D:\Dropbox\1-Projets\TFE Quadricopter\MWC 2.3 files - MEGAMINI\MultiWii_MEGAEZ3_MINI\types.h"
