#ifndef YUVDEBUGWINDOW_H
#define YUVDEBUGWINDOW_H

#include <QDialog>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QLabel>

class YuvDebugWindow : public QDialog
{
    Q_OBJECT
public:
    explicit YuvDebugWindow(QWidget *parent = 0);

    QScrollArea *scrollArea;
    QLabel *imageLabel;
    //QImage yuvImage;
    
signals:
    
public slots:
    
};

#endif // YUVDEBUGWINDOW_H
