//インクルードガード.
#pragma once

//インクルード.
#include <iostream>
#include <memory>
#include <vector>
#include <Windows.h>

#include"One.h"
#include"Two.h"
#include"Singleton.h"

using namespace std;
class clsMain
{
public:
	clsMain();
	~clsMain();

	void cMain();

	int m_iCnt;

	unique_ptr<clsOne> m_smpOne;
	unique_ptr<clsTwo> m_smpTwo;

	void DispNum(int Num);

#if 0
	static void AddAtomNum()
	{
		m_AtomNum++;
	}

	static void SubAtomNum()
	{
		m_AtomNum--;
	}

	static void AddAtomNum(int Num)
	{
		m_AtomNum = Num;
	}

	atomic<int> GetAtomNum()
	{
		return m_AtomNum;
	}

#endif // 0

private:
};

unique_ptr<clsMain> m_smpMain;



