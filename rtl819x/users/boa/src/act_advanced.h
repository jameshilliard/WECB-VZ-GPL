/*
 *      Advanced Define 
 *
 *      Authors: Erishen  <lsun@actiontec.com>
 *
 */

#ifndef ACT_ADVANCED_H
#define ACT_ADVANCED_H

#include "act_common.h"
#include "act_wcb.h"
#include "act_log.h"
#include "act_tr69.h"

#define TYPE_STR 1
#define TYPE_INT 2
#define BUF_LEN10 10
#define BUF_LEN20 20
#define BUF_LEN64 64
#define DEVICE_DHCPV4_CLIENT          "Device.DHCPv4.Client"
#define DEVICE_DHCPV4_CLIENT_1        "Device.DHCPv4.Client.1"
#define DEVICE_IP_INTER1_IPADDR_1     "Device.IP.Interface.1.IPv4Address.1"
#define DEVICE_MANAGEMENT_SERVER  "Device.ManagementServer"

struct ctable {
  char *nn;
  void *vv;
  int type;
};

void getAdvValue(char *type, char *retvalue);

#endif

