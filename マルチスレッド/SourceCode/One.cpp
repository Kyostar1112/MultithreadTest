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

void clsOne::thread1(int Num)
{
	thread th1(&clsOne::Cnt,Num/*[] {}*/);
	if (th1.joinable())
	{
		th1.join();
	}
}

void clsOne::Cnt(int Num)
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
