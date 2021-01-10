#include "Switch.h"

Switch::Switch(const GraphicsInfo& r_GfxInfo, int r_FanOut):m_OutputPin(r_FanOut), Component(r_GfxInfo)
{
}

void Switch::Operate()
{

}

void Switch::Draw(Output* pOut)
{
	pOut->DrawSwitch(m_GfxInfo);
}

void Switch::DrawFrame(Output* pOut)
{
	pOut->DrawSquare(m_GfxInfo);
}

int Switch::GetOutPinStatus()
{
	return m_OutputPin.getStatus();
}

int Switch::GetInputPinStatus(int n)
{
	return -1;
}

void Switch::setInputPinStatus(int n, STATUS s)
{

}
Component* Switch::Copy()
{
	GraphicsInfo temp;
	temp.x1 = temp.x2 = temp.y1 = temp.y2 = 0;
	Component* Copied = new Switch(temp, Switch_FANOUT);
	return Copied;
}

void Switch::Save(std::ofstream& stream, int ID)
{
	stream << ComponentType::SWITCH << " " << ID << " " << this->GetLabel()
		<< " " << m_GfxInfo.x1 << " " << m_GfxInfo.x2 << " " << m_GfxInfo.y1 << " " << m_GfxInfo.y2 << std::endl;
}
