#pragma once
#include "Component.h"
#include "InputPin.h"
#include "OutputPin.h"

class Switch :
    public Component
{
private:
    OutputPin m_OutputPin;
public:

    Switch(const GraphicsInfo& r_GfxInfo, int r_FanOut = Switch_FANOUT);

    virtual void Operate();              	                //Calculates the output according to the inputs
    virtual void Draw(Output* pOut);     	                //for each component to Draw itself
    virtual void DrawFrame(Output* pOut);
    virtual int GetOutPinStatus();	                        //returns status of outputpin if LED, return -1
    virtual int GetInputPinStatus(int n);	                //returns status of Inputpin # n if SWITCH, return -1

    virtual void setInputPinStatus(int n, STATUS s);	    //set status of Inputpin # n, to be used by connection class.
    virtual Component* Copy();

    virtual void Save(std::ofstream& stream);
    virtual void Load(std::ifstream& stream);
    int GetNumOfInputs(); //ahmed
    void setoutputpenstatus(STATUS s);

    virtual OutputPin* GetOutputPin();

};

