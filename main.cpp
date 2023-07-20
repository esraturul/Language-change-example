// Qt projesi (main.cpp)
#include <QApplication>
#include <QMessageBox>
#include <QLibrary>
#include "SlotDll.hpp"

// Slot işlevi
void handleSlot(int value)
{
    qDebug() << "Slot çalıştı: " << value;
}

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);


    // DLL yükleniyor
    QLibrary lib("SignalDLL.dll");
    if (!lib.load())
    {
        QMessageBox::critical(nullptr, "Hata", "DLL yüklenemedi!");
            return 1;
    }

    // MyWidget oluşturuluyor
    SlotDll slotdll;
    // Slot işlevini MyWidget'e kaydet
    slotdll.setSlotCallback(handleSlot);

    slotdll.show();
    return a.exec();
}

