#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int setSliderValue(QSlider* sliderPtr, int sliderValue);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QList<QSlider*> mySliders;
};

#endif // MAINWINDOW_H
