
// nkcpuScoreboardDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "nkcpuScoreboard.h"
#include "nkcpuScoreboardDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CnkcpuScoreboardDlg 对话框



CnkcpuScoreboardDlg::CnkcpuScoreboardDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_NKCPUSCOREBOARD_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CnkcpuScoreboardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Reg[0]);
	DDX_Text(pDX, IDC_EDIT2, m_Reg[1]);
	DDX_Text(pDX, IDC_EDIT3, m_Reg[2]);
	DDX_Text(pDX, IDC_EDIT4, m_Reg[3]);
	DDX_Text(pDX, IDC_EDIT5, m_Reg[4]);
	DDX_Text(pDX, IDC_EDIT6, m_Reg[5]);
	DDX_Text(pDX, IDC_EDIT7, m_Reg[6]);
	DDX_Text(pDX, IDC_EDIT8, m_Reg[7]);
	DDX_Text(pDX, IDC_EDIT9, m_Reg[8]);
	DDX_Text(pDX, IDC_EDIT10, m_Reg[9]);
	DDX_Text(pDX, IDC_EDIT11, m_Reg[10]);
	DDX_Text(pDX, IDC_EDIT12, m_Reg[11]);
	DDX_Text(pDX, IDC_EDIT13, m_Reg[12]);
	DDX_Text(pDX, IDC_EDIT14, m_Reg[13]);
	DDX_Text(pDX, IDC_EDIT15, m_Reg[14]);
	DDX_Text(pDX, IDC_EDIT16, m_Reg[15]);
	DDX_Text(pDX, IDC_EDIT17, m_Reg[16]);
	DDX_Text(pDX, IDC_EDIT18, m_Reg[17]);
	DDX_Text(pDX, IDC_EDIT19, m_Reg[18]);
	DDX_Text(pDX, IDC_EDIT20, m_Reg[19]);
	DDX_Text(pDX, IDC_EDIT21, m_Reg[20]);
	DDX_Text(pDX, IDC_EDIT22, m_Reg[21]);
	DDX_Text(pDX, IDC_EDIT23, m_Reg[22]);
	DDX_Text(pDX, IDC_EDIT24, m_Reg[23]);
	DDX_Text(pDX, IDC_EDIT25, m_Reg[24]);
	DDX_Text(pDX, IDC_EDIT26, m_Reg[25]);
	DDX_Text(pDX, IDC_EDIT27, m_Reg[26]);
	DDX_Text(pDX, IDC_EDIT28, m_Reg[27]);
	DDX_Text(pDX, IDC_EDIT29, m_Reg[28]);
	DDX_Text(pDX, IDC_EDIT30, m_Reg[29]);
	DDX_Text(pDX, IDC_EDIT31, m_Reg[30]);
	DDX_Text(pDX, IDC_EDIT32, m_Reg[31]);
	DDX_Text(pDX, IDC_EDIT33, m_PC);
	DDX_Text(pDX, IDC_EDIT35, m_fReg[0]);
	DDX_Text(pDX, IDC_EDIT36, m_fReg[1]);
	DDX_Text(pDX, IDC_EDIT37, m_fReg[2]);
	DDX_Text(pDX, IDC_EDIT38, m_fReg[3]);
	DDX_Text(pDX, IDC_EDIT39, m_fReg[4]);
	DDX_Text(pDX, IDC_EDIT40, m_fReg[5]);
	DDX_Text(pDX, IDC_EDIT41, m_fReg[6]);
	DDX_Text(pDX, IDC_EDIT42, m_fReg[7]);
	DDX_Text(pDX, IDC_EDIT43, m_fReg[8]);
	DDX_Text(pDX, IDC_EDIT44, m_fReg[9]);
	DDX_Text(pDX, IDC_EDIT45, m_fReg[10]);
	DDX_Text(pDX, IDC_EDIT46, m_fReg[11]);
	DDX_Text(pDX, IDC_EDIT47, m_fReg[12]);
	DDX_Text(pDX, IDC_EDIT48, m_fReg[13]);
	DDX_Text(pDX, IDC_EDIT49, m_fReg[14]);
	DDX_Text(pDX, IDC_EDIT50, m_fReg[15]);
	DDX_Text(pDX, IDC_EDIT51, m_fReg[16]);
	DDX_Text(pDX, IDC_EDIT52, m_fReg[17]);
	DDX_Text(pDX, IDC_EDIT53, m_fReg[18]);
	DDX_Text(pDX, IDC_EDIT54, m_fReg[19]);
	DDX_Text(pDX, IDC_EDIT55, m_fReg[20]);
	DDX_Text(pDX, IDC_EDIT56, m_fReg[21]);
	DDX_Text(pDX, IDC_EDIT57, m_fReg[22]);
	DDX_Text(pDX, IDC_EDIT58, m_fReg[23]);
	DDX_Text(pDX, IDC_EDIT59, m_fReg[24]);
	DDX_Text(pDX, IDC_EDIT60, m_fReg[25]);
	DDX_Text(pDX, IDC_EDIT61, m_fReg[26]);
	DDX_Text(pDX, IDC_EDIT62, m_fReg[27]);
	DDX_Text(pDX, IDC_EDIT63, m_fReg[28]);
	DDX_Text(pDX, IDC_EDIT64, m_fReg[29]);
	DDX_Text(pDX, IDC_EDIT65, m_fReg[30]);
	DDX_Text(pDX, IDC_EDIT66, m_fReg[31]);

	DDX_Control(pDX, IDC_LIST5, m_instate);
	DDX_Control(pDX, IDC_LIST6, m_funstate);
	DDX_Control(pDX, IDC_LIST2, m_result);
	DDX_Control(pDX, IDC_LIST7, m_datamem);
	DDX_Control(pDX, IDC_LIST8, m_instate1);
	DDX_Control(pDX, IDC_LIST9, m_funstate1);
	DDX_Control(pDX, IDC_LIST3, m_result1);
}

BEGIN_MESSAGE_MAP(CnkcpuScoreboardDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, &CnkcpuScoreboardDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CnkcpuScoreboardDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CnkcpuScoreboardDlg 消息处理程序

BOOL CnkcpuScoreboardDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	m_Reg[2] = 2;
	m_Reg[3] = 1;
	m_fReg[6] = 4.4;
	m_fReg[4] = 12.7;
	m_PC = 11;
	UpdateData(FALSE);
	op = "加";
	D = "$f6";
	S1 = "$f8";
	S2 = "$f2";
	LMD = 2.5;
	ALUOutput[整数单元] = 1;
	CString register_name[32] = { _T("$f0"),_T("$f1"),_T("$f2"),_T("$f3"),_T("$f4"),_T("$f5"),_T("$f6"),_T("$f7"),_T("$f8"),_T("$f9"),_T("$f10"),_T("$f11"),_T("$f12"),_T("$f13"),_T("$f14"),_T("$f15"),_T("$f16"),_T("$f17"),_T("$f18"),_T("$f19"),_T("$f20"),_T("$f21"),_T("$f22"),_T("$f23"),_T("$f24"),_T("$f25"),_T("$f26"),_T("$f27"),_T("$f28"),_T("$f29"),_T("$f30"),_T("$f31") };
	for (int i = 0; i < 32; i++) {
		rmap[register_name[i]] = i;
	}

	endState = 0;
	//数据存储
	CRect dmrect;
	m_datamem.GetClientRect(&dmrect);
	m_datamem.SetExtendedStyle(m_datamem.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_datamem.InsertColumn(0, _T("地址"), LVCFMT_LEFT, 50, 0);
	m_datamem.InsertColumn(1, _T("数据"), LVCFMT_RIGHT, dmrect.Width() - 50, 1);
	m_datamem.InsertItem(0, _T("0"));
	m_datamem.SetItemText(0, 1, _T("10.8"));
	m_datamem.InsertItem(1, _T("1"));
	m_datamem.SetItemText(1, 1, _T("2.5"));
	m_datamem.InsertItem(2, _T("2"));
	m_datamem.SetItemText(2, 1, _T("7.6"));
	m_datamem.InsertItem(3, _T("3"));
	m_datamem.SetItemText(3, 1, _T("4.4"));
	m_datamem.InsertItem(4, _T("4"));
	m_datamem.SetItemText(4, 1, _T("24.3"));

	//指令状态
	CRect isrect;
	m_instate.GetClientRect(&isrect);
	m_instate.SetExtendedStyle(m_instate.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_instate.InsertColumn(0, _T("地址"), LVCFMT_LEFT, 50, 0);
	m_instate.InsertColumn(1, _T("指令"), LVCFMT_LEFT, isrect.Width() - 105 * 4 - 50, 0);
	m_instate.InsertColumn(2, _T("发射"), LVCFMT_CENTER, 105, 1);
	m_instate.InsertColumn(3, _T("读取操作数"), LVCFMT_CENTER, 105, 2);
	m_instate.InsertColumn(4, _T("执行完成"), LVCFMT_CENTER, 105, 3);
	m_instate.InsertColumn(5, _T("写结果"), LVCFMT_CENTER, 105, 4);
	m_instate.InsertItem(0, _T("6"));
	m_instate.SetItemText(0, 1, _T("l.d  $f6,1($v0)"));
	m_instate.SetItemText(0, 2, _T("√"));
	m_instate.SetItemText(0, 3, _T("√"));
	m_instate.SetItemText(0, 4, _T("√"));
	m_instate.SetItemText(0, 5, _T("√"));
	m_instate.InsertItem(1, _T("7"));
	m_instate.SetItemText(1, 1, _T("l.d  $f2,0($v1)"));
	m_instate.SetItemText(1, 2, _T("√"));
	m_instate.SetItemText(1, 3, _T("√"));
	m_instate.SetItemText(1, 4, _T("√"));
	m_instate.InsertItem(2, _T("8"));
	m_instate.SetItemText(2, 1, _T("mul.d  $f0,$f2,$f4"));
	m_instate.SetItemText(2, 2, _T("√"));
	m_instate.InsertItem(3, _T("9"));
	m_instate.SetItemText(3, 1, _T("sub.d  $f8,$f6,$f2"));
	m_instate.SetItemText(3, 2, _T("√"));
	m_instate.InsertItem(4, _T("10"));
	m_instate.SetItemText(4, 1, _T("div.d  $f10,$f0,$f6"));
	m_instate.SetItemText(4, 2, _T("√"));
	m_instate.InsertItem(5, _T("11"));
	m_instate.SetItemText(5, 1, _T("add.d  $f6,$f8,$f2"));
	//指令状态1
	CRect isrect1;
	m_instate1.GetClientRect(&isrect1);
	m_instate1.SetExtendedStyle(m_instate1.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_instate1.InsertColumn(0, _T("地址"), LVCFMT_LEFT, 50, 0);
	m_instate1.InsertColumn(1, _T("指令"), LVCFMT_LEFT, isrect1.Width() - 105 * 4 - 50, 0);
	m_instate1.InsertColumn(2, _T("发射"), LVCFMT_CENTER, 105, 1);
	m_instate1.InsertColumn(3, _T("读取操作数"), LVCFMT_CENTER, 105, 2);
	m_instate1.InsertColumn(4, _T("执行完成"), LVCFMT_CENTER, 105, 3);
	m_instate1.InsertColumn(5, _T("写结果"), LVCFMT_CENTER, 105, 4);
	m_instate1.InsertItem(0, _T("6"));
	m_instate1.SetItemText(0, 1, _T("l.d  $f6,1($v0)"));
	m_instate1.SetItemText(0, 2, _T("√"));
	m_instate1.SetItemText(0, 3, _T("√"));
	m_instate1.SetItemText(0, 4, _T("√"));
	m_instate1.SetItemText(0, 5, _T("√"));
	m_instate1.InsertItem(1, _T("7"));
	m_instate1.SetItemText(1, 1, _T("l.d  $f2,0($v1)"));
	m_instate1.SetItemText(1, 2, _T("√"));
	m_instate1.SetItemText(1, 3, _T("√"));
	m_instate1.SetItemText(1, 4, _T("√"));
	m_instate1.InsertItem(2, _T("8"));
	m_instate1.SetItemText(2, 1, _T("mul.d  $f0,$f2,$f4"));
	m_instate1.SetItemText(2, 2, _T("√"));
	m_instate1.InsertItem(3, _T("9"));
	m_instate1.SetItemText(3, 1, _T("sub.d  $f8,$f6,$f2"));
	m_instate1.SetItemText(3, 2, _T("√"));
	m_instate1.InsertItem(4, _T("10"));
	m_instate1.SetItemText(4, 1, _T("div.d  $f10,$f0,$f6"));
	m_instate1.SetItemText(4, 2, _T("√"));
	m_instate1.InsertItem(5, _T("11"));
	m_instate1.SetItemText(5, 1, _T("add.d  $f6,$f8,$f2"));

	//功能单元状态
	CRect fsrect;
	m_funstate.GetClientRect(&fsrect);
	m_funstate.SetExtendedStyle(m_funstate.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_funstate.InsertColumn(0, _T("名称"), LVCFMT_LEFT, fsrect.Width() / 10, 0);
	m_funstate.InsertColumn(1, _T("Busy"), LVCFMT_CENTER, fsrect.Width() / 10, 1);
	m_funstate.InsertColumn(2, _T("Op"), LVCFMT_CENTER, fsrect.Width() / 10, 2);
	m_funstate.InsertColumn(3, _T("Fi"), LVCFMT_CENTER, fsrect.Width() / 10, 3);
	m_funstate.InsertColumn(4, _T("Fj"), LVCFMT_CENTER, fsrect.Width() / 10, 4);
	m_funstate.InsertColumn(5, _T("Fk"), LVCFMT_CENTER, fsrect.Width() / 10, 5);
	m_funstate.InsertColumn(6, _T("Qj"), LVCFMT_CENTER, fsrect.Width() / 10, 6);
	m_funstate.InsertColumn(7, _T("Qk"), LVCFMT_CENTER, fsrect.Width() / 10, 7);
	m_funstate.InsertColumn(8, _T("Rj"), LVCFMT_CENTER, fsrect.Width() / 10, 8);
	m_funstate.InsertColumn(9, _T("Rk"), LVCFMT_CENTER, fsrect.Width() / 10, 9);
	m_funstate.InsertColumn(10, _T("PC"), LVCFMT_CENTER, fsrect.Width() / 10, 10);
	m_funstate.InsertItem(0, _T("整数"));
	m_funstate.SetItemText(0, 1, _T("是"));
	m_funstate.SetItemText(0, 2, _T("载入"));
	m_funstate.SetItemText(0, 3, _T("$f2"));
	m_funstate.SetItemText(0, 4, _T("$v1"));
	m_funstate.SetItemText(0, 8, _T("否"));
	m_funstate.SetItemText(0, 10, _T("7"));
	m_funstate.InsertItem(1, _T("乘1"));
	m_funstate.SetItemText(1, 1, _T("是"));
	m_funstate.SetItemText(1, 2, _T("乘"));
	m_funstate.SetItemText(1, 3, _T("$f0"));
	m_funstate.SetItemText(1, 4, _T("$f2"));
	m_funstate.SetItemText(1, 5, _T("$f4"));
	m_funstate.SetItemText(1, 6, _T("整数"));
	m_funstate.SetItemText(1, 8, _T("否"));
	m_funstate.SetItemText(1, 9, _T("是"));
	m_funstate.SetItemText(1, 10, _T("8"));
	m_funstate.InsertItem(2, _T("乘2"));
	m_funstate.SetItemText(2, 1, _T("否"));
	m_funstate.InsertItem(3, _T("加"));
	m_funstate.SetItemText(3, 1, _T("是"));
	m_funstate.SetItemText(3, 2, _T("减"));
	m_funstate.SetItemText(3, 3, _T("$f8"));
	m_funstate.SetItemText(3, 4, _T("$f6"));
	m_funstate.SetItemText(3, 5, _T("$f2"));
	m_funstate.SetItemText(3, 7, _T("整数"));
	m_funstate.SetItemText(3, 8, _T("是"));
	m_funstate.SetItemText(3, 9, _T("否"));
	m_funstate.SetItemText(3, 10, _T("9"));
	m_funstate.InsertItem(4, _T("除"));
	m_funstate.SetItemText(4, 1, _T("是"));
	m_funstate.SetItemText(4, 2, _T("除"));
	m_funstate.SetItemText(4, 3, _T("$f10"));
	m_funstate.SetItemText(4, 4, _T("$f0"));
	m_funstate.SetItemText(4, 5, _T("$f6"));
	m_funstate.SetItemText(4, 6, _T("乘1"));
	m_funstate.SetItemText(4, 8, _T("否"));
	m_funstate.SetItemText(4, 9, _T("是"));
	m_funstate.SetItemText(4, 10, _T("10"));
	//功能单元状态1
	CRect fsrect1;
	m_funstate1.GetClientRect(&fsrect1);
	m_funstate1.SetExtendedStyle(m_funstate1.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_funstate1.InsertColumn(0, _T("名称"), LVCFMT_LEFT, fsrect1.Width() / 10, 0);
	m_funstate1.InsertColumn(1, _T("Busy"), LVCFMT_CENTER, fsrect1.Width() / 10, 1);
	m_funstate1.InsertColumn(2, _T("Op"), LVCFMT_CENTER, fsrect1.Width() / 10, 2);
	m_funstate1.InsertColumn(3, _T("Fi"), LVCFMT_CENTER, fsrect1.Width() / 10, 3);
	m_funstate1.InsertColumn(4, _T("Fj"), LVCFMT_CENTER, fsrect1.Width() / 10, 4);
	m_funstate1.InsertColumn(5, _T("Fk"), LVCFMT_CENTER, fsrect1.Width() / 10, 5);
	m_funstate1.InsertColumn(6, _T("Qj"), LVCFMT_CENTER, fsrect1.Width() / 10, 6);
	m_funstate1.InsertColumn(7, _T("Qk"), LVCFMT_CENTER, fsrect1.Width() / 10, 7);
	m_funstate1.InsertColumn(8, _T("Rj"), LVCFMT_CENTER, fsrect1.Width() / 10, 8);
	m_funstate1.InsertColumn(9, _T("Rk"), LVCFMT_CENTER, fsrect1.Width() / 10, 9);
	m_funstate1.InsertColumn(10, _T("PC"), LVCFMT_CENTER, fsrect1.Width() / 10, 10);
	m_funstate1.InsertItem(0, _T("整数"));
	m_funstate1.SetItemText(0, 1, _T("是"));
	m_funstate1.SetItemText(0, 2, _T("载入"));
	m_funstate1.SetItemText(0, 3, _T("$f2"));
	m_funstate1.SetItemText(0, 4, _T("$v1"));
	m_funstate1.SetItemText(0, 8, _T("否"));
	m_funstate1.SetItemText(0, 10, _T("7"));
	m_funstate1.InsertItem(1, _T("乘1"));
	m_funstate1.SetItemText(1, 1, _T("是"));
	m_funstate1.SetItemText(1, 2, _T("乘"));
	m_funstate1.SetItemText(1, 3, _T("$f0"));
	m_funstate1.SetItemText(1, 4, _T("$f2"));
	m_funstate1.SetItemText(1, 5, _T("$f4"));
	m_funstate1.SetItemText(1, 6, _T("整数"));
	m_funstate1.SetItemText(1, 8, _T("否"));
	m_funstate1.SetItemText(1, 9, _T("是"));
	m_funstate1.SetItemText(1, 10, _T("8"));
	m_funstate1.InsertItem(2, _T("乘2"));
	m_funstate1.SetItemText(2, 1, _T("否"));
	m_funstate1.InsertItem(3, _T("加"));
	m_funstate1.SetItemText(3, 1, _T("是"));
	m_funstate1.SetItemText(3, 2, _T("减"));
	m_funstate1.SetItemText(3, 3, _T("$f8"));
	m_funstate1.SetItemText(3, 4, _T("$f6"));
	m_funstate1.SetItemText(3, 5, _T("$f2"));
	m_funstate1.SetItemText(3, 7, _T("整数"));
	m_funstate1.SetItemText(3, 8, _T("是"));
	m_funstate1.SetItemText(3, 9, _T("否"));
	m_funstate1.SetItemText(3, 10, _T("9"));
	m_funstate1.InsertItem(4, _T("除"));
	m_funstate1.SetItemText(4, 1, _T("是"));
	m_funstate1.SetItemText(4, 2, _T("除"));
	m_funstate1.SetItemText(4, 3, _T("$f10"));
	m_funstate1.SetItemText(4, 4, _T("$f0"));
	m_funstate1.SetItemText(4, 5, _T("$f6"));
	m_funstate1.SetItemText(4, 6, _T("乘1"));
	m_funstate1.SetItemText(4, 8, _T("否"));
	m_funstate1.SetItemText(4, 9, _T("是"));
	m_funstate1.SetItemText(4, 10, _T("10"));

	//寄存器结果状态
	CRect rsrect;
	m_result.GetClientRect(&rsrect);
	m_result.SetExtendedStyle(m_result.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_result.InsertColumn(0, _T(""), LVCFMT_LEFT, 30, 0);
	for (int i = 0;i < 32;i++) {
		CString j;j.Format(_T("$f%d"), i);
		m_result.InsertColumn(i+1, j, LVCFMT_CENTER, fsrect.Width() / 10, i+1);
	}
	m_result.InsertItem(0, _T("FU"));
	m_result.SetItemText(0, 1, _T("乘1"));
	m_result.SetItemText(0, 3, _T("整数"));
	m_result.SetItemText(0, 9, _T("加"));
	m_result.SetItemText(0, 11, _T("除"));
	//寄存器结果状态1
	CRect rsrect1;
	m_result1.GetClientRect(&rsrect1);
	m_result1.SetExtendedStyle(m_result1.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_result1.InsertColumn(0, _T(""), LVCFMT_LEFT, 30, 0);
	for (int i = 0;i < 32;i++) {
		CString j;j.Format(_T("$f%d"), i);
		m_result1.InsertColumn(i + 1, j, LVCFMT_CENTER, fsrect1.Width() / 10, i + 1);
	}
	m_result1.InsertItem(0, _T("FU"));
	m_result1.SetItemText(0, 1, _T("乘1"));
	m_result1.SetItemText(0, 3, _T("整数"));
	m_result1.SetItemText(0, 9, _T("加"));
	m_result1.SetItemText(0, 11, _T("除"));

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CnkcpuScoreboardDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CnkcpuScoreboardDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CnkcpuScoreboardDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CnkcpuScoreboardDlg::发射()
{
	UpdateData(TRUE);
	CString ins = m_instate.GetItemText(m_PC - 6, 1);
	if (ins != "")//MessageBox(ins, _T("提示"), MB_ICONINFORMATION);
	{
		int FU;
		CString FUx;
		if (op == "载入" || op == "存储" || op == "分支" || op == "整数运算") { FU = 整数单元; FUx = "整数"; }
		else if (op == "加" || op == "减") { FU = 浮点加单元; FUx = "加";}
		else if (op == "乘") { FU = 浮点乘1单元; FUx = "乘1";if (m_funstate.GetItemText(FU, 0) == "是") { FU++; FUx = "乘2"; } }
		else if (op == "除") { FU = 浮点除单元; FUx = "除";}
		CString busy = m_funstate.GetItemText(FU, 1);
		CString result = m_result.GetItemText(0, rmap[D]+1);
		CString resultS1 = m_result.GetItemText(0, rmap[S1] + 1);
		CString resultS2 = m_result.GetItemText(0, rmap[S2] + 1);
		if (busy == "否"&&result == "")
		{
			m_instate1.SetItemText(m_PC - 6, 2, _T("√"));
			m_funstate1.SetItemText(FU, 1, _T("是"));
			m_funstate1.SetItemText(FU, 2, op);
			m_funstate1.SetItemText(FU, 3, D);
			m_funstate1.SetItemText(FU, 4, S1);
			m_funstate1.SetItemText(FU, 5, S2);
			m_funstate1.SetItemText(FU, 6, resultS1);
			m_funstate1.SetItemText(FU, 7, resultS2);
			m_funstate1.SetItemText(FU, 8, resultS1 == "" ? _T("是") : _T("否"));
			m_funstate1.SetItemText(FU, 9, resultS2 == "" ? _T("是") : _T("否"));
			CString pc;pc.Format(_T("%d"), m_PC);
			m_funstate1.SetItemText(FU, 10, pc);
			m_PC++;
			m_result1.SetItemText(0, rmap[D] + 1, FUx);
			UpdateData(FALSE);
		}
	}
}

void CnkcpuScoreboardDlg::读取操作数()
{
	for (int i = 整数单元;i <= 浮点除单元;i++)
	{
		CString Rj = m_funstate.GetItemText(i, 8);
		CString Rk = m_funstate.GetItemText(i, 9);
		if (Rj == "是"&&Rj == "是")
		{
			CString pc = m_funstate.GetItemText(i, 10);
			m_instate1.SetItemText(_ttoi(pc) - 6, 3, _T("√"));
			m_funstate1.SetItemText(i, 6, _T(""));
			m_funstate1.SetItemText(i, 7, _T(""));
			m_funstate1.SetItemText(i, 8, _T("否"));
			m_funstate1.SetItemText(i, 9, _T("否"));
			CString Fj = m_funstate.GetItemText(i, 4);
			CString Fk = m_funstate.GetItemText(i, 5);
			UpdateData(TRUE);
			B[i] = m_fReg[rmap[Fj]];
			C[i] = m_fReg[rmap[Fk]];
		}
	}
}

void CnkcpuScoreboardDlg::执行完成()
{
	for (int i = 整数单元;i <= 浮点除单元;i++)
	{
		/*CString Qj = m_funstate.GetItemText(i, 6);
		CString Qk = m_funstate.GetItemText(i, 7);
		CString Rj = m_funstate.GetItemText(i, 8);
		CString Rk = m_funstate.GetItemText(i, 9);*/
		CString pc = m_funstate.GetItemText(i, 10);
		if (m_instate.GetItemText(_ttoi(pc) - 6, 3)=="√")
		{
			switch (i)
			{
			case 整数单元:
				m_instate1.SetItemText(_ttoi(pc) - 6, 4, 整数());
				break;
			case 浮点乘1单元:
				m_instate1.SetItemText(_ttoi(pc) - 6, 4, 浮点乘1());
				break;
			case 浮点乘2单元:
				m_instate1.SetItemText(_ttoi(pc) - 6, 4, 浮点乘2());
				break;
			case 浮点加单元:
				m_instate1.SetItemText(_ttoi(pc) - 6, 4, 浮点加());
				break;
			case 浮点除单元:
				m_instate1.SetItemText(_ttoi(pc) - 6, 4, 浮点除());
				break;
			}
		}
	}
}

void CnkcpuScoreboardDlg::写结果()
{
	for (int i = 整数单元;i <= 浮点除单元;i++)
	{
		CString pc = m_funstate.GetItemText(i, 10);
		if (m_instate.GetItemText(_ttoi(pc) - 6, 4) == "√")
		{
			CString FUx;
			switch (i)
			{
			case 整数单元:FUx = "整数";break;
			case 浮点乘1单元:FUx = "乘1";break;
			case 浮点乘2单元:FUx = "乘2";break;
			case 浮点加单元:FUx = "加";break;
			case 浮点除单元:FUx = "除";break;
			}
			CString FiFU = m_funstate.GetItemText(i, 3);
			bool term = 1;
			for (int j = 整数单元;j <= 浮点除单元;j++)
			{
				if (i != j)
				{
					CString Fjf = m_funstate.GetItemText(j, 4);
					CString Fkf = m_funstate.GetItemText(j, 5);
					CString Rjf = m_funstate.GetItemText(j, 8);
					CString Rkf = m_funstate.GetItemText(j, 9);
					term = term && (Fjf != FiFU || Rjf == "否") && (Fkf != FiFU || Rkf == "否");
				}
			}
			if (term)
			{
				m_instate1.SetItemText(_ttoi(pc) - 6, 5, _T("√"));
				for (int j = 整数单元;j <= 浮点除单元;j++)
				{
					if (i != j)
					{
						CString Qjf = m_funstate.GetItemText(j, 6);
						CString Qkf = m_funstate.GetItemText(j, 7);
						if (Qjf == FUx)m_funstate1.SetItemText(j, 8, _T("是"));
						if (Qkf == FUx)m_funstate1.SetItemText(j, 9, _T("是"));
					}
				}
				CString lastPC = m_funstate.GetItemText(i, 10);
				m_result1.SetItemText(0, rmap[FiFU] + 1, _T(""));
				m_funstate1.SetItemText(i, 1, _T("否"));
				m_funstate1.SetItemText(i, 2, _T(""));
				m_funstate1.SetItemText(i, 3, _T(""));
				m_funstate1.SetItemText(i, 4, _T(""));
				m_funstate1.SetItemText(i, 5, _T(""));
				m_funstate1.SetItemText(i, 6, _T(""));
				m_funstate1.SetItemText(i, 7, _T(""));
				m_funstate1.SetItemText(i, 8, _T(""));
				m_funstate1.SetItemText(i, 9, _T(""));
				m_funstate1.SetItemText(i, 10, _T(""));
				m_fReg[rmap[FiFU]] = ALUOutput[i];
				if (m_funstate.GetItemText(i, 2) == "载入")m_fReg[rmap[FiFU]] = LMD;
				UpdateData(FALSE);
			}
		}
	}
}

CString pc1;
CString CnkcpuScoreboardDlg::整数()
{
	if (pc1 != m_funstate.GetItemText(整数单元, 10))
	{
		ALUOutput[整数单元] = B[整数单元] + C[整数单元];
		pc1 = m_funstate.GetItemText(整数单元, 10);
	}
	return _T("√");
}

int 浮点乘1剩余时间 = 10;
CString pc2;
CString CnkcpuScoreboardDlg::浮点乘1()
{
	if (pc2 == m_funstate.GetItemText(浮点乘1单元, 10))
	{
		return _T("√");
	}
	else
	{
		if (浮点乘1剩余时间 == 1)
		{
			ALUOutput[浮点乘1单元] = B[浮点乘1单元] * C[浮点乘1单元];
			浮点乘1剩余时间 = 10;
			pc2 = m_funstate.GetItemText(浮点乘1单元, 10);
			return _T("√");
		}
		else
		{
			浮点乘1剩余时间--;
			return _T("");
		}
	}
}

int 浮点乘2剩余时间 = 10;
CString pc3;
CString CnkcpuScoreboardDlg::浮点乘2()
{
	if (pc3 == m_funstate.GetItemText(浮点乘2单元, 10))
	{
		return _T("√");
	}
	else
	{
		if (浮点乘2剩余时间 == 1)
		{
			ALUOutput[浮点乘2单元] = B[浮点乘2单元] * C[浮点乘2单元];
			浮点乘2剩余时间 = 10;
			pc3 = m_funstate.GetItemText(浮点乘2单元, 10);
			return _T("√");
		}
		else
		{
			浮点乘2剩余时间--;
			return _T("");
		}
	}
}

int 浮点加剩余时间 = 2;
CString pc4;
CString CnkcpuScoreboardDlg::浮点加()
{
	if (pc4 == m_funstate.GetItemText(浮点加单元, 10))
	{
		return _T("√");
	}
	else
	{
		if (浮点加剩余时间 == 1)
		{
			ALUOutput[浮点加单元] = B[浮点加单元] * C[浮点加单元];
			浮点加剩余时间 = 2;
			pc4 = m_funstate.GetItemText(浮点加单元, 10);
			return _T("√");
		}
		else
		{
			浮点加剩余时间--;
			return _T("");
		}
	}
}

int 浮点除剩余时间 = 40;
CString pc5;
CString CnkcpuScoreboardDlg::浮点除()
{
	if (pc5 == m_funstate.GetItemText(浮点除单元, 10))
	{
		return _T("√");
	}
	else
	{
		if (浮点加剩余时间 == 1)
		{
			ALUOutput[浮点除单元] = B[浮点除单元] / C[浮点除单元];
			浮点加剩余时间 = 40;
			pc5 = m_funstate.GetItemText(浮点除单元, 10);
			return _T("√");
		}
		else
		{
			浮点加剩余时间--;
			return _T("");
		}
	}
}


void CnkcpuScoreboardDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	/*int i = m_result.GetItemCount();
	int j = m_result.GetHeaderCtrl()->GetItemCount();
	CString I;I.Format(_T("%d"), i);
	CString J;J.Format(_T("%d"), j);
	MessageBox(J, I, MB_ICONINFORMATION);*/
	if (!endState)
	{
		写结果();
		执行完成();
		读取操作数();
		发射();//读取操作数();执行完成();写结果();
		int num=0;
		for (int i = 0;i < m_instate.GetItemCount();i++)
		{
			for (int j = 0;j < m_instate.GetHeaderCtrl()->GetItemCount();j++)
			{
				if (m_instate1.GetItemText(i, j) == "√")num++;
				m_instate.SetItemText(i, j, m_instate1.GetItemText(i, j));
			}
		}
		for (int i = 0;i < m_funstate.GetItemCount();i++)
		{
			for (int j = 0;j < m_funstate.GetHeaderCtrl()->GetItemCount();j++)
			{
				m_funstate.SetItemText(i, j, m_funstate1.GetItemText(i, j));
			}
		}
		for (int i = 0;i < m_result.GetItemCount();i++)
		{
			for (int j = 0;j < m_result.GetHeaderCtrl()->GetItemCount();j++)
			{
				m_result.SetItemText(i, j, m_result1.GetItemText(i, j));
			}
		}
		if (num == m_instate.GetItemCount()*(m_instate.GetHeaderCtrl()->GetItemCount() - 2))
			endState = 1;
	}
	else 
	{
		MessageBox(_T("程序执行完毕！"), _T("提示"), MB_ICONINFORMATION);
	}
}

void CnkcpuScoreboardDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	while (!endState)
	{
		OnBnClickedButton2();
	}
	MessageBox(_T("程序执行完毕！"), _T("提示"), MB_ICONINFORMATION);
}
