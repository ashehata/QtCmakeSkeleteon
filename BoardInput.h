#ifndef BOARDINPUT_H
#define BOARDINPUT_H
#include "MainWindow.h"
#include <QSlider>
using namespace std;
using namespace Qt;
class BoardInput
{
public:
    BoardInput();
    void setInputType(int type);
    int getInputType();
    void setInputIndex(int index);
    int getInputIndex();
    void setInputValue(int value);
    int getInputValue();
private:
    int inputType; //0: slider, 1: dial, 2:button
    int inputIndex;
    int inputValue;
};

#endif // BOARDINPUT_H
