
// nkcpuScoreboard.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CnkcpuScoreboardApp: 
// �йش����ʵ�֣������ nkcpuScoreboard.cpp
//

class CnkcpuScoreboardApp : public CWinApp
{
public:
	CnkcpuScoreboardApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CnkcpuScoreboardApp theApp;