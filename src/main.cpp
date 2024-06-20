#include <Arduino.h>

#include <CommunicatorBridge.h>
#include <HardwareSerialCommunicator.h>

CTRBridge* bridge = nullptr;

//uint8_t mac [] = {0x24, 0xDC, 0xC3, 0x99, 0xE0, 0x68};

void setup() {
  bridge = CTRBridge::CreateInstance(HardwareSerialCTR::CreateInstance(9600));

}

void loop() {
  bridge->Update();
}