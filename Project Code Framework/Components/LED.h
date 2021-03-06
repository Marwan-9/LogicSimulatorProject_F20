#pragma once
#include "Component.h"
#include "InputPin.h"


class LED:public Component
{
	InputPin m_InputPin;
	bool LedStatus;
public:
	LED(const GraphicsInfo &r_GfxInfo);
	virtual void Operate();	
	virtual void Draw(Output* pOut);	
	virtual void DrawFrame(Output* pOut);
	//GraphicsInfo Getinfo(Output* pOut);

	virtual int GetOutPinStatus();	
	virtual int GetInputPinStatus(int n=1);

	virtual void setInputPinStatus(int n, STATUS s);
	virtual Component* Copy();

int	GetNumOfInputs();//ahmed


	virtual InputPin* GetInputPins(int index=0);

	virtual void Save(std::ofstream& stream);
	virtual void Load(std::ifstream& stream);

};