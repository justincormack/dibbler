/*
 * Dibbler - a portable DHCPv6
 *
 * authors: Tomasz Mrugalski <thomson@klub.com.pl>
 *          Marek Senderski <msend@o2.pl>
 *
 * released under GNU GPL v2 or later licence
 *
 * $Id: ClntMsgAdvertise.h,v 1.2 2004-06-20 17:51:48 thomson Exp $
 *
 * $Log: not supported by cvs2svn $
 *
 */

#ifndef SRVMSGADVERTISE_H
#define SRVMSGADVERTISE_H

#include "ClntMsg.h"

class TClntMsgAdvertise : public TClntMsg
{
  public:
    TClntMsgAdvertise(SmartPtr<TClntIfaceMgr> IfaceMgr,
		      SmartPtr<TClntTransMgr> TransMgr,
		      SmartPtr<TClntCfgMgr>   CfgMgr,
		      SmartPtr<TClntAddrMgr>  AddrMgr,
		      int iface, SmartPtr<TIPv6Addr> addr);
    
    TClntMsgAdvertise(SmartPtr<TClntIfaceMgr> IfaceMgr,
		      SmartPtr<TClntTransMgr> TransMgr,
		      SmartPtr<TClntCfgMgr> CfgMgr,
		      SmartPtr<TClntAddrMgr> AddrMgr,
		      int iface, SmartPtr<TIPv6Addr> addr, 
		      char* buf, int bufSize);
    
    // returns preference value (default value is 0)
    int getPreference();
    bool check();
    void answer(SmartPtr<TMsg> Rep);
    void doDuties();
    string getName();
    ~TClntMsgAdvertise();
};

#endif 
