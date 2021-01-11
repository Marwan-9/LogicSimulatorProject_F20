<<<<<<< HEAD
#ifndef _GATE_H
#define _GATE_H

/*
  Class Gate
  -----------
  - Base class for all types of gates
  - Each gate has n inputs pins and one output pin
*/


#include "InputPin.h"
#include "OutputPin.h"
#include "Component.h"

class Gate:public Component
{
protected:
	InputPin* m_InputPins;	//Array of input pins of the Gate
	OutputPin m_OutputPin;	//The Gate output pin
	int m_Inputs;		//No. of input pins of that Gate.
public:
	Gate(int r_Inputs, int r_FanOut);
	virtual void DrawFrame(Output* pOut);
	virtual Component* Copy()=0;
	virtual int GetNumOfInputs();
	//void drawname(Output* pOut, int Cx, int Cy, const char* cpText); //virtual
};

#endif
=======
#ifndef _GATE_H
#define _GATE_H

/*
  Class Gate
  -----------
  - Base class for all types of gates
  - Each gate has n inputs pins and one output pin
*/


#include "InputPin.h"
#include "OutputPin.h"
#include "Component.h"

class Gate:public Component
{
protected:
	InputPin* m_InputPins;	//Array of input pins of the Gate
	OutputPin m_OutputPin;	//The Gate output pin
	int m_Inputs;		//No. of input pins of that Gate.
public:
	Gate(int r_Inputs, int r_FanOut);
	virtual void DrawFrame(Output* pOut);
	virtual Component* Copy()=0;

	virtual int GetNumOfInputs(); // Ahmed

	virtual OutputPin* GetOutputPin();
	virtual InputPin* GetInputPins(int i);

	virtual int GetPinNumber();
};

#endif
>>>>>>> 1acd831287fc1c46a557598d0bda24f5b1254083
