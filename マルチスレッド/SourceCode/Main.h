//インクルードガード.
#pragma once

//インクルード.
#include <iostream>
#include <memory>
#include <thread>
#include <vector>
#include <Windows.h>
#include <atomic>

using namespace std;
class clsMain
{
public:
	clsMain();
	~clsMain();

	void cMain();

	static void Work1();
	static void Work2();
	static void Work3();
	static void Work4();

	int Cnt;
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

std::unique_ptr<clsMain> m_smpMain;