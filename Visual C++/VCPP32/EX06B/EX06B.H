// ex06b.h :  Haupt-Header-Datei f�r die Anwendung EX06B 
//

#if !defined(AFX_EX06B_H__6F45AD91_561B_11D0_8FCF_00C04FC2A0C2__INCLUDED_)
#define AFX_EX06B_H__6F45AD91_561B_11D0_8FCF_00C04FC2A0C2__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CEx06bApp:
// Siehe ex06b.cpp f�r die Implementierung dieser Klasse
//

class CEx06bApp : public CWinApp
{
public:
	CEx06bApp();


// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx06bApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung

	//{{AFX_MSG(CEx06bApp)
	afx_msg void OnAppAbout();
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio f�gt zus�tzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX06B_H__6F45AD91_561B_11D0_8FCF_00C04FC2A0C2__INCLUDED_)
