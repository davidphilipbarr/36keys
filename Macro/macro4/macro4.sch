EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "mkbd"
Date "2019-04-16"
Rev "0.1"
Comp "foostan"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 5CB5CEB9
P 1075 800
F 0 "#FLG0101" H 1075 875 50  0001 C CNN
F 1 "PWR_FLAG" H 1075 974 50  0000 C CNN
F 2 "" H 1075 800 50  0001 C CNN
F 3 "~" H 1075 800 50  0001 C CNN
	1    1075 800 
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG0102
U 1 1 5CB5CEE5
P 725 800
F 0 "#FLG0102" H 725 875 50  0001 C CNN
F 1 "PWR_FLAG" H 725 973 50  0000 C CNN
F 2 "" H 725 800 50  0001 C CNN
F 3 "~" H 725 800 50  0001 C CNN
	1    725  800 
	-1   0    0    1   
$EndComp
$Comp
L power:VCC #PWR0101
U 1 1 5CB5CF52
P 725 800
F 0 "#PWR0101" H 725 650 50  0001 C CNN
F 1 "VCC" H 742 973 50  0000 C CNN
F 2 "" H 725 800 50  0001 C CNN
F 3 "" H 725 800 50  0001 C CNN
	1    725  800 
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 5CB5CFBD
P 1075 800
F 0 "#PWR0102" H 1075 550 50  0001 C CNN
F 1 "GND" H 1080 627 50  0000 C CNN
F 2 "" H 1075 800 50  0001 C CNN
F 3 "" H 1075 800 50  0001 C CNN
	1    1075 800 
	1    0    0    -1  
$EndComp
Text Label 3200 1300 0    50   ~ 0
GND
Text Label 1800 1100 2    50   ~ 0
GND
Text Label 1800 1300 2    50   ~ 0
VCC
Text Label 3200 1600 0    50   ~ 0
SW_1
NoConn ~ 1800 1000
NoConn ~ 1800 1400
NoConn ~ 1800 1500
NoConn ~ 1800 2100
NoConn ~ 1800 2000
NoConn ~ 1800 1900
NoConn ~ 1800 1800
NoConn ~ 1800 1700
NoConn ~ 3200 1000
$Comp
L mkbd-rescue:SW_PUSH-kbd SW1
U 1 1 5CB5D7EA
P 4150 1775
F 0 "SW1" H 4150 2030 50  0000 C CNN
F 1 "SW_PUSH" H 4150 1939 50  0000 C CNN
F 2 "kbd:CherryMX_1u" H 4150 1775 50  0001 C CNN
F 3 "" H 4150 1775 50  0000 C CNN
	1    4150 1775
	1    0    0    -1  
$EndComp
Text Label 1800 1200 2    50   ~ 0
RESET
Text Label 3875 1250 2    50   ~ 0
RESET
$Comp
L Switch:SW_Push RSW1
U 1 1 5CB5EA0E
P 4075 1250
F 0 "RSW1" H 4075 1535 50  0000 C CNN
F 1 "SW_Push" H 4075 1444 50  0000 C CNN
F 2 "kbd:ResetSW_1side" H 4075 1450 50  0001 C CNN
F 3 "" H 4075 1450 50  0001 C CNN
	1    4075 1250
	1    0    0    -1  
$EndComp
Text Label 4275 1250 0    50   ~ 0
GND
NoConn ~ 1800 1600
Text Label 3200 1700 0    50   ~ 0
SW_2
Text Label 3200 1800 0    50   ~ 0
SW_3
Text Label 3200 1900 0    50   ~ 0
SW_4
Text Label 3200 2000 0    50   ~ 0
SW_5
Text Label 3200 2100 0    50   ~ 0
SW_6
Text Label 3850 1775 2    50   ~ 0
SW_1
Text Label 4450 1775 0    50   ~ 0
GND
$Comp
L mkbd-rescue:SW_PUSH-kbd SW2
U 1 1 5CB5EE19
P 5175 1775
F 0 "SW2" H 5175 2030 50  0000 C CNN
F 1 "SW_PUSH" H 5175 1939 50  0000 C CNN
F 2 "kbd:CherryMX_1u" H 5175 1775 50  0001 C CNN
F 3 "" H 5175 1775 50  0000 C CNN
	1    5175 1775
	1    0    0    -1  
$EndComp
Text Label 4875 1775 2    50   ~ 0
SW_2
Text Label 5475 1775 0    50   ~ 0
GND
$Comp
L mkbd-rescue:SW_PUSH-kbd SW3
U 1 1 5CB5EE40
P 6200 1775
F 0 "SW3" H 6200 2030 50  0000 C CNN
F 1 "SW_PUSH" H 6200 1939 50  0000 C CNN
F 2 "kbd:CherryMX_1u" H 6200 1775 50  0001 C CNN
F 3 "" H 6200 1775 50  0000 C CNN
	1    6200 1775
	1    0    0    -1  
$EndComp
Text Label 5900 1775 2    50   ~ 0
SW_3
Text Label 6500 1775 0    50   ~ 0
GND
$Comp
L mkbd-rescue:SW_PUSH-kbd SW4
U 1 1 5CB5EE8C
P 4150 2225
F 0 "SW4" H 4150 2480 50  0000 C CNN
F 1 "SW_PUSH" H 4150 2389 50  0000 C CNN
F 2 "kbd:CherryMX_1u" H 4150 2225 50  0001 C CNN
F 3 "" H 4150 2225 50  0000 C CNN
	1    4150 2225
	1    0    0    -1  
$EndComp
Text Label 3850 2225 2    50   ~ 0
SW_4
Text Label 4450 2225 0    50   ~ 0
GND
$Comp
L mkbd-rescue:SW_PUSH-kbd SW5
U 1 1 5CB5EE94
P 5175 2225
F 0 "SW5" H 5175 2480 50  0000 C CNN
F 1 "SW_PUSH" H 5175 2389 50  0000 C CNN
F 2 "kbd:CherryMX_1u" H 5175 2225 50  0001 C CNN
F 3 "" H 5175 2225 50  0000 C CNN
	1    5175 2225
	1    0    0    -1  
$EndComp
Text Label 4875 2225 2    50   ~ 0
SW_5
Text Label 5475 2225 0    50   ~ 0
GND
$Comp
L mkbd-rescue:SW_PUSH-kbd SW6
U 1 1 5CB5EE9C
P 6200 2225
F 0 "SW6" H 6200 2480 50  0000 C CNN
F 1 "SW_PUSH" H 6200 2389 50  0000 C CNN
F 2 "kbd:CherryMX_1u" H 6200 2225 50  0001 C CNN
F 3 "" H 6200 2225 50  0000 C CNN
	1    6200 2225
	1    0    0    -1  
$EndComp
Text Label 5900 2225 2    50   ~ 0
SW_6
Text Label 6500 2225 0    50   ~ 0
GND
NoConn ~ 3200 1400
NoConn ~ 3200 1500
$Comp
L mkbd-rescue:ProMicro_r-kbd U1
U 1 1 5CB5F40D
P 2450 1700
F 0 "U1" H 2500 2687 60  0000 C CNN
F 1 "ProMicro_r" H 2500 2581 60  0000 C CNN
F 2 "" H 2600 650 60  0001 C CNN
F 3 "" H 2600 650 60  0000 C CNN
	1    2450 1700
	1    0    0    -1  
$EndComp
NoConn ~ 3200 1100
Text Label 3200 1200 0    50   ~ 0
GND
$Comp
L Device:Rotary_Encoder_Switch SW7
U 1 1 5E9A134E
P 5150 1100
F 0 "SW7" H 5150 1467 50  0000 C CNN
F 1 "Rotary_Encoder_Switch" H 5150 1376 50  0000 C CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 5000 1260 50  0001 C CNN
F 3 "~" H 5150 1360 50  0001 C CNN
	1    5150 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	4850 1000 3200 1000
Wire Wire Line
	4850 1200 3450 1200
Wire Wire Line
	3450 1200 3450 1100
Wire Wire Line
	3450 1100 3200 1100
$EndSCHEMATC
