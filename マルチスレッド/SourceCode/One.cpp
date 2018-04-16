#include "One.h"

using namespace std;

clsOne::clsOne()
{
	m_bFinish = false;
	m_iCnt = 0;
}

clsOne::~clsOne()
{
}

void clsOne::Cnt1(int Num)
{
	if (m_iCnt>Num)
	{
		m_bFinish = true;
	}
	m_iCnt++;
}

bool clsOne::GetFinsh()
{
	return m_bFinish;
}

void clsOne::Thread1(int Num)
{
	thread Th1(&clsOne::Cnt1,Num);
	if (Th1.joinable())
	{
		Th1.join();
	}
}

