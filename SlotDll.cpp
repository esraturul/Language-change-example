
#include "SlotDll.hpp"
#include <QPushButton>
#include <QDebug>

SlotDll::SlotDll(QWidget *parent) : QWidget(parent)
{
    QPushButton *button = new QPushButton("Click me", this);
    connect(button, &QPushButton::clicked, this, &SlotDll::handleButtonClicked);
}

void SlotDll::setSlotCallback(SlotCallback callback)
{
    m_slotCallback = callback;
}

void SlotDll::handleButtonClicked()
{
    if (m_slotCallback)
    {
        // Slotu çağır
        m_slotCallback(42);
    }
}
