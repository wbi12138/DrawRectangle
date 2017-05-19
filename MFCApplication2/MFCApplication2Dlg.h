
// MFCApplication2Dlg.h : 头文件
//

#pragma once


// CMFCApplication2Dlg 对话框
class CMFCApplication2Dlg : public CDialogEx
{
//变量
	CPoint points[2];//这俩个点分别代表矩形主对角线的两个端点
	bool startRect=false;//指示是否按下鼠标左键
	int Rect_count = 0;//记录画了几个矩形了
	CRect Rect1,Rect2, interRect;//Rect1第一次画的矩形，Rect1第二次画的矩形，interRect两个矩形相交的矩形

// 构造
public:
	CMFCApplication2Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
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
	BOOL PreTranslateMessage(MSG* pMsg);
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
