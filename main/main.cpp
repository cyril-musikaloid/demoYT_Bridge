#include "CommunicatorBridge.h"
#include "STR.h"

CTRBridge& bridge = CTRBridge::GetInstance();

extern "C" void app_main(void)
{
	InitCores();
	bridge.begin();

	while (true)
		bridge.Update();
}
