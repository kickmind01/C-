// ex08b.h : Haupt-Header-Datei f�r die Anwendung EX08B
//

#if !defined(AFX_EX08B_H__D7A96B37_3FE9_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX08B_H__D7A96B37_3FE9_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CEx08bApp:
// Siehe ex08b.cpp f�r die Implementierung dieser Klasse
//

class CEx08bApp : public CWinApp
{
public:
	CEx08bApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx08bApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung
	//{{AFX_MSG(CEx08bApp)
	afx_msg void OnAppAbout();
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // !defined(AFX_EX08B_H__D7A96B37_3FE9_11D2_A4E4_00403394CA84__INCLUDED_)
