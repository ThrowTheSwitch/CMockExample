#include "main.h"
#include "System.h"
#include "LedControl.h"

#ifdef TEST 
int test_main(void)     // <- because a main() function exists in test runner
#else
int main(void)
#endif
{
    while(!ShouldAbortApp())
    {
        LedControl_TurnLedOn(LED_RED);
        LedControl_TurnLedOn(LED_BLUE);

        LedControl_TurnLedOff(LED_RED);
        LedControl_TurnLedOff(LED_BLUE);
    }
}