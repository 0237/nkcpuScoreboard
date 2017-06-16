
// nkcpuScoreboardDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include <map>

#define ������Ԫ 0
#define �����1��Ԫ 1
#define �����2��Ԫ 2
#define ����ӵ�Ԫ 3
#define �������Ԫ 4

// CnkcpuScoreboardDlg �Ի���
class CnkcpuScoreboardDlg : public CDialogEx
{
// ����
public:
	CnkcpuScoreboardDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NKCPUSCOREBOARD_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
	// 32�������Ĵ���
	UINT m_Reg[32];
	// 32������Ĵ���
	float m_fReg[32];
	// PC����
	UINT m_PC;

	std::map<CString, int> rmap;
	CString register_name[32];

	void ����();
	void ��ȡ������();
	void ִ�����();
	void д���();

	CString ����();
	CString �����1();
	CString �����2();
	CString �����();
	CString �����();

	CString op;
	CString D;
	CString S1;
	CString S2;

	float A[5];
	float B[5];
	float C[5];
	float ALUOutput[5];
	float LMD;

	int endState;//�������
	
	// ָ��״̬��
	CListCtrl m_instate;
	// ���ܵ�Ԫ״̬��
	CListCtrl m_funstate;
	// �Ĵ������״̬��
	CListCtrl m_result;
	// ���ݴ洢
	CListCtrl m_datamem;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	// ָ��״̬1
	CListCtrl m_instate1;
	// ���ܵ�Ԫ״̬1
	CListCtrl m_funstate1;
	// �Ĵ������״̬1
	CListCtrl m_result1;
};
