#ifndef SLOTDLL_HPP
#define SLOTDLL_HPP

#include <QWidget>
#include <functional>

// Slot işlev bildirimi
typedef std::function<void(int)> SlotCallback;

class SlotDll : public QWidget
{
    Q_OBJECT

public:
    explicit SlotDll(QWidget *parent = nullptr);

    void setSlotCallback(SlotCallback callback);

private:
    SlotCallback m_slotCallback;

private slots:
    void handleButtonClicked();
};

#endif // SLOTDLL_HPP
