#ifndef MAINWINDOWCONTROLLER_H
#define MAINWINDOWCONTROLLER_H
#include <vector>
#include "MainWindow.h"
#include "BoardInput.h"
using namespace std;
class MainWindowController
{
public:
    MainWindowController(MainWindow *appMainWindow);
    void setSliderValue(int value);
private:
    MainWindow* myMainWindow;
    vector<BoardInput> mySliders;
    vector<BoardInput> myDials;
    vector<BoardInput> myButtons;
};

#endif // MAINWINDOWCONTROLLER_H
