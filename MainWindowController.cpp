#include "MainWindowController.h"
#include "MainWindow.h"
#include "BoardInput.h"
MainWindowController::MainWindowController(MainWindow* appMainWindow)
{
    myMainWindow = appMainWindow;
    mySliders.resize(8);

}


void MainWindowController::setSliderValue(int value){
}
