#include "BoardInput.h"

BoardInput::BoardInput()
{
    inputType = -1;
    inputIndex = -1;
    inputValue = -1;
}

void BoardInput::setInputType(int type){
    inputType = type;
}

int BoardInput::getInputType(){
    return inputType;
}

void BoardInput::setInputIndex(int index){
    inputIndex = index;
}

int BoardInput::getInputIndex(){
    return inputIndex;
}

void BoardInput::setInputValue(int value){
    inputValue = value;
}

int BoardInput::getInputValue(){
    return inputValue;
}
