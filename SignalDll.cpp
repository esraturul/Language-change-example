#include "SignalDll.hpp"


void emitSignal(SignalCallback callback, int value)
{
    if (callback)
    {
        callback(value);
    }
}
