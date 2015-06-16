#include <iostream>
#include "MainWindow.h"
#include <QApplication>
#include <QMainWindow>
#include "MainWindowController.h"
using namespace std;

int main(int argc, char** argv)
{
    QApplication* myApp = new QApplication(argc,argv);
    MainWindow* myMainWindow = new MainWindow();
    myMainWindow->show();
    MainWindowController* myMainWindowController = new MainWindowController(myMainWindow);
    myApp->exec();
}

