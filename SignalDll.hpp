#ifndef SIGNALDLL_HPP
#define SIGNALDLL_HPP


#include <functional>

// Sinyal işlev bildirimi
typedef std::function<void(int)> SignalCallback;

// Sinyal tetikleyen işlev
void emitSignal(SignalCallback callback, int value);

#endif // SIGNALDLL_HPP
