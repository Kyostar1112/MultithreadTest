#include "Two.h"

using namespace std;
clsTwo::clsTwo()
{
	m_bFinish = false;
	m_iCnt = 0;
}

clsTwo::~clsTwo()
{
}
bool clsTwo::GetFinsh()
{
	return m_bFinish;
}

void clsTwo::Cnt2(int Num)
{
	if (m_iCnt>Num)
	{
		m_bFinish = true;
	}
	m_iCnt++;
}

clsTwoOut::clsTwoOut()
{
}

clsTwoOut::~clsTwoOut()
{
}

void clsTwoOut::OutThred()
{
	thread Th2(&clsTwo::Cnt2,10);
	if (Th2.joinable())
	{
		Th2.join();
	}
}
