#pragma once

class CLoginState : public CWindowImpl<CLoginState>
{ 
	public :	
		CLoginState() ; 
		~CLoginState() ;
	public :	
		DECLARE_WND_CLASS(NULL) 
			
		BEGIN_MSG_MAP(CLoginState) 
			MESSAGE_HANDLER(WM_COMMAND, OnCommand) 
			MESSAGE_HANDLER(WM_PAINT, OnPaint) 
			MESSAGE_HANDLER(WM_DESTROY, OnDestory)
		END_MSG_MAP()
	public :
		LRESULT OnCommand(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled) ;
		LRESULT OnPaint(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled) ;
		LRESULT OnDestory(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled) ;
} ;

