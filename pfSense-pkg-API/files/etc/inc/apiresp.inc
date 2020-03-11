<?php
// Return our error array
function api_error_lib() {
    $err_lib = array(
        // 0-999 reserved for system API level responses
        0 => "Success",
        1 => "Process encountered unexpected error",
        2 => "Invalid HTTP method",
        3 => "Authentication failed",
        4 => "Authorization failed",
        5 => "Incompatible pfSense version",
        6 => "Forbidden",
        7 => "Search attribute not found",
        8 => "Could not locate pfSense version",
        // 1000-1999 reserved for /system API calls
        1000 => "Invalid system hostname",
        1001 => "Invalid system hostname domain",
        1002 => "System certificate descriptive name required",
        1003 => "Invalid system certificate",
        1004 => "Invalid system certificate key",
        1005 => "System certificate in use",
        1006 => "ARP IP required",
        1007 => "Invalid system DNS server IP address",
        1008 => "System DNS server IP address required",
        // 2000-2999 reserved for /services API calls
        2000 => "Invalid sshd enable value",
        2001 => "Invalid sshd key only mode",
        2002 => "Invalid sshd agent forwarding value",
        2003 => "Invalid sshd port",
        2004 => "Unbound host override hostname required",
        2005 => "Unbound host override domain required",
        2006 => "Unbound host override IP address required",
        2007 => "Unbound host override alias hostname required",
        2008 => "Unbound host override alias domain required",
        2009 => "Unbound host override alias already exists",
        2010 => "Unbound host override already exists",
        2011 => "Invalid unbound host override IP address",
        2012 => "Unbound host override new IP required",
        2013 => "Unbound host override does not exist",
        // 3000-3999 reserved for /interfaces API calls
        3000 => "Unknown interface ID",
        3001 => "Interface ID in use",
        3002 => "Interface ID required",
        3003 => "Invalid interface MAC address",
        3004 => "Invalid interface MTU value",
        3005 => "Invalid interface MSS value",
        3006 => "Interface MSS value greater than parent interface",
        3007 => "Invalid interface speed and duplex",
        3008 => "Interface descriptive name already in use",
        3009 => "Interface IPv4 address already in use",
        3010 => "Invalid interface IPv4 address",
        3011 => "Interface type staticv4 requires IPv4 address",
        3012 => "Invalid interface IPv4 subnet",
        3013 => "Interface type staticv4 requires subnet bitmask",
        3014 => "Invalid interface IPv4 gateway",
        3015 => "Invalid interface DHCP alias address",
        3016 => "Invalid interface DHCP reject from address",
        3017 => "Invalid interface DHCP timeout value",
        3018 => "Invalid interface DHCP retry value",
        3019 => "Invalid interface DHCP timeout value",
        3020 => "Invalid interface DHCP reboot value",
        3021 => "Invalid interface DHCP backoff cutoff value",
        3022 => "Invalid interface DHCP initial interval value",
        3023 => "Invalid interface DHCP configuration file",
        3024 => "Invalid interface DHCP VLAN priority value",
        3025 => "Invalid interface IPv4 configuration type",
        3026 => "Invalid interface IPv6 address",
        3027 => "Interface IPv6 address already in use",
        3028 => "Interface staticv6 requires IPv6 address",
        3029 => "Invalid interface IPv6 subnet",
        3030 => "Interface type staticv6 requires subnet bitmask",
        3031 => "Invalid interface IPv6 gateway",
        3032 => "Invalid interface IPv6 prefix delegation size",
        3033 => "Invalid interface DHCP6 VLAN priority value",
        3034 => "Invalid interface DHCP6 configuration file",
        3035 => "Invalid interface 6RD gateway address",
        3036 => "Interface 6RD gateway address required",
        3037 => "Invalid interface 6RD prefix length",
        3038 => "Invalid interface IPv6 track interface",
        3039 => "Interface IPv6 track interface required",
        3040 => "Invalid interface IPv6 track prefix hex value",
        3041 => "Invalid interface IPv6 configuration type",
        3042 => "Interface WAN cannot be deleted",
        3043 => "Interface cannot be deleted while member of interface group",
        3044 => "Interface cannot be deleted while member of bridge interface",
        3045 => "Interface cannot be deleted while member of GRE tunnel",
        3046 => "Interface cannot be deleted while member of GIF tunnel",
        3047 => "Interface cannot be deleted with existing traffic shaper configuration",
        3048 => "Interface VLAN tag required",
        3049 => "Interface VLAN tag in use",
        3050 => "Interface VLAN does not exist",
        3051 => "Interface VLAN parent does not exist",
        3052 => "Invalid interface VLAN tag",
        3053 => "Invalid interface VLAN priority value",
        3054 => "Interface VLAN already exists on parent",
        3055 => "Interface VLAN parent required",
        // 4000-4999 reserved for /firewall API calls
        4000 => "Port forward interface required",
        4001 => "Port forward rule protocol required",
        4002 => "Port forward redirect IP required",
        4003 => "Port forward redirect port required",
        4004 => "Port forward source required",
        4005 => "Port forward destination required",
        4006 => "Unknown port forward interface",
        4007 => "Unknown port forward protocol",
        4008 => "Unknown port forward NAT reflection value",
        4009 => "Invalid port forward redirect IP",
        4010 => "Invalid port forward redirect port",
        4011 => "Invalid port forward source address",
        4012 => "Invalid port forward source address",
        4013 => "Invalid port forward source port",
        4014 => "Invalid port forward destination port",
        4015 => "Port forward rule ID required",
        4016 => "Port forward rule ID does not exist",
        4017 => "Virtual IP configuration ID required",
        4018 => "Virtual IP configuration ID does not exist",
        4019 => "Virtual IP mode required",
        4020 => "Virtual IP interface required",
        4021 => "Virtual IP subnet required",
        4022 => "Virtual IP CARP password required",
        4023 => "Unknown virtual IP mode",
        4024 => "Unknown virtual IP interface",
        4025 => "Invalid virtual IP subnet",
        4026 => "Virtual IP subnet already in use",
        4027 => "Virtual IP VHID already in use",
        4028 => "Invalid virtual IP VHID",
        4029 => "Invalid virtual IP CARP advertisement base",
        4030 => "Invalid virtual IP CARP advertisement skew",
        4031 => "Firewall rule ID required",
        4032 => "Firewall rule ID does not exist",
        4033 => "Firewall rule type required",
        4034 => "Firewall rule interface required",
        4035 => "Firewall rule IP version required",
        4036 => "Firewall rule protocol required",
        4037 => "Firewall rule source required",
        4038 => "Firewall rule destination required",
        4039 => "Unknown firewall rule type",
        4040 => "Unknown firewall rule interface",
        4041 => "Unknown firewall rule IP version",
        4042 => "Unknown firewall rule protocol",
        4043 => "Unknown firewall rule gateway",
        4044 => "Invalid firewall rule source",
        4045 => "Invalid firewall rule destination",
        4046 => "Unknown firewall rule ICMP subtype",
        4047 => "Firewall rule source and destination port required",
        4048 => "Invalid firewall rule source port",
        4049 => "Invalid firewall rule destination port",
        4050 => "Firewall alias name required",
        4051 => "Firewall alias in use",
        4052 => "Firewall alias address value required",
        4053 => "Firewall alias name must be type string",
        4054 => "Firewall alias address must be type array",
        4055 => "Firewall alias does not exist",
        4056 => "Firewall alias already exists",
        4057 => "Unknown firewall alias type",
        4058 => "Invalid firewall alias IP address or hostname",
        4059 => "Invalid firewall alias subnet",
        4060 => "Invalid firewall alias port",
        4061 => "Firewall alias type required",
        4062 => "Firewall alias type must be type string",
        4063 => "Firewall alias description must be type string",
        4064 => "Firewall alias detail must be type array",
        4065 => "Invalid firewall alias port value",
        4066 => "Firewall alias port values must be numeric",
        4067 => "Invalid firewall alias IP address",
        4068 => "Invalid firewall alias subnet",
        4069 => "Firewall alias address values must be valid CIDR",
        4070 => "Alias address contents must be type string",
        4071 => "Alias detail contents must be type string",
        4072 => "Firewall state maximum size required",
        4073 => "Invalid firewall state table size",
        //5000-5999 reserved for /users API calls
        5000 => "Username required",
        5001 => "User does not exist",
        5002 => "User already exists",
        5003 => "User password required",
        5004 => "User privilege required",
        5005 => "User privilege must be type array or string",
        5006 => "Unknown user privilege",
        5007 => "User group name required",
        5008 => "Unknown group name",
        5009 => "Group must be type array or string",
        5010 => "User authentication server name required",
        5011 => "LDAP authentication server hostname or IP required",
        5012 => "Invalid LDAP authentication server hostname or IP",
        5013 => "Authentication server LDAP port required",
        5014 => "Invalid authentication server LDAP port",
        5015 => "Authentication server LDAP URL type required",
        5016 => "Invalid authentication server LDAP URL type",
        5017 => "Invalid authentication server LDAP protocol version",
        5018 => "Authentication server LDAP search scope required",
        5019 => "Invalid authentication server LDAP search scope",
        5020 => "Authentication server LDAP bind DN required",
        5021 => "Authentication server LDAP bind password required",
        5022 => "Authentication server LDAP user naming attribute required",
        5023 => "Authentication server LDAP group naming attribute required",
        5024 => "Authentication server LDAP group member attribute required",
    );
    return $err_lib;
}

// Export the error array as JSON for third party integration
function export_err_lib() {
    $err_lib = api_error_lib();
    return json_encode($err_lib);
}