#pragma once
#include <thread>

class clsTwo
{
public:
	clsTwo();
	~clsTwo();


	void thread2(int Num);

	bool GetFinsh();
private:
	void Cnt(int Num);
	int m_iCnt;
	bool m_bFinish;
};