#ifndef RFID_READER_H
#define RFID_READER_H
#include <QThread>
#include <QTimer>
#include "qextserial/qextserialport.h"

class rfid_reader : public QObject
{
    Q_OBJECT
private:
    QTimer timer;
    QextSerialPort serialPort;
    QString portName;
    bool openCOMPort();
    void closeCOMPort();
    bool first;
    unsigned missess;
    bool ending;
private slots:
    void tick();
signals:
    void rfid(QString);
    void norfid();
public:
    rfid_reader(QString pPort);
    bool start();
    void stop();
    QString prevRFID;
};

#endif // RFID_READER_H
