## Master .xdc for the Blackboard


##LEDS
set_property -dict { PACKAGE_PIN N20 IOSTANDARD LVCMOS33 } [get_ports { led[0] }]; # LD0
set_property -dict { PACKAGE_PIN P20 IOSTANDARD LVCMOS33 } [get_ports { led[1] }]; # LD1

##PmodA                                                                                                        
set_property -dict { PACKAGE_PIN F16  IOSTANDARD LVCMOS33 } [get_ports { IIC_0_sda_io }]; # Sch=JA1_P
set_property -dict { PACKAGE_PIN G19  IOSTANDARD LVCMOS33 } [get_ports { IIC_0_scl_io }]; # Sch=JA2_P
#set_property -dict { PACKAGE_PIN G20   IOSTANDARD LVCMOS33 } [get_ports { JA2_N }]; #IO_L18N_T2_AD13N_35 Sch=JA2_N
#set_property -dict { PACKAGE_PIN E18   IOSTANDARD LVCMOS33 } [get_ports { JA3_P }]; #IO_L5P_T0_AD9P_35 Sch=JA3_P
#set_property -dict { PACKAGE_PIN E19   IOSTANDARD LVCMOS33 } [get_ports { JA3_N }]; #IO_L5N_T0_AD9N_35 Sch=JA3_N
#set_property -dict { PACKAGE_PIN E17   IOSTANDARD LVCMOS33 } [get_ports { JA4_P }]; #IO_L3P_T0_DQS_AD1P_35 Sch=JA4_P
#set_property -dict { PACKAGE_PIN D18   IOSTANDARD LVCMOS33 } [get_ports { JA4_N }]; #IO_L3N_T0_DQS_AD1N_35 Sch=JA4_N
                           
##PmodB                                                                                                        
#set_property -dict { PACKAGE_PIN D19   IOSTANDARD LVCMOS33 } [get_ports { JB1_P }]; #IO_L4P_T0_35 Sch=JB1_P   
#set_property -dict { PACKAGE_PIN D20   IOSTANDARD LVCMOS33 } [get_ports { JB1_N }]; #IO_L4N_T0_35 Sch=JB1_N   
#set_property -dict { PACKAGE_PIN F19   IOSTANDARD LVCMOS33 } [get_ports { JB2_P }]; #IO_L15P_T2_DQS_AD12P_35 Sch=JB2_P
#set_property -dict { PACKAGE_PIN F20   IOSTANDARD LVCMOS33 } [get_ports { JB2_N }]; #IO_L15N_T2_DQS_AD12N_35 Sch=JB2_N
#set_property -dict { PACKAGE_PIN C20   IOSTANDARD LVCMOS33 } [get_ports { JB3_P }]; #IO_L1P_T0_AD0P_35 Sch=JB3_PJA
#set_property -dict { PACKAGE_PIN B20   IOSTANDARD LVCMOS33 } [get_ports { JB3_N }]; #IO_L1N_T0_AD0N_35 Sch=JB3_N
#set_property -dict { PACKAGE_PIN B19   IOSTANDARD LVCMOS33 } [get_ports { JB4_P }]; #IO_L2P_T0_AD8P_35 Sch=JB4_P
#set_property -dict { PACKAGE_PIN A20   IOSTANDARD LVCMOS33 } [get_ports { JB4_N }]; #IO_L2N_T0_AD8N_35 Sch=JB4_N
                                                                                                               
#Servos                                                                                                        
#set_property -dict { PACKAGE_PIN G17   IOSTANDARD LVCMOS33 } [get_ports servo1]; #IO_L16P_T2_35 Sch=SERVO1     
#set_property -dict { PACKAGE_PIN G15   IOSTANDARD LVCMOS33 } [get_ports servo2]; #IO_L19N_T3_VREF_35 Sch=SERVO2
#set_property -dict { PACKAGE_PIN G14   IOSTANDARD LVCMOS33 } [get_ports servo3]; #IO_0_35 Sch=SERVO3           
#set_property -dict { PACKAGE_PIN M19   IOSTANDARD LVCMOS33 } [get_ports servo4]; #IO_L7P_T1_AD2P_35 Sch=SERVO4