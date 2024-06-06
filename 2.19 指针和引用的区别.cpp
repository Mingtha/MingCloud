44a:
<\d{3}>%{SYSLOGTIMESTAMP:trigger_time} (?<device_sn>[\dA-Z]+?)\(root\) \w+ (?<traffic_type>Threat)@(?<traffic_sub_type>[A-Z]+?): 警告：从\[?(?<src_ip>%{DATA})\]?:(?<src_port>\d+?)（(?<src_intf>.+?)）到\[?(?<dst_ip>%{DATA})\]?:(?<dst_port>\d+?)（(?<dst_intf>.+?)），威胁名称：(?<threat_name>.+?)，威胁类型：(?<threat_type>.+?)，威胁子类型：(?<threat_sub_type>.+?)，应用/协议：(?<protocol>.+?)，响应行为：(?<action>.+?)，检测引擎：(?<engine>.+?)，错误编号：(?<error_id>.+?)， profile：(?<detection_profile>.+?)，威胁级别：(?<severity>.+?)，策略号：(?<policy_id>.+?)，数据包编号：(?<packet_id>.+?)，聚合攻击次数：(?<attack_count>.+)

412:
<\d{3}>%{SYSLOGTIMESTAMP:trigger_time} (?<device_sn>[\dA-Z]+?)\(root\) 460c9412 (?<traffic_type>Threat)@(?<traffic_sub_type>[A-Z]+?): 从\[?(?<src_ip>%{DATA})\]?:(?<src_port>\d+?)\((?<src_intf>.+?)\)到\[?(?<dst_ip>%{DATA})\]?:(?<dst_port>\d+?)\((?<dst_intf>.+?)\)，威胁名称：(?<threat_name>.+?)，威胁类型：(?<threat_type>.+?)，威胁子类型：(?<threat_sub_type>.+?)，应用/协议：(?<protocol>.+?)，响应行为：(?<action>.+?)，检测引擎：(?<engine>.+?)，威胁等级：(?<severity>.+?)，安全域 (?<security_domain>.+)

413:  
<\d{3}>%{SYSLOGTIMESTAMP:trigger_time} (?<device_sn>[\dA-Z]+?)\(root\) 460c9413 (?<traffic_type>Threat)@(?<traffic_sub_type>[A-Z]+?): 从\[?(?<src_ip>%{IP})\]?:(?<src_port>\d+?)\((?<src_intf>.+?)\)到\[?(?<dst_ip>%{IP})\]?:(?<dst_port>\d+?)\((?<dst_intf>.+?)\)，威胁名称：(?<threat_name>.+?)，威胁类型：(?<threat_type>.+?)，威胁子类型：(?<threat_sub_name>.+?)，应用/协议：(?<protocol>.+?)，响应行为：(?<action>.+?)，检测引擎：(?<engine>.+?), 威胁等级：(?<severity>.+?)，安全域 tap-bds：(?<detail>.+)
