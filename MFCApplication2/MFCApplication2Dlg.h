
// MFCApplication2Dlg.h : ͷ�ļ�
//

#pragma once


// CMFCApplication2Dlg �Ի���
class CMFCApplication2Dlg : public CDialogEx
{
//����
	CPoint points[2];//��������ֱ����������Խ��ߵ������˵�
	bool startRect=false;//ָʾ�Ƿ���������
	int Rect_count = 0;//��¼���˼���������
	CRect Rect1,Rect2, interRect;//Rect1��һ�λ��ľ��Σ�Rect1�ڶ��λ��ľ��Σ�interRect���������ཻ�ľ���

// ����
public:
	CMFCApplication2Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
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
	BOOL PreTranslateMessage(MSG* pMsg);
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
