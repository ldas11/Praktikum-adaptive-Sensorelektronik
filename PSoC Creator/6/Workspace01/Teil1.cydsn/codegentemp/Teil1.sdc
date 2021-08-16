# THIS FILE IS AUTOMATICALLY GENERATED
# Project: E:\Praktikum adaptive Sensorelektronik\PSoC Creator\6\Workspace01\Teil1.cydsn\Teil1.cyprj
# Date: Mon, 25 Jun 2018 12:09:49 GMT
#set_units -time ns
create_clock -name {CyXTAL} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/xtal}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {ADC_SAR_1_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 21 43} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_generated_clock -name {UART_1_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 431 861} [list [get_pins {ClockBlock/dclk_glb_0}]]


# Component constraints for E:\Praktikum adaptive Sensorelektronik\PSoC Creator\6\Workspace01\Teil1.cydsn\TopDesign\TopDesign.cysch
# Project: E:\Praktikum adaptive Sensorelektronik\PSoC Creator\6\Workspace01\Teil1.cydsn\Teil1.cyprj
# Date: Mon, 25 Jun 2018 12:09:44 GMT
