// ex05c.h : Haupt-Header-Datei f�r die Anwendung EX05C
//

#if !defined(AFX_EX05C_H__B6485BDA_BC08_11D0_A42B_444553540000__INCLUDED_)
#define AFX_EX05C_H__B6485BDA_BC08_11D0_A42B_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CEx05cApp:
// Siehe ex05c.cpp f�r die Implementierung dieser Klasse
//

class CEx05cApp : public CWinApp
{
public:
	CEx05cApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx05cApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung

	//{{AFX_MSG(CEx05cApp)
	afx_msg void OnAppAbout();
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio f�gt zus�tzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX05C_H__B6485BDA_BC08_11D0_A42B_444553540000__INCLUDED_)
