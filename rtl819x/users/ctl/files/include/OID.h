#ifndef OID_H
#define OID_H

#define TR69_OID_DEVICE "Device" 

#define TR69_OID_DEVICE_INFO "Device.DeviceInfo" 

#define TR69_OID_VENDOR_CONFIG_FILE "Device.DeviceInfo.VendorConfigFile" 

#define TR69_OID_GATEWAY_INFO "Device.GatewayInfo" 

#define TR69_OID_MANAGEMENT_SERVER "Device.ManagementServer" 

#define TR69_OID_MANAGEABLE_DEVICE "Device.ManagementServer.ManageableDevice" 

#define TR69_OID_TIME_SERVER_CFG "Device.Time" 

#define TR69_OID_LAN "Device.LAN" 

#define TR69_OID_DHCP_OPTION "Device.LAN.DHCPOption" 

#define TR69_OID_LAN_STATS "Device.LAN.Stats" 

#define TR69_OID_LANIP_PING_DIAGNOSTICS "Device.LAN.IPPingDiagnostics" 

#define TR69_OID_INTERFACE_STACK "Device.InterfaceStack" 

#define TR69_OID_ETHERNET "Device.Ethernet" 

#define TR69_OID_ETHERNET_INTERFACE "Device.Ethernet.Interface" 

#define TR69_OID_ETHERNET_INTERFACE_STATS "Device.Ethernet.Interface.%d.Stats" 

#define TR69_OID_ETHERNET_LINK "Device.Ethernet.Link" 

#define TR69_OID_MOCA "Device.MoCA" 

#define TR69_OID_MOCA_INTERFACE "Device.MoCA.Interface" 

#define TR69_OID_MOCA_INTERFACE_STAT "Device.MoCA.Interface.%d.Stats" 

#define TR69_OID_MOCAQOS "Device.MoCA.Interface.%d.QoS" 

#define TR69_OID_MOCAQOS_FLOW_STAT "Device.MoCA.Interface.%d.QoS.FlowStats" 

#define TR69_OID_MOCA_ASSOCIATED_DEV "Device.MoCA.Interface.%d.AssociatedDevice" 

#define TR69_OID_WIFI "Device.WiFi" 

#define TR69_OID_WIFI_RADIO "Device.WiFi.Radio" 

#define TR69_OID_WIFISSID "Device.WiFi.SSID" 

#define TR69_OID_WIFI_ACCESS_POINT "Device.WiFi.AccessPoint" 

#define TR69_OID_WIFI_ACCESS_POINT_SECURITY "Device.WiFi.AccessPoint.%d.Security" 

#define TR69_OID_WIFI_ACCESS_POINT_ASSOCIATED_DEVICE "Device.WiFi.AccessPoint.%d.AssociatedDevice" 

#define TR69_OID_BRIDGING "Device.Bridging" 

#define TR69_OID_BRIDGING_BRIDGE "Device.Bridging.Bridge" 

#define TR69_OID_BRIDGING_BRIDGE_PORT "Device.Bridging.Bridge.%d.Port" 

#define TR69_OID_BRIDGING_BRIDGE_PORT_STATS "Device.Bridging.Bridge.%d.Port.%d.Stats" 

#define TR69_OID_BRIDGING_BRIDGE_VLAN "Device.Bridging.Bridge.%d.VLAN" 

#define TR69_OID_BRIDGING_BRIDGE_VLAN_PORT "Device.Bridging.Bridge.%d.VLANPort" 

#define TR69_OID_IP "Device.IP" 

#define TR69_OID_IP_INTERFACE "Device.IP.Interface" 

#define TR69_OID_IP_INTERFACE_IPV4_ADDRESS "Device.IP.Interface.%d.IPv4Address" 

#define TR69_OID_IP_INTERFACE_IPV6_ADDRESS "Device.IP.Interface.%d.IPv6Address" 

#define TR69_OID_HOSTS "Device.Hosts" 

#define TR69_OID_HOSTS_HOST "Device.Hosts.Host" 

#define TR69_OID_HOSTS_HOST_IPV4_ADDRESS "Device.Hosts.Host.%d.IPv4Address" 

#define TR69_OID_HOSTS_HOST_IPV6_ADDRESS "Device.Hosts.Host.%d.IPv6Address" 

#define TR69_OID_DHCPV4 "Device.DHCPv4" 

#define TR69_OID_DHCPV4_CLIENT "Device.DHCPv4.Client" 

#define TR69_OID_USERS "Device.Users" 

#define TR69_OID_USERS_USER "Device.Users.User" 

#define TR69_OID_GRE_TUNNEL "Device.GRETunnel" 

#define TR69_OID_ZERO_CONF "Device.X_ACTIONTEC_COM_ZeroConf" 

#define TR69_OID_ZERO_CONF_EXTENDER "Device.X_ACTIONTEC_COM_ZeroConf.Extender" 

#define TR69_OID_LED "Device.X_ACTIONTEC_COM_LED" 

#define TR69_OID_VZ_IGMP_QUERY "Device.X_Verizon_IGMPQuery" 

#endif
