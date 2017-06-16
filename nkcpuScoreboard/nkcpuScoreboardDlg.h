
// nkcpuScoreboardDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"
#include <map>

#define 整数单元 0
#define 浮点乘1单元 1
#define 浮点乘2单元 2
#define 浮点加单元 3
#define 浮点除单元 4

// CnkcpuScoreboardDlg 对话框
class CnkcpuScoreboardDlg : public CDialogEx
{
// 构造
public:
	CnkcpuScoreboardDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NKCPUSCOREBOARD_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	BOOL CnkcpuScoreboardDlg::PreTranslateMessage(MSG* pMsg)
	{
		if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE) return TRUE;
		if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN) return TRUE;
		else
			return CDialog::PreTranslateMessage(pMsg);
	}
public:
	// 32个整数寄存器
	UINT m_Reg[32];
	// 32个浮点寄存器
	float m_fReg[32];
	// PC计数
	UINT m_PC;

	std::map<CString, int> rmap;
	CString register_name[32];

	void 发射();
	void 读取操作数();
	void 执行完成();
	void 写结果();

	CString 整数();
	CString 浮点乘1();
	CString 浮点乘2();
	CString 浮点加();
	CString 浮点除();

	CString op;
	CString D;
	CString S1;
	CString S2;

	float A[5];
	float B[5];
	float C[5];
	float ALUOutput[5];
	float LMD;

	int endState;//结束标记
	
	// 指令状态表
	CListCtrl m_instate;
	// 功能单元状态表
	CListCtrl m_funstate;
	// 寄存器结果状态表
	CListCtrl m_result;
	// 数据存储
	CListCtrl m_datamem;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	// 指令状态1
	CListCtrl m_instate1;
	// 功能单元状态1
	CListCtrl m_funstate1;
	// 寄存器结果状态1
	CListCtrl m_result1;
};
