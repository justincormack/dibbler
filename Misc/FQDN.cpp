/*                                                                           
 * Dibbler - a portable DHCPv6                                               
 *                                                                           
 * authors: Tomasz Mrugalski <thomson@klub.com.pl>                           
 *          Marek Senderski <msend@o2.pl>                                    
 *                                                                           
 * released under GNU GPL v2 or later licence                                
 *                                                                           
 * $Id: FQDN.cpp,v 1.2 2006-07-03 17:59:38 thomson Exp $
 *
 */

#include <stdlib.h>
#include <string.h>
#include "FQDN.h"
#include "Portable.h"

// FIXME: TFQDN should be implemented using SmartPtr()


TFQDN::TFQDN() {
    this->Duid = new TDUID();
    this->Addr = new TIPv6Addr();
    this->Name = "";
    this->used = false;
}

TFQDN::TFQDN(TDUID *duid_, string name_,bool used_) {
    this->Addr = new TIPv6Addr();
    this->Duid = duid_;
    this->Name = name_;
    this->used = used_;
}

TFQDN::TFQDN(TIPv6Addr *addr_, string name_,bool used_) {
    this->Duid = new TDUID();
    this->Addr = addr_;
    this->Name = name_;
    this->used = used_;
}

TFQDN::TFQDN(string name_,bool used_) {
    this->Duid = new TDUID();
    this->Addr = new TIPv6Addr();
    this->Name = name_;
    this->used = used_;
}

TDUID TFQDN::getDuid() {
    return *this->Duid;
}

TIPv6Addr TFQDN::getAddr() {
    return *this->Addr;
}

string TFQDN::getName() {
    return this->Name;
}

bool TFQDN::isUsed() {
    return this->used;
}

void TFQDN::setUsed(bool used) {
    this->used = used;
}
