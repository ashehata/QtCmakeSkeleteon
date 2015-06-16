#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mySliders = MainWindow::findChildren<QSlider*>();
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::setSliderValue(QSlider* sliderPtr, int sliderValue){
    sliderPtr->setValue(sliderValue);
    return 0;
}

void MainWindow::on_pushButton_clicked()
{
    setSliderValue(mySliders[ui->spinBox->value()], mySliders[ui->spinBox->value()]->value() + 1);
}
