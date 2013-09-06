// DrawMyWnd.cpp : implementation file
//

#include "stdafx.h"
#include "ftest1.h"
#include "DrawMyWnd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDrawMyWnd

CDrawMyWnd::CDrawMyWnd()
{
	setRulefont();
}

CDrawMyWnd::~CDrawMyWnd()
{
}


BEGIN_MESSAGE_MAP(CDrawMyWnd, CDrawWnd)
	//{{AFX_MSG_MAP(CDrawMyWnd)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

void CDrawMyWnd::DrawContent()
{
	CRect rc;
	GetClientRect(&rc);
    m_dcMem.FillSolidRect(&rc,m_colBK);

	CRect x_rc;
	x_rc = rc;
	CPoint pt;

	CPoint ptTemp;
	CPen pen;
	pen.CreatePen(PS_DOT,1,RGB(150,150,150));
	CPen* pOldpen = m_dcMem.SelectObject(&pen);

	//获取这个画线区域的高度
	int iHeight = x_rc.Height() - 10 ;
	//获取整个画线区域的宽度
	int iWeidth = x_rc.Width() - 10 ;

	//获取起点
	pt.x = x_rc.left + 5;
	pt.y = x_rc.top + 5;
	ptTemp = pt;

	//画横线
	for (int i = 0; i < iHeight/20 + 1; i++ )
	{
		//m_dcMem.MoveTo(ptTemp);
		pt.x = ptTemp.x;
		pt.y = ptTemp.y + 20*i;
		m_dcMem.MoveTo(pt);
		pt.x = pt.x + iWeidth;
		m_dcMem.LineTo(pt);
	}

	pt  =  ptTemp;
	//画竖线
	for ( i =0; i < iWeidth/20 + 1; i++ )
	{
		pt.y = ptTemp.y;
		pt.x = ptTemp.x + 20*i;
		m_dcMem.MoveTo(pt);
		pt.y = pt.y + iHeight;
		m_dcMem.LineTo(pt);
	}

     //x轴基准值（采集次数） 
	int x_base = x_rc.left + 5;
	 //y轴基准值 （温度值） 
	int y_base = x_rc.top + 5 + x_rc.Height()/2;

	float fTemp[20] = {36.21f,36.21f,36.56f,36.56f,36.58f,36.61f,36.63f,36.64f,36.21f,36.35f,
		               36.65f,36.81f,36.21f,36.21f,36.56f,36.56f,36.58f,36.65f,36.81f,36.57f};
	//x轴步进值为20
	//y轴步进体温范围为35度到42度

	pt.x = x_base;
	pt.y = y_base;
	ptTemp = pt;

	//改变画笔
     pen.DeleteObject();
	 pen.CreatePen(PS_SOLID,1,RGB(0,255,0));
     m_dcMem.SelectObject(&pen);
	for ( i = 0 ; i < 20 ;  i++ )
	{	
		m_dcMem.MoveTo(pt);
		pt.x = ptTemp.x + i*20;
        pt.y = y_base - (int)((fTemp[i] - 36)*100);

		m_dcMem.LineTo(pt);
	}

	CSize size;
	size = m_dcMem.GetTextExtent(_T("36"));
	CRect rcText;
	rcText.left = x_base;
	rcText.top = y_base -10;
	rcText.right = rcText.left + size.cx ;
	rcText.bottom = rcText.top + size.cy;
	m_dcMem.SetBkMode(TRANSPARENT);

	CFont* pFont = m_dcMem.SelectObject(&m_ruleFont);
    m_dcMem.DrawText(_T("36"),rcText,DT_LEFT);

    m_dcMem.SelectObject(pFont);
	m_dcMem.SelectObject(pOldpen);
}

CDrawMyWnd::deletefont()
{
	if ( m_ruleFont.GetSafeHandle() != NULL )
	{
		m_ruleFont.DeleteObject();
	}
	
}

CDrawMyWnd::setRulefont(int szTitle )
{
	deletefont();
	m_ruleFont.CreateFont(  szTitle,                   // nHeight
		0,                         // nWidth
		0,                         // nEscapement
		0,                         // nOrientation
		FW_NORMAL,                   // nWeight
		FALSE,                     // bItalic
		FALSE,                     // bUnderline
		0,                         // cStrikeOut
		DEFAULT_CHARSET,           // nCharSet
		OUT_DEFAULT_PRECIS,        // nOutPrecision
		CLIP_DEFAULT_PRECIS,       // nClipPrecision
		DEFAULT_QUALITY,           // nQuality
		DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
		_T("黑体"));               // lpszFacename
	
}


/////////////////////////////////////////////////////////////////////////////
// CDrawMyWnd message handlers
