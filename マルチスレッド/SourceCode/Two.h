#pragma once
#include <thread>

class clsTwo
{
public:
	clsTwo();
	~clsTwo();

	void Thread2(int Num);

	void Cnt2(int Num);

	bool GetFinsh();

	int m_iCnt;

	bool m_bFinish;

private:

};
