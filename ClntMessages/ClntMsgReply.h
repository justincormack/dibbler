/*
 * Dibbler - a portable DHCPv6
 *
 * authors: Tomasz Mrugalski <thomson@klub.com.pl>
 *          Marek Senderski <msend@o2.pl>
 *
 * released under GNU GPL v2 or later licence
 *
 * $Id: ClntMsgReply.h,v 1.2 2004-06-20 17:51:48 thomson Exp $
 *
 * $Log: not supported by cvs2svn $
 *
 */

class TClntMsgReply;
#ifndef CLNTMSGREPLY_H
#define CLNTMSGREPLY_H
#include "ClntMsg.h"

class TClntMsgReply : public TClntMsg
{
  public:
    TClntMsgReply(SmartPtr<TClntIfaceMgr> IfaceMgr, 
		  SmartPtr<TClntTransMgr> TransMgr, 
		  SmartPtr<TClntCfgMgr>   CfgMgr, 
		  SmartPtr<TClntAddrMgr> AddrMgr,
		  int iface, SmartPtr<TIPv6Addr> addr);

    TClntMsgReply(SmartPtr<TClntIfaceMgr> IfaceMgr, 
		  SmartPtr<TClntTransMgr> TransMgr, 
		  SmartPtr<TClntCfgMgr>   CfgMgr, 
		  SmartPtr<TClntAddrMgr> AddrMgr,
		  int iface, SmartPtr<TIPv6Addr> addr, char* buf, int bufSize);
	
    void answer(SmartPtr<TMsg> Rep);
    void doDuties();
    bool check();
    string getName();
    ~TClntMsgReply();
};

#endif /* CLNTMSGREPLY_H */
