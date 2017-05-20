  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (wss_system__P)
    ;%
      section.nData     = 572;
      section.data(572)  = dumData; %prealloc
      
	  ;% wss_system__P.Gain_Gain
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% wss_system__P.Gain1_Gain
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% wss_system__P.Gain_Gain_n
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% wss_system__P.Gain1_Gain_m
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% wss_system__P.Gain_Gain_d
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% wss_system__P.Gain1_Gain_b
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% wss_system__P.Gain_Gain_l
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% wss_system__P.Gain1_Gain_c
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% wss_system__P.Gain_Gain_dt
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% wss_system__P.Gain1_Gain_k
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% wss_system__P.Gain_Gain_f
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% wss_system__P.Gain1_Gain_a
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% wss_system__P.Gain_Gain_m
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% wss_system__P.Gain1_Gain_mm
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% wss_system__P.Gain_Gain_lw
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% wss_system__P.Gain1_Gain_mh
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% wss_system__P.Gain_Gain_h
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% wss_system__P.Gain1_Gain_e
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% wss_system__P.Gain_Gain_hw
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% wss_system__P.Gain1_Gain_l
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% wss_system__P.Gain_Gain_fm
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% wss_system__P.Gain1_Gain_kj
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% wss_system__P.Gain_Gain_k
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% wss_system__P.Gain1_Gain_f
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% wss_system__P.Gain_Gain_j
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% wss_system__P.Gain1_Gain_i
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% wss_system__P.Comedi0ADC3_P1_Size
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% wss_system__P.Comedi0ADC3_P1
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 28;
	
	  ;% wss_system__P.Comedi0ADC3_P2_Size
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 29;
	
	  ;% wss_system__P.Comedi0ADC3_P2
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 31;
	
	  ;% wss_system__P.Comedi0ADC3_P3_Size
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 32;
	
	  ;% wss_system__P.Comedi0ADC3_P3
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 34;
	
	  ;% wss_system__P.Comedi0ADC3_P4_Size
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 35;
	
	  ;% wss_system__P.Comedi0ADC3_P4
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 37;
	
	  ;% wss_system__P.Comedi0ADC3_P5_Size
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 38;
	
	  ;% wss_system__P.Comedi0ADC3_P5
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 40;
	
	  ;% wss_system__P.Gain_Gain_mf
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 41;
	
	  ;% wss_system__P.Integ4_gainval
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 42;
	
	  ;% wss_system__P.Integ4_IC
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 43;
	
	  ;% wss_system__P.K1_Value
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 44;
	
	  ;% wss_system__P.K2_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 45;
	
	  ;% wss_system__P.UnitDelay_X0
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 46;
	
	  ;% wss_system__P.Step_Time
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 47;
	
	  ;% wss_system__P.Step_Y0
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 48;
	
	  ;% wss_system__P.Step_YFinal
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 49;
	
	  ;% wss_system__P.Constant_Value
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 50;
	
	  ;% wss_system__P.Switch_Threshold
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 51;
	
	  ;% wss_system__P.Comedi0ADC4_P1_Size
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 52;
	
	  ;% wss_system__P.Comedi0ADC4_P1
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 54;
	
	  ;% wss_system__P.Comedi0ADC4_P2_Size
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 55;
	
	  ;% wss_system__P.Comedi0ADC4_P2
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 57;
	
	  ;% wss_system__P.Comedi0ADC4_P3_Size
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 58;
	
	  ;% wss_system__P.Comedi0ADC4_P3
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 60;
	
	  ;% wss_system__P.Comedi0ADC4_P4_Size
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 61;
	
	  ;% wss_system__P.Comedi0ADC4_P4
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 63;
	
	  ;% wss_system__P.Comedi0ADC4_P5_Size
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 64;
	
	  ;% wss_system__P.Comedi0ADC4_P5
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 66;
	
	  ;% wss_system__P.Gain1_Gain_d
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 67;
	
	  ;% wss_system__P.Integ4_gainval_d
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 68;
	
	  ;% wss_system__P.Integ4_IC_i
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 69;
	
	  ;% wss_system__P.K1_Value_f
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 70;
	
	  ;% wss_system__P.K2_Value_i
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 71;
	
	  ;% wss_system__P.UnitDelay_X0_f
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 72;
	
	  ;% wss_system__P.Step_Time_o
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 73;
	
	  ;% wss_system__P.Step_Y0_n
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 74;
	
	  ;% wss_system__P.Step_YFinal_g
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 75;
	
	  ;% wss_system__P.Constant_Value_g
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 76;
	
	  ;% wss_system__P.Switch_Threshold_m
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 77;
	
	  ;% wss_system__P.Comedi2ADC4_P1_Size
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 78;
	
	  ;% wss_system__P.Comedi2ADC4_P1
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 80;
	
	  ;% wss_system__P.Comedi2ADC4_P2_Size
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 81;
	
	  ;% wss_system__P.Comedi2ADC4_P2
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 83;
	
	  ;% wss_system__P.Comedi2ADC4_P3_Size
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 84;
	
	  ;% wss_system__P.Comedi2ADC4_P3
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 86;
	
	  ;% wss_system__P.Comedi2ADC4_P4_Size
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 87;
	
	  ;% wss_system__P.Comedi2ADC4_P4
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 89;
	
	  ;% wss_system__P.Comedi2ADC4_P5_Size
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 90;
	
	  ;% wss_system__P.Comedi2ADC4_P5
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 92;
	
	  ;% wss_system__P.Gain2_Gain
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 93;
	
	  ;% wss_system__P.Integ4_gainval_m
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 94;
	
	  ;% wss_system__P.Integ4_IC_c
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 95;
	
	  ;% wss_system__P.K1_Value_n
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 96;
	
	  ;% wss_system__P.K2_Value_b
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 97;
	
	  ;% wss_system__P.UnitDelay_X0_p
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 98;
	
	  ;% wss_system__P.Step_Time_c
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 99;
	
	  ;% wss_system__P.Step_Y0_b
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 100;
	
	  ;% wss_system__P.Step_YFinal_o
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 101;
	
	  ;% wss_system__P.Constant_Value_o
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 102;
	
	  ;% wss_system__P.Switch_Threshold_a
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 103;
	
	  ;% wss_system__P.Comedi2ADC5_P1_Size
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 104;
	
	  ;% wss_system__P.Comedi2ADC5_P1
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 106;
	
	  ;% wss_system__P.Comedi2ADC5_P2_Size
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 107;
	
	  ;% wss_system__P.Comedi2ADC5_P2
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 109;
	
	  ;% wss_system__P.Comedi2ADC5_P3_Size
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 110;
	
	  ;% wss_system__P.Comedi2ADC5_P3
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 112;
	
	  ;% wss_system__P.Comedi2ADC5_P4_Size
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 113;
	
	  ;% wss_system__P.Comedi2ADC5_P4
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 115;
	
	  ;% wss_system__P.Comedi2ADC5_P5_Size
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 116;
	
	  ;% wss_system__P.Comedi2ADC5_P5
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 118;
	
	  ;% wss_system__P.Gain3_Gain
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 119;
	
	  ;% wss_system__P.Integ4_gainval_g
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 120;
	
	  ;% wss_system__P.Integ4_IC_m
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 121;
	
	  ;% wss_system__P.K1_Value_o
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 122;
	
	  ;% wss_system__P.K2_Value_e
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 123;
	
	  ;% wss_system__P.UnitDelay_X0_b
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 124;
	
	  ;% wss_system__P.Step_Time_l
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 125;
	
	  ;% wss_system__P.Step_Y0_f
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 126;
	
	  ;% wss_system__P.Step_YFinal_i
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 127;
	
	  ;% wss_system__P.Constant_Value_b
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 128;
	
	  ;% wss_system__P.Switch_Threshold_k
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 129;
	
	  ;% wss_system__P.Constant_Value_oh
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 130;
	
	  ;% wss_system__P.Comedi2ADC0_P1_Size
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 131;
	
	  ;% wss_system__P.Comedi2ADC0_P1
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 133;
	
	  ;% wss_system__P.Comedi2ADC0_P2_Size
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 134;
	
	  ;% wss_system__P.Comedi2ADC0_P2
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 136;
	
	  ;% wss_system__P.Comedi2ADC0_P3_Size
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 137;
	
	  ;% wss_system__P.Comedi2ADC0_P3
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 139;
	
	  ;% wss_system__P.Comedi2ADC0_P4_Size
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 140;
	
	  ;% wss_system__P.Comedi2ADC0_P4
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 142;
	
	  ;% wss_system__P.Comedi2ADC0_P5_Size
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 143;
	
	  ;% wss_system__P.Comedi2ADC0_P5
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 145;
	
	  ;% wss_system__P.Gain_Gain_b
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 146;
	
	  ;% wss_system__P.Integ4_gainval_k
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 147;
	
	  ;% wss_system__P.Integ4_IC_h
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 148;
	
	  ;% wss_system__P.K1_Value_i
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 149;
	
	  ;% wss_system__P.K2_Value_iq
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 150;
	
	  ;% wss_system__P.UnitDelay_X0_j
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 151;
	
	  ;% wss_system__P.Step_Time_ow
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 152;
	
	  ;% wss_system__P.Step_Y0_e
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 153;
	
	  ;% wss_system__P.Step_YFinal_e
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 154;
	
	  ;% wss_system__P.Constant_Value_j
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 155;
	
	  ;% wss_system__P.Switch_Threshold_i
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 156;
	
	  ;% wss_system__P.Constant1_Value
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 157;
	
	  ;% wss_system__P.Comedi0ADC1_P1_Size
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 158;
	
	  ;% wss_system__P.Comedi0ADC1_P1
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 160;
	
	  ;% wss_system__P.Comedi0ADC1_P2_Size
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 161;
	
	  ;% wss_system__P.Comedi0ADC1_P2
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 163;
	
	  ;% wss_system__P.Comedi0ADC1_P3_Size
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 164;
	
	  ;% wss_system__P.Comedi0ADC1_P3
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 166;
	
	  ;% wss_system__P.Comedi0ADC1_P4_Size
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 167;
	
	  ;% wss_system__P.Comedi0ADC1_P4
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 169;
	
	  ;% wss_system__P.Comedi0ADC1_P5_Size
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 170;
	
	  ;% wss_system__P.Comedi0ADC1_P5
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 172;
	
	  ;% wss_system__P.Gain1_Gain_cg
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 173;
	
	  ;% wss_system__P.Integ4_gainval_p
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 174;
	
	  ;% wss_system__P.Integ4_IC_ma
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 175;
	
	  ;% wss_system__P.K1_Value_a
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 176;
	
	  ;% wss_system__P.K2_Value_j
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 177;
	
	  ;% wss_system__P.UnitDelay_X0_h
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 178;
	
	  ;% wss_system__P.Step_Time_b
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 179;
	
	  ;% wss_system__P.Step_Y0_f4
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 180;
	
	  ;% wss_system__P.Step_YFinal_ol
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 181;
	
	  ;% wss_system__P.Constant_Value_l
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 182;
	
	  ;% wss_system__P.Switch_Threshold_l
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 183;
	
	  ;% wss_system__P.Constant2_Value
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 184;
	
	  ;% wss_system__P.Comedi2ADC1_P1_Size
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 185;
	
	  ;% wss_system__P.Comedi2ADC1_P1
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 187;
	
	  ;% wss_system__P.Comedi2ADC1_P2_Size
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 188;
	
	  ;% wss_system__P.Comedi2ADC1_P2
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 190;
	
	  ;% wss_system__P.Comedi2ADC1_P3_Size
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 191;
	
	  ;% wss_system__P.Comedi2ADC1_P3
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 193;
	
	  ;% wss_system__P.Comedi2ADC1_P4_Size
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 194;
	
	  ;% wss_system__P.Comedi2ADC1_P4
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 196;
	
	  ;% wss_system__P.Comedi2ADC1_P5_Size
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 197;
	
	  ;% wss_system__P.Comedi2ADC1_P5
	  section.data(165).logicalSrcIdx = 164;
	  section.data(165).dtTransOffset = 199;
	
	  ;% wss_system__P.Gain2_Gain_o
	  section.data(166).logicalSrcIdx = 165;
	  section.data(166).dtTransOffset = 200;
	
	  ;% wss_system__P.Integ4_gainval_gu
	  section.data(167).logicalSrcIdx = 166;
	  section.data(167).dtTransOffset = 201;
	
	  ;% wss_system__P.Integ4_IC_o
	  section.data(168).logicalSrcIdx = 167;
	  section.data(168).dtTransOffset = 202;
	
	  ;% wss_system__P.K1_Value_nt
	  section.data(169).logicalSrcIdx = 168;
	  section.data(169).dtTransOffset = 203;
	
	  ;% wss_system__P.K2_Value_f
	  section.data(170).logicalSrcIdx = 169;
	  section.data(170).dtTransOffset = 204;
	
	  ;% wss_system__P.UnitDelay_X0_k
	  section.data(171).logicalSrcIdx = 170;
	  section.data(171).dtTransOffset = 205;
	
	  ;% wss_system__P.Step_Time_lb
	  section.data(172).logicalSrcIdx = 171;
	  section.data(172).dtTransOffset = 206;
	
	  ;% wss_system__P.Step_Y0_d
	  section.data(173).logicalSrcIdx = 172;
	  section.data(173).dtTransOffset = 207;
	
	  ;% wss_system__P.Step_YFinal_n
	  section.data(174).logicalSrcIdx = 173;
	  section.data(174).dtTransOffset = 208;
	
	  ;% wss_system__P.Constant_Value_jd
	  section.data(175).logicalSrcIdx = 174;
	  section.data(175).dtTransOffset = 209;
	
	  ;% wss_system__P.Switch_Threshold_m4
	  section.data(176).logicalSrcIdx = 175;
	  section.data(176).dtTransOffset = 210;
	
	  ;% wss_system__P.Constant3_Value
	  section.data(177).logicalSrcIdx = 176;
	  section.data(177).dtTransOffset = 211;
	
	  ;% wss_system__P.Comedi2ADC2_P1_Size
	  section.data(178).logicalSrcIdx = 177;
	  section.data(178).dtTransOffset = 212;
	
	  ;% wss_system__P.Comedi2ADC2_P1
	  section.data(179).logicalSrcIdx = 178;
	  section.data(179).dtTransOffset = 214;
	
	  ;% wss_system__P.Comedi2ADC2_P2_Size
	  section.data(180).logicalSrcIdx = 179;
	  section.data(180).dtTransOffset = 215;
	
	  ;% wss_system__P.Comedi2ADC2_P2
	  section.data(181).logicalSrcIdx = 180;
	  section.data(181).dtTransOffset = 217;
	
	  ;% wss_system__P.Comedi2ADC2_P3_Size
	  section.data(182).logicalSrcIdx = 181;
	  section.data(182).dtTransOffset = 218;
	
	  ;% wss_system__P.Comedi2ADC2_P3
	  section.data(183).logicalSrcIdx = 182;
	  section.data(183).dtTransOffset = 220;
	
	  ;% wss_system__P.Comedi2ADC2_P4_Size
	  section.data(184).logicalSrcIdx = 183;
	  section.data(184).dtTransOffset = 221;
	
	  ;% wss_system__P.Comedi2ADC2_P4
	  section.data(185).logicalSrcIdx = 184;
	  section.data(185).dtTransOffset = 223;
	
	  ;% wss_system__P.Comedi2ADC2_P5_Size
	  section.data(186).logicalSrcIdx = 185;
	  section.data(186).dtTransOffset = 224;
	
	  ;% wss_system__P.Comedi2ADC2_P5
	  section.data(187).logicalSrcIdx = 186;
	  section.data(187).dtTransOffset = 226;
	
	  ;% wss_system__P.Gain3_Gain_a
	  section.data(188).logicalSrcIdx = 187;
	  section.data(188).dtTransOffset = 227;
	
	  ;% wss_system__P.Integ4_gainval_de
	  section.data(189).logicalSrcIdx = 188;
	  section.data(189).dtTransOffset = 228;
	
	  ;% wss_system__P.Integ4_IC_ik
	  section.data(190).logicalSrcIdx = 189;
	  section.data(190).dtTransOffset = 229;
	
	  ;% wss_system__P.K1_Value_av
	  section.data(191).logicalSrcIdx = 190;
	  section.data(191).dtTransOffset = 230;
	
	  ;% wss_system__P.K2_Value_o
	  section.data(192).logicalSrcIdx = 191;
	  section.data(192).dtTransOffset = 231;
	
	  ;% wss_system__P.UnitDelay_X0_by
	  section.data(193).logicalSrcIdx = 192;
	  section.data(193).dtTransOffset = 232;
	
	  ;% wss_system__P.Step_Time_j
	  section.data(194).logicalSrcIdx = 193;
	  section.data(194).dtTransOffset = 233;
	
	  ;% wss_system__P.Step_Y0_h
	  section.data(195).logicalSrcIdx = 194;
	  section.data(195).dtTransOffset = 234;
	
	  ;% wss_system__P.Step_YFinal_m
	  section.data(196).logicalSrcIdx = 195;
	  section.data(196).dtTransOffset = 235;
	
	  ;% wss_system__P.Constant_Value_h
	  section.data(197).logicalSrcIdx = 196;
	  section.data(197).dtTransOffset = 236;
	
	  ;% wss_system__P.Switch_Threshold_h
	  section.data(198).logicalSrcIdx = 197;
	  section.data(198).dtTransOffset = 237;
	
	  ;% wss_system__P.Constant_Value_k
	  section.data(199).logicalSrcIdx = 198;
	  section.data(199).dtTransOffset = 238;
	
	  ;% wss_system__P.Comedi2ADC7_P1_Size
	  section.data(200).logicalSrcIdx = 199;
	  section.data(200).dtTransOffset = 239;
	
	  ;% wss_system__P.Comedi2ADC7_P1
	  section.data(201).logicalSrcIdx = 200;
	  section.data(201).dtTransOffset = 241;
	
	  ;% wss_system__P.Comedi2ADC7_P2_Size
	  section.data(202).logicalSrcIdx = 201;
	  section.data(202).dtTransOffset = 242;
	
	  ;% wss_system__P.Comedi2ADC7_P2
	  section.data(203).logicalSrcIdx = 202;
	  section.data(203).dtTransOffset = 244;
	
	  ;% wss_system__P.Comedi2ADC7_P3_Size
	  section.data(204).logicalSrcIdx = 203;
	  section.data(204).dtTransOffset = 245;
	
	  ;% wss_system__P.Comedi2ADC7_P3
	  section.data(205).logicalSrcIdx = 204;
	  section.data(205).dtTransOffset = 247;
	
	  ;% wss_system__P.Comedi2ADC7_P4_Size
	  section.data(206).logicalSrcIdx = 205;
	  section.data(206).dtTransOffset = 248;
	
	  ;% wss_system__P.Comedi2ADC7_P4
	  section.data(207).logicalSrcIdx = 206;
	  section.data(207).dtTransOffset = 250;
	
	  ;% wss_system__P.Comedi2ADC7_P5_Size
	  section.data(208).logicalSrcIdx = 207;
	  section.data(208).dtTransOffset = 251;
	
	  ;% wss_system__P.Comedi2ADC7_P5
	  section.data(209).logicalSrcIdx = 208;
	  section.data(209).dtTransOffset = 253;
	
	  ;% wss_system__P.Gain_Gain_jj
	  section.data(210).logicalSrcIdx = 209;
	  section.data(210).dtTransOffset = 254;
	
	  ;% wss_system__P.Integ4_gainval_e
	  section.data(211).logicalSrcIdx = 210;
	  section.data(211).dtTransOffset = 255;
	
	  ;% wss_system__P.Integ4_IC_l
	  section.data(212).logicalSrcIdx = 211;
	  section.data(212).dtTransOffset = 256;
	
	  ;% wss_system__P.K1_Value_c
	  section.data(213).logicalSrcIdx = 212;
	  section.data(213).dtTransOffset = 257;
	
	  ;% wss_system__P.K2_Value_k
	  section.data(214).logicalSrcIdx = 213;
	  section.data(214).dtTransOffset = 258;
	
	  ;% wss_system__P.UnitDelay_X0_d
	  section.data(215).logicalSrcIdx = 214;
	  section.data(215).dtTransOffset = 259;
	
	  ;% wss_system__P.Step_Time_i
	  section.data(216).logicalSrcIdx = 215;
	  section.data(216).dtTransOffset = 260;
	
	  ;% wss_system__P.Step_Y0_j
	  section.data(217).logicalSrcIdx = 216;
	  section.data(217).dtTransOffset = 261;
	
	  ;% wss_system__P.Step_YFinal_d
	  section.data(218).logicalSrcIdx = 217;
	  section.data(218).dtTransOffset = 262;
	
	  ;% wss_system__P.Constant_Value_f
	  section.data(219).logicalSrcIdx = 218;
	  section.data(219).dtTransOffset = 263;
	
	  ;% wss_system__P.Switch_Threshold_j
	  section.data(220).logicalSrcIdx = 219;
	  section.data(220).dtTransOffset = 264;
	
	  ;% wss_system__P.Constant1_Value_g
	  section.data(221).logicalSrcIdx = 220;
	  section.data(221).dtTransOffset = 265;
	
	  ;% wss_system__P.Comedi0ADC7_P1_Size
	  section.data(222).logicalSrcIdx = 221;
	  section.data(222).dtTransOffset = 266;
	
	  ;% wss_system__P.Comedi0ADC7_P1
	  section.data(223).logicalSrcIdx = 222;
	  section.data(223).dtTransOffset = 268;
	
	  ;% wss_system__P.Comedi0ADC7_P2_Size
	  section.data(224).logicalSrcIdx = 223;
	  section.data(224).dtTransOffset = 269;
	
	  ;% wss_system__P.Comedi0ADC7_P2
	  section.data(225).logicalSrcIdx = 224;
	  section.data(225).dtTransOffset = 271;
	
	  ;% wss_system__P.Comedi0ADC7_P3_Size
	  section.data(226).logicalSrcIdx = 225;
	  section.data(226).dtTransOffset = 272;
	
	  ;% wss_system__P.Comedi0ADC7_P3
	  section.data(227).logicalSrcIdx = 226;
	  section.data(227).dtTransOffset = 274;
	
	  ;% wss_system__P.Comedi0ADC7_P4_Size
	  section.data(228).logicalSrcIdx = 227;
	  section.data(228).dtTransOffset = 275;
	
	  ;% wss_system__P.Comedi0ADC7_P4
	  section.data(229).logicalSrcIdx = 228;
	  section.data(229).dtTransOffset = 277;
	
	  ;% wss_system__P.Comedi0ADC7_P5_Size
	  section.data(230).logicalSrcIdx = 229;
	  section.data(230).dtTransOffset = 278;
	
	  ;% wss_system__P.Comedi0ADC7_P5
	  section.data(231).logicalSrcIdx = 230;
	  section.data(231).dtTransOffset = 280;
	
	  ;% wss_system__P.Gain1_Gain_p
	  section.data(232).logicalSrcIdx = 231;
	  section.data(232).dtTransOffset = 281;
	
	  ;% wss_system__P.Integ4_gainval_a
	  section.data(233).logicalSrcIdx = 232;
	  section.data(233).dtTransOffset = 282;
	
	  ;% wss_system__P.Integ4_IC_f
	  section.data(234).logicalSrcIdx = 233;
	  section.data(234).dtTransOffset = 283;
	
	  ;% wss_system__P.K1_Value_oa
	  section.data(235).logicalSrcIdx = 234;
	  section.data(235).dtTransOffset = 284;
	
	  ;% wss_system__P.K2_Value_l
	  section.data(236).logicalSrcIdx = 235;
	  section.data(236).dtTransOffset = 285;
	
	  ;% wss_system__P.UnitDelay_X0_c
	  section.data(237).logicalSrcIdx = 236;
	  section.data(237).dtTransOffset = 286;
	
	  ;% wss_system__P.Step_Time_m
	  section.data(238).logicalSrcIdx = 237;
	  section.data(238).dtTransOffset = 287;
	
	  ;% wss_system__P.Step_Y0_k
	  section.data(239).logicalSrcIdx = 238;
	  section.data(239).dtTransOffset = 288;
	
	  ;% wss_system__P.Step_YFinal_gg
	  section.data(240).logicalSrcIdx = 239;
	  section.data(240).dtTransOffset = 289;
	
	  ;% wss_system__P.Constant_Value_e
	  section.data(241).logicalSrcIdx = 240;
	  section.data(241).dtTransOffset = 290;
	
	  ;% wss_system__P.Switch_Threshold_d
	  section.data(242).logicalSrcIdx = 241;
	  section.data(242).dtTransOffset = 291;
	
	  ;% wss_system__P.Constant2_Value_h
	  section.data(243).logicalSrcIdx = 242;
	  section.data(243).dtTransOffset = 292;
	
	  ;% wss_system__P.Comedi2ADC3_P1_Size
	  section.data(244).logicalSrcIdx = 243;
	  section.data(244).dtTransOffset = 293;
	
	  ;% wss_system__P.Comedi2ADC3_P1
	  section.data(245).logicalSrcIdx = 244;
	  section.data(245).dtTransOffset = 295;
	
	  ;% wss_system__P.Comedi2ADC3_P2_Size
	  section.data(246).logicalSrcIdx = 245;
	  section.data(246).dtTransOffset = 296;
	
	  ;% wss_system__P.Comedi2ADC3_P2
	  section.data(247).logicalSrcIdx = 246;
	  section.data(247).dtTransOffset = 298;
	
	  ;% wss_system__P.Comedi2ADC3_P3_Size
	  section.data(248).logicalSrcIdx = 247;
	  section.data(248).dtTransOffset = 299;
	
	  ;% wss_system__P.Comedi2ADC3_P3
	  section.data(249).logicalSrcIdx = 248;
	  section.data(249).dtTransOffset = 301;
	
	  ;% wss_system__P.Comedi2ADC3_P4_Size
	  section.data(250).logicalSrcIdx = 249;
	  section.data(250).dtTransOffset = 302;
	
	  ;% wss_system__P.Comedi2ADC3_P4
	  section.data(251).logicalSrcIdx = 250;
	  section.data(251).dtTransOffset = 304;
	
	  ;% wss_system__P.Comedi2ADC3_P5_Size
	  section.data(252).logicalSrcIdx = 251;
	  section.data(252).dtTransOffset = 305;
	
	  ;% wss_system__P.Comedi2ADC3_P5
	  section.data(253).logicalSrcIdx = 252;
	  section.data(253).dtTransOffset = 307;
	
	  ;% wss_system__P.Gain2_Gain_i
	  section.data(254).logicalSrcIdx = 253;
	  section.data(254).dtTransOffset = 308;
	
	  ;% wss_system__P.Integ4_gainval_i
	  section.data(255).logicalSrcIdx = 254;
	  section.data(255).dtTransOffset = 309;
	
	  ;% wss_system__P.Integ4_IC_mq
	  section.data(256).logicalSrcIdx = 255;
	  section.data(256).dtTransOffset = 310;
	
	  ;% wss_system__P.K1_Value_e
	  section.data(257).logicalSrcIdx = 256;
	  section.data(257).dtTransOffset = 311;
	
	  ;% wss_system__P.K2_Value_fb
	  section.data(258).logicalSrcIdx = 257;
	  section.data(258).dtTransOffset = 312;
	
	  ;% wss_system__P.UnitDelay_X0_dc
	  section.data(259).logicalSrcIdx = 258;
	  section.data(259).dtTransOffset = 313;
	
	  ;% wss_system__P.Step_Time_g
	  section.data(260).logicalSrcIdx = 259;
	  section.data(260).dtTransOffset = 314;
	
	  ;% wss_system__P.Step_Y0_c
	  section.data(261).logicalSrcIdx = 260;
	  section.data(261).dtTransOffset = 315;
	
	  ;% wss_system__P.Step_YFinal_oz
	  section.data(262).logicalSrcIdx = 261;
	  section.data(262).dtTransOffset = 316;
	
	  ;% wss_system__P.Constant_Value_c
	  section.data(263).logicalSrcIdx = 262;
	  section.data(263).dtTransOffset = 317;
	
	  ;% wss_system__P.Switch_Threshold_f
	  section.data(264).logicalSrcIdx = 263;
	  section.data(264).dtTransOffset = 318;
	
	  ;% wss_system__P.Constant3_Value_h
	  section.data(265).logicalSrcIdx = 264;
	  section.data(265).dtTransOffset = 319;
	
	  ;% wss_system__P.Comedi0ADC6_P1_Size
	  section.data(266).logicalSrcIdx = 265;
	  section.data(266).dtTransOffset = 320;
	
	  ;% wss_system__P.Comedi0ADC6_P1
	  section.data(267).logicalSrcIdx = 266;
	  section.data(267).dtTransOffset = 322;
	
	  ;% wss_system__P.Comedi0ADC6_P2_Size
	  section.data(268).logicalSrcIdx = 267;
	  section.data(268).dtTransOffset = 323;
	
	  ;% wss_system__P.Comedi0ADC6_P2
	  section.data(269).logicalSrcIdx = 268;
	  section.data(269).dtTransOffset = 325;
	
	  ;% wss_system__P.Comedi0ADC6_P3_Size
	  section.data(270).logicalSrcIdx = 269;
	  section.data(270).dtTransOffset = 326;
	
	  ;% wss_system__P.Comedi0ADC6_P3
	  section.data(271).logicalSrcIdx = 270;
	  section.data(271).dtTransOffset = 328;
	
	  ;% wss_system__P.Comedi0ADC6_P4_Size
	  section.data(272).logicalSrcIdx = 271;
	  section.data(272).dtTransOffset = 329;
	
	  ;% wss_system__P.Comedi0ADC6_P4
	  section.data(273).logicalSrcIdx = 272;
	  section.data(273).dtTransOffset = 331;
	
	  ;% wss_system__P.Comedi0ADC6_P5_Size
	  section.data(274).logicalSrcIdx = 273;
	  section.data(274).dtTransOffset = 332;
	
	  ;% wss_system__P.Comedi0ADC6_P5
	  section.data(275).logicalSrcIdx = 274;
	  section.data(275).dtTransOffset = 334;
	
	  ;% wss_system__P.Gain3_Gain_h
	  section.data(276).logicalSrcIdx = 275;
	  section.data(276).dtTransOffset = 335;
	
	  ;% wss_system__P.Integ4_gainval_e3
	  section.data(277).logicalSrcIdx = 276;
	  section.data(277).dtTransOffset = 336;
	
	  ;% wss_system__P.Integ4_IC_c1
	  section.data(278).logicalSrcIdx = 277;
	  section.data(278).dtTransOffset = 337;
	
	  ;% wss_system__P.K1_Value_nz
	  section.data(279).logicalSrcIdx = 278;
	  section.data(279).dtTransOffset = 338;
	
	  ;% wss_system__P.K2_Value_bh
	  section.data(280).logicalSrcIdx = 279;
	  section.data(280).dtTransOffset = 339;
	
	  ;% wss_system__P.UnitDelay_X0_jj
	  section.data(281).logicalSrcIdx = 280;
	  section.data(281).dtTransOffset = 340;
	
	  ;% wss_system__P.Step_Time_f
	  section.data(282).logicalSrcIdx = 281;
	  section.data(282).dtTransOffset = 341;
	
	  ;% wss_system__P.Step_Y0_a
	  section.data(283).logicalSrcIdx = 282;
	  section.data(283).dtTransOffset = 342;
	
	  ;% wss_system__P.Step_YFinal_b
	  section.data(284).logicalSrcIdx = 283;
	  section.data(284).dtTransOffset = 343;
	
	  ;% wss_system__P.Constant_Value_hc
	  section.data(285).logicalSrcIdx = 284;
	  section.data(285).dtTransOffset = 344;
	
	  ;% wss_system__P.Switch_Threshold_b
	  section.data(286).logicalSrcIdx = 285;
	  section.data(286).dtTransOffset = 345;
	
	  ;% wss_system__P.Constant8_Value
	  section.data(287).logicalSrcIdx = 286;
	  section.data(287).dtTransOffset = 346;
	
	  ;% wss_system__P.Constant5_Value
	  section.data(288).logicalSrcIdx = 287;
	  section.data(288).dtTransOffset = 347;
	
	  ;% wss_system__P.Constant9_Value
	  section.data(289).logicalSrcIdx = 288;
	  section.data(289).dtTransOffset = 348;
	
	  ;% wss_system__P.LookUpTable_XData
	  section.data(290).logicalSrcIdx = 289;
	  section.data(290).dtTransOffset = 349;
	
	  ;% wss_system__P.LookUpTable_YData
	  section.data(291).logicalSrcIdx = 290;
	  section.data(291).dtTransOffset = 360;
	
	  ;% wss_system__P.Comedi0ADC2_P1_Size
	  section.data(292).logicalSrcIdx = 291;
	  section.data(292).dtTransOffset = 371;
	
	  ;% wss_system__P.Comedi0ADC2_P1
	  section.data(293).logicalSrcIdx = 292;
	  section.data(293).dtTransOffset = 373;
	
	  ;% wss_system__P.Comedi0ADC2_P2_Size
	  section.data(294).logicalSrcIdx = 293;
	  section.data(294).dtTransOffset = 374;
	
	  ;% wss_system__P.Comedi0ADC2_P2
	  section.data(295).logicalSrcIdx = 294;
	  section.data(295).dtTransOffset = 376;
	
	  ;% wss_system__P.Comedi0ADC2_P3_Size
	  section.data(296).logicalSrcIdx = 295;
	  section.data(296).dtTransOffset = 377;
	
	  ;% wss_system__P.Comedi0ADC2_P3
	  section.data(297).logicalSrcIdx = 296;
	  section.data(297).dtTransOffset = 379;
	
	  ;% wss_system__P.Comedi0ADC2_P4_Size
	  section.data(298).logicalSrcIdx = 297;
	  section.data(298).dtTransOffset = 380;
	
	  ;% wss_system__P.Comedi0ADC2_P4
	  section.data(299).logicalSrcIdx = 298;
	  section.data(299).dtTransOffset = 382;
	
	  ;% wss_system__P.Comedi0ADC2_P5_Size
	  section.data(300).logicalSrcIdx = 299;
	  section.data(300).dtTransOffset = 383;
	
	  ;% wss_system__P.Comedi0ADC2_P5
	  section.data(301).logicalSrcIdx = 300;
	  section.data(301).dtTransOffset = 385;
	
	  ;% wss_system__P.Gain4_Gain
	  section.data(302).logicalSrcIdx = 301;
	  section.data(302).dtTransOffset = 386;
	
	  ;% wss_system__P.Integ4_gainval_dp
	  section.data(303).logicalSrcIdx = 302;
	  section.data(303).dtTransOffset = 387;
	
	  ;% wss_system__P.Integ4_IC_fz
	  section.data(304).logicalSrcIdx = 303;
	  section.data(304).dtTransOffset = 388;
	
	  ;% wss_system__P.K1_Value_od
	  section.data(305).logicalSrcIdx = 304;
	  section.data(305).dtTransOffset = 389;
	
	  ;% wss_system__P.K2_Value_p
	  section.data(306).logicalSrcIdx = 305;
	  section.data(306).dtTransOffset = 390;
	
	  ;% wss_system__P.UnitDelay_X0_o
	  section.data(307).logicalSrcIdx = 306;
	  section.data(307).dtTransOffset = 391;
	
	  ;% wss_system__P.Step_Time_ia
	  section.data(308).logicalSrcIdx = 307;
	  section.data(308).dtTransOffset = 392;
	
	  ;% wss_system__P.Step_Y0_d2
	  section.data(309).logicalSrcIdx = 308;
	  section.data(309).dtTransOffset = 393;
	
	  ;% wss_system__P.Step_YFinal_nn
	  section.data(310).logicalSrcIdx = 309;
	  section.data(310).dtTransOffset = 394;
	
	  ;% wss_system__P.Constant_Value_n
	  section.data(311).logicalSrcIdx = 310;
	  section.data(311).dtTransOffset = 395;
	
	  ;% wss_system__P.Switch_Threshold_fx
	  section.data(312).logicalSrcIdx = 311;
	  section.data(312).dtTransOffset = 396;
	
	  ;% wss_system__P.DiscreteTimeIntegrator_gainval
	  section.data(313).logicalSrcIdx = 312;
	  section.data(313).dtTransOffset = 397;
	
	  ;% wss_system__P.DiscreteTimeIntegrator_IC
	  section.data(314).logicalSrcIdx = 313;
	  section.data(314).dtTransOffset = 398;
	
	  ;% wss_system__P.Constant14_Value
	  section.data(315).logicalSrcIdx = 314;
	  section.data(315).dtTransOffset = 399;
	
	  ;% wss_system__P.Gain1_Gain_fn
	  section.data(316).logicalSrcIdx = 315;
	  section.data(316).dtTransOffset = 400;
	
	  ;% wss_system__P.DiscreteTimeIntegrator_gainva_g
	  section.data(317).logicalSrcIdx = 316;
	  section.data(317).dtTransOffset = 401;
	
	  ;% wss_system__P.DiscreteTimeIntegrator_IC_c
	  section.data(318).logicalSrcIdx = 317;
	  section.data(318).dtTransOffset = 402;
	
	  ;% wss_system__P.Constant2_Value_hd
	  section.data(319).logicalSrcIdx = 318;
	  section.data(319).dtTransOffset = 403;
	
	  ;% wss_system__P.Gain1_Gain_g
	  section.data(320).logicalSrcIdx = 319;
	  section.data(320).dtTransOffset = 404;
	
	  ;% wss_system__P.DiscreteTimeIntegrator_gainva_c
	  section.data(321).logicalSrcIdx = 320;
	  section.data(321).dtTransOffset = 405;
	
	  ;% wss_system__P.DiscreteTimeIntegrator_IC_cl
	  section.data(322).logicalSrcIdx = 321;
	  section.data(322).dtTransOffset = 406;
	
	  ;% wss_system__P.Constant3_Value_i
	  section.data(323).logicalSrcIdx = 322;
	  section.data(323).dtTransOffset = 407;
	
	  ;% wss_system__P.Gain1_Gain_f2
	  section.data(324).logicalSrcIdx = 323;
	  section.data(324).dtTransOffset = 408;
	
	  ;% wss_system__P.DiscreteTimeIntegrator_gainva_o
	  section.data(325).logicalSrcIdx = 324;
	  section.data(325).dtTransOffset = 409;
	
	  ;% wss_system__P.DiscreteTimeIntegrator_IC_f
	  section.data(326).logicalSrcIdx = 325;
	  section.data(326).dtTransOffset = 410;
	
	  ;% wss_system__P.Constant4_Value
	  section.data(327).logicalSrcIdx = 326;
	  section.data(327).dtTransOffset = 411;
	
	  ;% wss_system__P.Gain1_Gain_bb
	  section.data(328).logicalSrcIdx = 327;
	  section.data(328).dtTransOffset = 412;
	
	  ;% wss_system__P.Constant1_Value_m
	  section.data(329).logicalSrcIdx = 328;
	  section.data(329).dtTransOffset = 413;
	
	  ;% wss_system__P.Constant11_Value
	  section.data(330).logicalSrcIdx = 329;
	  section.data(330).dtTransOffset = 414;
	
	  ;% wss_system__P.Constant12_Value
	  section.data(331).logicalSrcIdx = 330;
	  section.data(331).dtTransOffset = 415;
	
	  ;% wss_system__P.Constant13_Value
	  section.data(332).logicalSrcIdx = 331;
	  section.data(332).dtTransOffset = 416;
	
	  ;% wss_system__P.Constant6_Value
	  section.data(333).logicalSrcIdx = 332;
	  section.data(333).dtTransOffset = 417;
	
	  ;% wss_system__P.Gain_Gain_i
	  section.data(334).logicalSrcIdx = 333;
	  section.data(334).dtTransOffset = 418;
	
	  ;% wss_system__P.Gain_Gain_jr
	  section.data(335).logicalSrcIdx = 334;
	  section.data(335).dtTransOffset = 419;
	
	  ;% wss_system__P.Gain_Gain_ii
	  section.data(336).logicalSrcIdx = 335;
	  section.data(336).dtTransOffset = 420;
	
	  ;% wss_system__P.Gain_Gain_lb
	  section.data(337).logicalSrcIdx = 336;
	  section.data(337).dtTransOffset = 421;
	
	  ;% wss_system__P.HitCrossing_Offset
	  section.data(338).logicalSrcIdx = 337;
	  section.data(338).dtTransOffset = 422;
	
	  ;% wss_system__P.Comedi2ADC6_P1_Size
	  section.data(339).logicalSrcIdx = 338;
	  section.data(339).dtTransOffset = 423;
	
	  ;% wss_system__P.Comedi2ADC6_P1
	  section.data(340).logicalSrcIdx = 339;
	  section.data(340).dtTransOffset = 425;
	
	  ;% wss_system__P.Comedi2ADC6_P2_Size
	  section.data(341).logicalSrcIdx = 340;
	  section.data(341).dtTransOffset = 426;
	
	  ;% wss_system__P.Comedi2ADC6_P2
	  section.data(342).logicalSrcIdx = 341;
	  section.data(342).dtTransOffset = 428;
	
	  ;% wss_system__P.Comedi2ADC6_P3_Size
	  section.data(343).logicalSrcIdx = 342;
	  section.data(343).dtTransOffset = 429;
	
	  ;% wss_system__P.Comedi2ADC6_P3
	  section.data(344).logicalSrcIdx = 343;
	  section.data(344).dtTransOffset = 431;
	
	  ;% wss_system__P.Comedi2ADC6_P4_Size
	  section.data(345).logicalSrcIdx = 344;
	  section.data(345).dtTransOffset = 432;
	
	  ;% wss_system__P.Comedi2ADC6_P4
	  section.data(346).logicalSrcIdx = 345;
	  section.data(346).dtTransOffset = 434;
	
	  ;% wss_system__P.Comedi2ADC6_P5_Size
	  section.data(347).logicalSrcIdx = 346;
	  section.data(347).dtTransOffset = 435;
	
	  ;% wss_system__P.Comedi2ADC6_P5
	  section.data(348).logicalSrcIdx = 347;
	  section.data(348).dtTransOffset = 437;
	
	  ;% wss_system__P.Comedi0ADC5_P1_Size
	  section.data(349).logicalSrcIdx = 348;
	  section.data(349).dtTransOffset = 438;
	
	  ;% wss_system__P.Comedi0ADC5_P1
	  section.data(350).logicalSrcIdx = 349;
	  section.data(350).dtTransOffset = 440;
	
	  ;% wss_system__P.Comedi0ADC5_P2_Size
	  section.data(351).logicalSrcIdx = 350;
	  section.data(351).dtTransOffset = 441;
	
	  ;% wss_system__P.Comedi0ADC5_P2
	  section.data(352).logicalSrcIdx = 351;
	  section.data(352).dtTransOffset = 443;
	
	  ;% wss_system__P.Comedi0ADC5_P3_Size
	  section.data(353).logicalSrcIdx = 352;
	  section.data(353).dtTransOffset = 444;
	
	  ;% wss_system__P.Comedi0ADC5_P3
	  section.data(354).logicalSrcIdx = 353;
	  section.data(354).dtTransOffset = 446;
	
	  ;% wss_system__P.Comedi0ADC5_P4_Size
	  section.data(355).logicalSrcIdx = 354;
	  section.data(355).dtTransOffset = 447;
	
	  ;% wss_system__P.Comedi0ADC5_P4
	  section.data(356).logicalSrcIdx = 355;
	  section.data(356).dtTransOffset = 449;
	
	  ;% wss_system__P.Comedi0ADC5_P5_Size
	  section.data(357).logicalSrcIdx = 356;
	  section.data(357).dtTransOffset = 450;
	
	  ;% wss_system__P.Comedi0ADC5_P5
	  section.data(358).logicalSrcIdx = 357;
	  section.data(358).dtTransOffset = 452;
	
	  ;% wss_system__P.Comedi0ADC0_P1_Size
	  section.data(359).logicalSrcIdx = 358;
	  section.data(359).dtTransOffset = 453;
	
	  ;% wss_system__P.Comedi0ADC0_P1
	  section.data(360).logicalSrcIdx = 359;
	  section.data(360).dtTransOffset = 455;
	
	  ;% wss_system__P.Comedi0ADC0_P2_Size
	  section.data(361).logicalSrcIdx = 360;
	  section.data(361).dtTransOffset = 456;
	
	  ;% wss_system__P.Comedi0ADC0_P2
	  section.data(362).logicalSrcIdx = 361;
	  section.data(362).dtTransOffset = 458;
	
	  ;% wss_system__P.Comedi0ADC0_P3_Size
	  section.data(363).logicalSrcIdx = 362;
	  section.data(363).dtTransOffset = 459;
	
	  ;% wss_system__P.Comedi0ADC0_P3
	  section.data(364).logicalSrcIdx = 363;
	  section.data(364).dtTransOffset = 461;
	
	  ;% wss_system__P.Comedi0ADC0_P4_Size
	  section.data(365).logicalSrcIdx = 364;
	  section.data(365).dtTransOffset = 462;
	
	  ;% wss_system__P.Comedi0ADC0_P4
	  section.data(366).logicalSrcIdx = 365;
	  section.data(366).dtTransOffset = 464;
	
	  ;% wss_system__P.Comedi0ADC0_P5_Size
	  section.data(367).logicalSrcIdx = 366;
	  section.data(367).dtTransOffset = 465;
	
	  ;% wss_system__P.Comedi0ADC0_P5
	  section.data(368).logicalSrcIdx = 367;
	  section.data(368).dtTransOffset = 467;
	
	  ;% wss_system__P.Comedi1ADC0_P1_Size
	  section.data(369).logicalSrcIdx = 368;
	  section.data(369).dtTransOffset = 468;
	
	  ;% wss_system__P.Comedi1ADC0_P1
	  section.data(370).logicalSrcIdx = 369;
	  section.data(370).dtTransOffset = 470;
	
	  ;% wss_system__P.Comedi1ADC0_P2_Size
	  section.data(371).logicalSrcIdx = 370;
	  section.data(371).dtTransOffset = 471;
	
	  ;% wss_system__P.Comedi1ADC0_P2
	  section.data(372).logicalSrcIdx = 371;
	  section.data(372).dtTransOffset = 473;
	
	  ;% wss_system__P.Comedi1ADC0_P3_Size
	  section.data(373).logicalSrcIdx = 372;
	  section.data(373).dtTransOffset = 474;
	
	  ;% wss_system__P.Comedi1ADC0_P3
	  section.data(374).logicalSrcIdx = 373;
	  section.data(374).dtTransOffset = 476;
	
	  ;% wss_system__P.Comedi1ADC0_P4_Size
	  section.data(375).logicalSrcIdx = 374;
	  section.data(375).dtTransOffset = 477;
	
	  ;% wss_system__P.Comedi1ADC0_P4
	  section.data(376).logicalSrcIdx = 375;
	  section.data(376).dtTransOffset = 479;
	
	  ;% wss_system__P.Comedi1ADC0_P5_Size
	  section.data(377).logicalSrcIdx = 376;
	  section.data(377).dtTransOffset = 480;
	
	  ;% wss_system__P.Comedi1ADC0_P5
	  section.data(378).logicalSrcIdx = 377;
	  section.data(378).dtTransOffset = 482;
	
	  ;% wss_system__P.Comedi1ADC1_P1_Size
	  section.data(379).logicalSrcIdx = 378;
	  section.data(379).dtTransOffset = 483;
	
	  ;% wss_system__P.Comedi1ADC1_P1
	  section.data(380).logicalSrcIdx = 379;
	  section.data(380).dtTransOffset = 485;
	
	  ;% wss_system__P.Comedi1ADC1_P2_Size
	  section.data(381).logicalSrcIdx = 380;
	  section.data(381).dtTransOffset = 486;
	
	  ;% wss_system__P.Comedi1ADC1_P2
	  section.data(382).logicalSrcIdx = 381;
	  section.data(382).dtTransOffset = 488;
	
	  ;% wss_system__P.Comedi1ADC1_P3_Size
	  section.data(383).logicalSrcIdx = 382;
	  section.data(383).dtTransOffset = 489;
	
	  ;% wss_system__P.Comedi1ADC1_P3
	  section.data(384).logicalSrcIdx = 383;
	  section.data(384).dtTransOffset = 491;
	
	  ;% wss_system__P.Comedi1ADC1_P4_Size
	  section.data(385).logicalSrcIdx = 384;
	  section.data(385).dtTransOffset = 492;
	
	  ;% wss_system__P.Comedi1ADC1_P4
	  section.data(386).logicalSrcIdx = 385;
	  section.data(386).dtTransOffset = 494;
	
	  ;% wss_system__P.Comedi1ADC1_P5_Size
	  section.data(387).logicalSrcIdx = 386;
	  section.data(387).dtTransOffset = 495;
	
	  ;% wss_system__P.Comedi1ADC1_P5
	  section.data(388).logicalSrcIdx = 387;
	  section.data(388).dtTransOffset = 497;
	
	  ;% wss_system__P.Comedi1ADC2_P1_Size
	  section.data(389).logicalSrcIdx = 388;
	  section.data(389).dtTransOffset = 498;
	
	  ;% wss_system__P.Comedi1ADC2_P1
	  section.data(390).logicalSrcIdx = 389;
	  section.data(390).dtTransOffset = 500;
	
	  ;% wss_system__P.Comedi1ADC2_P2_Size
	  section.data(391).logicalSrcIdx = 390;
	  section.data(391).dtTransOffset = 501;
	
	  ;% wss_system__P.Comedi1ADC2_P2
	  section.data(392).logicalSrcIdx = 391;
	  section.data(392).dtTransOffset = 503;
	
	  ;% wss_system__P.Comedi1ADC2_P3_Size
	  section.data(393).logicalSrcIdx = 392;
	  section.data(393).dtTransOffset = 504;
	
	  ;% wss_system__P.Comedi1ADC2_P3
	  section.data(394).logicalSrcIdx = 393;
	  section.data(394).dtTransOffset = 506;
	
	  ;% wss_system__P.Comedi1ADC2_P4_Size
	  section.data(395).logicalSrcIdx = 394;
	  section.data(395).dtTransOffset = 507;
	
	  ;% wss_system__P.Comedi1ADC2_P4
	  section.data(396).logicalSrcIdx = 395;
	  section.data(396).dtTransOffset = 509;
	
	  ;% wss_system__P.Comedi1ADC2_P5_Size
	  section.data(397).logicalSrcIdx = 396;
	  section.data(397).dtTransOffset = 510;
	
	  ;% wss_system__P.Comedi1ADC2_P5
	  section.data(398).logicalSrcIdx = 397;
	  section.data(398).dtTransOffset = 512;
	
	  ;% wss_system__P.Comedi1ADC3_P1_Size
	  section.data(399).logicalSrcIdx = 398;
	  section.data(399).dtTransOffset = 513;
	
	  ;% wss_system__P.Comedi1ADC3_P1
	  section.data(400).logicalSrcIdx = 399;
	  section.data(400).dtTransOffset = 515;
	
	  ;% wss_system__P.Comedi1ADC3_P2_Size
	  section.data(401).logicalSrcIdx = 400;
	  section.data(401).dtTransOffset = 516;
	
	  ;% wss_system__P.Comedi1ADC3_P2
	  section.data(402).logicalSrcIdx = 401;
	  section.data(402).dtTransOffset = 518;
	
	  ;% wss_system__P.Comedi1ADC3_P3_Size
	  section.data(403).logicalSrcIdx = 402;
	  section.data(403).dtTransOffset = 519;
	
	  ;% wss_system__P.Comedi1ADC3_P3
	  section.data(404).logicalSrcIdx = 403;
	  section.data(404).dtTransOffset = 521;
	
	  ;% wss_system__P.Comedi1ADC3_P4_Size
	  section.data(405).logicalSrcIdx = 404;
	  section.data(405).dtTransOffset = 522;
	
	  ;% wss_system__P.Comedi1ADC3_P4
	  section.data(406).logicalSrcIdx = 405;
	  section.data(406).dtTransOffset = 524;
	
	  ;% wss_system__P.Comedi1ADC3_P5_Size
	  section.data(407).logicalSrcIdx = 406;
	  section.data(407).dtTransOffset = 525;
	
	  ;% wss_system__P.Comedi1ADC3_P5
	  section.data(408).logicalSrcIdx = 407;
	  section.data(408).dtTransOffset = 527;
	
	  ;% wss_system__P.Comedi1ADC4_P1_Size
	  section.data(409).logicalSrcIdx = 408;
	  section.data(409).dtTransOffset = 528;
	
	  ;% wss_system__P.Comedi1ADC4_P1
	  section.data(410).logicalSrcIdx = 409;
	  section.data(410).dtTransOffset = 530;
	
	  ;% wss_system__P.Comedi1ADC4_P2_Size
	  section.data(411).logicalSrcIdx = 410;
	  section.data(411).dtTransOffset = 531;
	
	  ;% wss_system__P.Comedi1ADC4_P2
	  section.data(412).logicalSrcIdx = 411;
	  section.data(412).dtTransOffset = 533;
	
	  ;% wss_system__P.Comedi1ADC4_P3_Size
	  section.data(413).logicalSrcIdx = 412;
	  section.data(413).dtTransOffset = 534;
	
	  ;% wss_system__P.Comedi1ADC4_P3
	  section.data(414).logicalSrcIdx = 413;
	  section.data(414).dtTransOffset = 536;
	
	  ;% wss_system__P.Comedi1ADC4_P4_Size
	  section.data(415).logicalSrcIdx = 414;
	  section.data(415).dtTransOffset = 537;
	
	  ;% wss_system__P.Comedi1ADC4_P4
	  section.data(416).logicalSrcIdx = 415;
	  section.data(416).dtTransOffset = 539;
	
	  ;% wss_system__P.Comedi1ADC4_P5_Size
	  section.data(417).logicalSrcIdx = 416;
	  section.data(417).dtTransOffset = 540;
	
	  ;% wss_system__P.Comedi1ADC4_P5
	  section.data(418).logicalSrcIdx = 417;
	  section.data(418).dtTransOffset = 542;
	
	  ;% wss_system__P.Comedi1ADC5_P1_Size
	  section.data(419).logicalSrcIdx = 418;
	  section.data(419).dtTransOffset = 543;
	
	  ;% wss_system__P.Comedi1ADC5_P1
	  section.data(420).logicalSrcIdx = 419;
	  section.data(420).dtTransOffset = 545;
	
	  ;% wss_system__P.Comedi1ADC5_P2_Size
	  section.data(421).logicalSrcIdx = 420;
	  section.data(421).dtTransOffset = 546;
	
	  ;% wss_system__P.Comedi1ADC5_P2
	  section.data(422).logicalSrcIdx = 421;
	  section.data(422).dtTransOffset = 548;
	
	  ;% wss_system__P.Comedi1ADC5_P3_Size
	  section.data(423).logicalSrcIdx = 422;
	  section.data(423).dtTransOffset = 549;
	
	  ;% wss_system__P.Comedi1ADC5_P3
	  section.data(424).logicalSrcIdx = 423;
	  section.data(424).dtTransOffset = 551;
	
	  ;% wss_system__P.Comedi1ADC5_P4_Size
	  section.data(425).logicalSrcIdx = 424;
	  section.data(425).dtTransOffset = 552;
	
	  ;% wss_system__P.Comedi1ADC5_P4
	  section.data(426).logicalSrcIdx = 425;
	  section.data(426).dtTransOffset = 554;
	
	  ;% wss_system__P.Comedi1ADC5_P5_Size
	  section.data(427).logicalSrcIdx = 426;
	  section.data(427).dtTransOffset = 555;
	
	  ;% wss_system__P.Comedi1ADC5_P5
	  section.data(428).logicalSrcIdx = 427;
	  section.data(428).dtTransOffset = 557;
	
	  ;% wss_system__P.Comedi2DAC0_P1_Size
	  section.data(429).logicalSrcIdx = 428;
	  section.data(429).dtTransOffset = 558;
	
	  ;% wss_system__P.Comedi2DAC0_P1
	  section.data(430).logicalSrcIdx = 429;
	  section.data(430).dtTransOffset = 560;
	
	  ;% wss_system__P.Comedi2DAC0_P2_Size
	  section.data(431).logicalSrcIdx = 430;
	  section.data(431).dtTransOffset = 561;
	
	  ;% wss_system__P.Comedi2DAC0_P2
	  section.data(432).logicalSrcIdx = 431;
	  section.data(432).dtTransOffset = 563;
	
	  ;% wss_system__P.Comedi2DAC0_P3_Size
	  section.data(433).logicalSrcIdx = 432;
	  section.data(433).dtTransOffset = 564;
	
	  ;% wss_system__P.Comedi2DAC0_P3
	  section.data(434).logicalSrcIdx = 433;
	  section.data(434).dtTransOffset = 566;
	
	  ;% wss_system__P.Comedi2DAC0_P4_Size
	  section.data(435).logicalSrcIdx = 434;
	  section.data(435).dtTransOffset = 567;
	
	  ;% wss_system__P.Comedi2DAC0_P4
	  section.data(436).logicalSrcIdx = 435;
	  section.data(436).dtTransOffset = 569;
	
	  ;% wss_system__P.Comedi2DAC1_P1_Size
	  section.data(437).logicalSrcIdx = 436;
	  section.data(437).dtTransOffset = 570;
	
	  ;% wss_system__P.Comedi2DAC1_P1
	  section.data(438).logicalSrcIdx = 437;
	  section.data(438).dtTransOffset = 572;
	
	  ;% wss_system__P.Comedi2DAC1_P2_Size
	  section.data(439).logicalSrcIdx = 438;
	  section.data(439).dtTransOffset = 573;
	
	  ;% wss_system__P.Comedi2DAC1_P2
	  section.data(440).logicalSrcIdx = 439;
	  section.data(440).dtTransOffset = 575;
	
	  ;% wss_system__P.Comedi2DAC1_P3_Size
	  section.data(441).logicalSrcIdx = 440;
	  section.data(441).dtTransOffset = 576;
	
	  ;% wss_system__P.Comedi2DAC1_P3
	  section.data(442).logicalSrcIdx = 441;
	  section.data(442).dtTransOffset = 578;
	
	  ;% wss_system__P.Comedi2DAC1_P4_Size
	  section.data(443).logicalSrcIdx = 442;
	  section.data(443).dtTransOffset = 579;
	
	  ;% wss_system__P.Comedi2DAC1_P4
	  section.data(444).logicalSrcIdx = 443;
	  section.data(444).dtTransOffset = 581;
	
	  ;% wss_system__P.Comedi2DAC2_P1_Size
	  section.data(445).logicalSrcIdx = 444;
	  section.data(445).dtTransOffset = 582;
	
	  ;% wss_system__P.Comedi2DAC2_P1
	  section.data(446).logicalSrcIdx = 445;
	  section.data(446).dtTransOffset = 584;
	
	  ;% wss_system__P.Comedi2DAC2_P2_Size
	  section.data(447).logicalSrcIdx = 446;
	  section.data(447).dtTransOffset = 585;
	
	  ;% wss_system__P.Comedi2DAC2_P2
	  section.data(448).logicalSrcIdx = 447;
	  section.data(448).dtTransOffset = 587;
	
	  ;% wss_system__P.Comedi2DAC2_P3_Size
	  section.data(449).logicalSrcIdx = 448;
	  section.data(449).dtTransOffset = 588;
	
	  ;% wss_system__P.Comedi2DAC2_P3
	  section.data(450).logicalSrcIdx = 449;
	  section.data(450).dtTransOffset = 590;
	
	  ;% wss_system__P.Comedi2DAC2_P4_Size
	  section.data(451).logicalSrcIdx = 450;
	  section.data(451).dtTransOffset = 591;
	
	  ;% wss_system__P.Comedi2DAC2_P4
	  section.data(452).logicalSrcIdx = 451;
	  section.data(452).dtTransOffset = 593;
	
	  ;% wss_system__P.Comedi2DAC3_P1_Size
	  section.data(453).logicalSrcIdx = 452;
	  section.data(453).dtTransOffset = 594;
	
	  ;% wss_system__P.Comedi2DAC3_P1
	  section.data(454).logicalSrcIdx = 453;
	  section.data(454).dtTransOffset = 596;
	
	  ;% wss_system__P.Comedi2DAC3_P2_Size
	  section.data(455).logicalSrcIdx = 454;
	  section.data(455).dtTransOffset = 597;
	
	  ;% wss_system__P.Comedi2DAC3_P2
	  section.data(456).logicalSrcIdx = 455;
	  section.data(456).dtTransOffset = 599;
	
	  ;% wss_system__P.Comedi2DAC3_P3_Size
	  section.data(457).logicalSrcIdx = 456;
	  section.data(457).dtTransOffset = 600;
	
	  ;% wss_system__P.Comedi2DAC3_P3
	  section.data(458).logicalSrcIdx = 457;
	  section.data(458).dtTransOffset = 602;
	
	  ;% wss_system__P.Comedi2DAC3_P4_Size
	  section.data(459).logicalSrcIdx = 458;
	  section.data(459).dtTransOffset = 603;
	
	  ;% wss_system__P.Comedi2DAC3_P4
	  section.data(460).logicalSrcIdx = 459;
	  section.data(460).dtTransOffset = 605;
	
	  ;% wss_system__P.Comedi0DAC4_P1_Size
	  section.data(461).logicalSrcIdx = 460;
	  section.data(461).dtTransOffset = 606;
	
	  ;% wss_system__P.Comedi0DAC4_P1
	  section.data(462).logicalSrcIdx = 461;
	  section.data(462).dtTransOffset = 608;
	
	  ;% wss_system__P.Comedi0DAC4_P2_Size
	  section.data(463).logicalSrcIdx = 462;
	  section.data(463).dtTransOffset = 609;
	
	  ;% wss_system__P.Comedi0DAC4_P2
	  section.data(464).logicalSrcIdx = 463;
	  section.data(464).dtTransOffset = 611;
	
	  ;% wss_system__P.Comedi0DAC4_P3_Size
	  section.data(465).logicalSrcIdx = 464;
	  section.data(465).dtTransOffset = 612;
	
	  ;% wss_system__P.Comedi0DAC4_P3
	  section.data(466).logicalSrcIdx = 465;
	  section.data(466).dtTransOffset = 614;
	
	  ;% wss_system__P.Comedi0DAC4_P4_Size
	  section.data(467).logicalSrcIdx = 466;
	  section.data(467).dtTransOffset = 615;
	
	  ;% wss_system__P.Comedi0DAC4_P4
	  section.data(468).logicalSrcIdx = 467;
	  section.data(468).dtTransOffset = 617;
	
	  ;% wss_system__P.Comedi0DAC5_P1_Size
	  section.data(469).logicalSrcIdx = 468;
	  section.data(469).dtTransOffset = 618;
	
	  ;% wss_system__P.Comedi0DAC5_P1
	  section.data(470).logicalSrcIdx = 469;
	  section.data(470).dtTransOffset = 620;
	
	  ;% wss_system__P.Comedi0DAC5_P2_Size
	  section.data(471).logicalSrcIdx = 470;
	  section.data(471).dtTransOffset = 621;
	
	  ;% wss_system__P.Comedi0DAC5_P2
	  section.data(472).logicalSrcIdx = 471;
	  section.data(472).dtTransOffset = 623;
	
	  ;% wss_system__P.Comedi0DAC5_P3_Size
	  section.data(473).logicalSrcIdx = 472;
	  section.data(473).dtTransOffset = 624;
	
	  ;% wss_system__P.Comedi0DAC5_P3
	  section.data(474).logicalSrcIdx = 473;
	  section.data(474).dtTransOffset = 626;
	
	  ;% wss_system__P.Comedi0DAC5_P4_Size
	  section.data(475).logicalSrcIdx = 474;
	  section.data(475).dtTransOffset = 627;
	
	  ;% wss_system__P.Comedi0DAC5_P4
	  section.data(476).logicalSrcIdx = 475;
	  section.data(476).dtTransOffset = 629;
	
	  ;% wss_system__P.Gain_Gain_o
	  section.data(477).logicalSrcIdx = 476;
	  section.data(477).dtTransOffset = 630;
	
	  ;% wss_system__P.Comedi0DAC2_P1_Size
	  section.data(478).logicalSrcIdx = 477;
	  section.data(478).dtTransOffset = 631;
	
	  ;% wss_system__P.Comedi0DAC2_P1
	  section.data(479).logicalSrcIdx = 478;
	  section.data(479).dtTransOffset = 633;
	
	  ;% wss_system__P.Comedi0DAC2_P2_Size
	  section.data(480).logicalSrcIdx = 479;
	  section.data(480).dtTransOffset = 634;
	
	  ;% wss_system__P.Comedi0DAC2_P2
	  section.data(481).logicalSrcIdx = 480;
	  section.data(481).dtTransOffset = 636;
	
	  ;% wss_system__P.Comedi0DAC2_P3_Size
	  section.data(482).logicalSrcIdx = 481;
	  section.data(482).dtTransOffset = 637;
	
	  ;% wss_system__P.Comedi0DAC2_P3
	  section.data(483).logicalSrcIdx = 482;
	  section.data(483).dtTransOffset = 639;
	
	  ;% wss_system__P.Comedi0DAC2_P4_Size
	  section.data(484).logicalSrcIdx = 483;
	  section.data(484).dtTransOffset = 640;
	
	  ;% wss_system__P.Comedi0DAC2_P4
	  section.data(485).logicalSrcIdx = 484;
	  section.data(485).dtTransOffset = 642;
	
	  ;% wss_system__P.Gain1_Gain_j
	  section.data(486).logicalSrcIdx = 485;
	  section.data(486).dtTransOffset = 643;
	
	  ;% wss_system__P.Comedi0DAC1_P1_Size
	  section.data(487).logicalSrcIdx = 486;
	  section.data(487).dtTransOffset = 644;
	
	  ;% wss_system__P.Comedi0DAC1_P1
	  section.data(488).logicalSrcIdx = 487;
	  section.data(488).dtTransOffset = 646;
	
	  ;% wss_system__P.Comedi0DAC1_P2_Size
	  section.data(489).logicalSrcIdx = 488;
	  section.data(489).dtTransOffset = 647;
	
	  ;% wss_system__P.Comedi0DAC1_P2
	  section.data(490).logicalSrcIdx = 489;
	  section.data(490).dtTransOffset = 649;
	
	  ;% wss_system__P.Comedi0DAC1_P3_Size
	  section.data(491).logicalSrcIdx = 490;
	  section.data(491).dtTransOffset = 650;
	
	  ;% wss_system__P.Comedi0DAC1_P3
	  section.data(492).logicalSrcIdx = 491;
	  section.data(492).dtTransOffset = 652;
	
	  ;% wss_system__P.Comedi0DAC1_P4_Size
	  section.data(493).logicalSrcIdx = 492;
	  section.data(493).dtTransOffset = 653;
	
	  ;% wss_system__P.Comedi0DAC1_P4
	  section.data(494).logicalSrcIdx = 493;
	  section.data(494).dtTransOffset = 655;
	
	  ;% wss_system__P.Gain2_Gain_ou
	  section.data(495).logicalSrcIdx = 494;
	  section.data(495).dtTransOffset = 656;
	
	  ;% wss_system__P.Comedi2DAC4_P1_Size
	  section.data(496).logicalSrcIdx = 495;
	  section.data(496).dtTransOffset = 657;
	
	  ;% wss_system__P.Comedi2DAC4_P1
	  section.data(497).logicalSrcIdx = 496;
	  section.data(497).dtTransOffset = 659;
	
	  ;% wss_system__P.Comedi2DAC4_P2_Size
	  section.data(498).logicalSrcIdx = 497;
	  section.data(498).dtTransOffset = 660;
	
	  ;% wss_system__P.Comedi2DAC4_P2
	  section.data(499).logicalSrcIdx = 498;
	  section.data(499).dtTransOffset = 662;
	
	  ;% wss_system__P.Comedi2DAC4_P3_Size
	  section.data(500).logicalSrcIdx = 499;
	  section.data(500).dtTransOffset = 663;
	
	  ;% wss_system__P.Comedi2DAC4_P3
	  section.data(501).logicalSrcIdx = 500;
	  section.data(501).dtTransOffset = 665;
	
	  ;% wss_system__P.Comedi2DAC4_P4_Size
	  section.data(502).logicalSrcIdx = 501;
	  section.data(502).dtTransOffset = 666;
	
	  ;% wss_system__P.Comedi2DAC4_P4
	  section.data(503).logicalSrcIdx = 502;
	  section.data(503).dtTransOffset = 668;
	
	  ;% wss_system__P.Gain3_Gain_e
	  section.data(504).logicalSrcIdx = 503;
	  section.data(504).dtTransOffset = 669;
	
	  ;% wss_system__P.Comedi2DAC5_P1_Size
	  section.data(505).logicalSrcIdx = 504;
	  section.data(505).dtTransOffset = 670;
	
	  ;% wss_system__P.Comedi2DAC5_P1
	  section.data(506).logicalSrcIdx = 505;
	  section.data(506).dtTransOffset = 672;
	
	  ;% wss_system__P.Comedi2DAC5_P2_Size
	  section.data(507).logicalSrcIdx = 506;
	  section.data(507).dtTransOffset = 673;
	
	  ;% wss_system__P.Comedi2DAC5_P2
	  section.data(508).logicalSrcIdx = 507;
	  section.data(508).dtTransOffset = 675;
	
	  ;% wss_system__P.Comedi2DAC5_P3_Size
	  section.data(509).logicalSrcIdx = 508;
	  section.data(509).dtTransOffset = 676;
	
	  ;% wss_system__P.Comedi2DAC5_P3
	  section.data(510).logicalSrcIdx = 509;
	  section.data(510).dtTransOffset = 678;
	
	  ;% wss_system__P.Comedi2DAC5_P4_Size
	  section.data(511).logicalSrcIdx = 510;
	  section.data(511).dtTransOffset = 679;
	
	  ;% wss_system__P.Comedi2DAC5_P4
	  section.data(512).logicalSrcIdx = 511;
	  section.data(512).dtTransOffset = 681;
	
	  ;% wss_system__P.Gain4_Gain_a
	  section.data(513).logicalSrcIdx = 512;
	  section.data(513).dtTransOffset = 682;
	
	  ;% wss_system__P.Comedi0DAC0_P1_Size
	  section.data(514).logicalSrcIdx = 513;
	  section.data(514).dtTransOffset = 683;
	
	  ;% wss_system__P.Comedi0DAC0_P1
	  section.data(515).logicalSrcIdx = 514;
	  section.data(515).dtTransOffset = 685;
	
	  ;% wss_system__P.Comedi0DAC0_P2_Size
	  section.data(516).logicalSrcIdx = 515;
	  section.data(516).dtTransOffset = 686;
	
	  ;% wss_system__P.Comedi0DAC0_P2
	  section.data(517).logicalSrcIdx = 516;
	  section.data(517).dtTransOffset = 688;
	
	  ;% wss_system__P.Comedi0DAC0_P3_Size
	  section.data(518).logicalSrcIdx = 517;
	  section.data(518).dtTransOffset = 689;
	
	  ;% wss_system__P.Comedi0DAC0_P3
	  section.data(519).logicalSrcIdx = 518;
	  section.data(519).dtTransOffset = 691;
	
	  ;% wss_system__P.Comedi0DAC0_P4_Size
	  section.data(520).logicalSrcIdx = 519;
	  section.data(520).dtTransOffset = 692;
	
	  ;% wss_system__P.Comedi0DAC0_P4
	  section.data(521).logicalSrcIdx = 520;
	  section.data(521).dtTransOffset = 694;
	
	  ;% wss_system__P.Gain5_Gain
	  section.data(522).logicalSrcIdx = 521;
	  section.data(522).dtTransOffset = 695;
	
	  ;% wss_system__P.Comedi2DAC6_P1_Size
	  section.data(523).logicalSrcIdx = 522;
	  section.data(523).dtTransOffset = 696;
	
	  ;% wss_system__P.Comedi2DAC6_P1
	  section.data(524).logicalSrcIdx = 523;
	  section.data(524).dtTransOffset = 698;
	
	  ;% wss_system__P.Comedi2DAC6_P2_Size
	  section.data(525).logicalSrcIdx = 524;
	  section.data(525).dtTransOffset = 699;
	
	  ;% wss_system__P.Comedi2DAC6_P2
	  section.data(526).logicalSrcIdx = 525;
	  section.data(526).dtTransOffset = 701;
	
	  ;% wss_system__P.Comedi2DAC6_P3_Size
	  section.data(527).logicalSrcIdx = 526;
	  section.data(527).dtTransOffset = 702;
	
	  ;% wss_system__P.Comedi2DAC6_P3
	  section.data(528).logicalSrcIdx = 527;
	  section.data(528).dtTransOffset = 704;
	
	  ;% wss_system__P.Comedi2DAC6_P4_Size
	  section.data(529).logicalSrcIdx = 528;
	  section.data(529).dtTransOffset = 705;
	
	  ;% wss_system__P.Comedi2DAC6_P4
	  section.data(530).logicalSrcIdx = 529;
	  section.data(530).dtTransOffset = 707;
	
	  ;% wss_system__P.Comedi0DO0_P1_Size
	  section.data(531).logicalSrcIdx = 530;
	  section.data(531).dtTransOffset = 708;
	
	  ;% wss_system__P.Comedi0DO0_P1
	  section.data(532).logicalSrcIdx = 531;
	  section.data(532).dtTransOffset = 710;
	
	  ;% wss_system__P.Comedi0DO0_P2_Size
	  section.data(533).logicalSrcIdx = 532;
	  section.data(533).dtTransOffset = 711;
	
	  ;% wss_system__P.Comedi0DO0_P2
	  section.data(534).logicalSrcIdx = 533;
	  section.data(534).dtTransOffset = 713;
	
	  ;% wss_system__P.Comedi0DO0_P3_Size
	  section.data(535).logicalSrcIdx = 534;
	  section.data(535).dtTransOffset = 714;
	
	  ;% wss_system__P.Comedi0DO0_P3
	  section.data(536).logicalSrcIdx = 535;
	  section.data(536).dtTransOffset = 716;
	
	  ;% wss_system__P.Comedi0DO1_P1_Size
	  section.data(537).logicalSrcIdx = 536;
	  section.data(537).dtTransOffset = 717;
	
	  ;% wss_system__P.Comedi0DO1_P1
	  section.data(538).logicalSrcIdx = 537;
	  section.data(538).dtTransOffset = 719;
	
	  ;% wss_system__P.Comedi0DO1_P2_Size
	  section.data(539).logicalSrcIdx = 538;
	  section.data(539).dtTransOffset = 720;
	
	  ;% wss_system__P.Comedi0DO1_P2
	  section.data(540).logicalSrcIdx = 539;
	  section.data(540).dtTransOffset = 722;
	
	  ;% wss_system__P.Comedi0DO1_P3_Size
	  section.data(541).logicalSrcIdx = 540;
	  section.data(541).dtTransOffset = 723;
	
	  ;% wss_system__P.Comedi0DO1_P3
	  section.data(542).logicalSrcIdx = 541;
	  section.data(542).dtTransOffset = 725;
	
	  ;% wss_system__P.Comedi0DO2_P1_Size
	  section.data(543).logicalSrcIdx = 542;
	  section.data(543).dtTransOffset = 726;
	
	  ;% wss_system__P.Comedi0DO2_P1
	  section.data(544).logicalSrcIdx = 543;
	  section.data(544).dtTransOffset = 728;
	
	  ;% wss_system__P.Comedi0DO2_P2_Size
	  section.data(545).logicalSrcIdx = 544;
	  section.data(545).dtTransOffset = 729;
	
	  ;% wss_system__P.Comedi0DO2_P2
	  section.data(546).logicalSrcIdx = 545;
	  section.data(546).dtTransOffset = 731;
	
	  ;% wss_system__P.Comedi0DO2_P3_Size
	  section.data(547).logicalSrcIdx = 546;
	  section.data(547).dtTransOffset = 732;
	
	  ;% wss_system__P.Comedi0DO2_P3
	  section.data(548).logicalSrcIdx = 547;
	  section.data(548).dtTransOffset = 734;
	
	  ;% wss_system__P.Comedi0DO3_P1_Size
	  section.data(549).logicalSrcIdx = 548;
	  section.data(549).dtTransOffset = 735;
	
	  ;% wss_system__P.Comedi0DO3_P1
	  section.data(550).logicalSrcIdx = 549;
	  section.data(550).dtTransOffset = 737;
	
	  ;% wss_system__P.Comedi0DO3_P2_Size
	  section.data(551).logicalSrcIdx = 550;
	  section.data(551).dtTransOffset = 738;
	
	  ;% wss_system__P.Comedi0DO3_P2
	  section.data(552).logicalSrcIdx = 551;
	  section.data(552).dtTransOffset = 740;
	
	  ;% wss_system__P.Comedi0DO3_P3_Size
	  section.data(553).logicalSrcIdx = 552;
	  section.data(553).dtTransOffset = 741;
	
	  ;% wss_system__P.Comedi0DO3_P3
	  section.data(554).logicalSrcIdx = 553;
	  section.data(554).dtTransOffset = 743;
	
	  ;% wss_system__P.LookUpTable_XData_p
	  section.data(555).logicalSrcIdx = 554;
	  section.data(555).dtTransOffset = 744;
	
	  ;% wss_system__P.LookUpTable_YData_k
	  section.data(556).logicalSrcIdx = 555;
	  section.data(556).dtTransOffset = 767;
	
	  ;% wss_system__P.HitCrossing_Offset_f
	  section.data(557).logicalSrcIdx = 556;
	  section.data(557).dtTransOffset = 790;
	
	  ;% wss_system__P.LookUpTable_XData_i
	  section.data(558).logicalSrcIdx = 557;
	  section.data(558).dtTransOffset = 791;
	
	  ;% wss_system__P.LookUpTable_YData_b
	  section.data(559).logicalSrcIdx = 558;
	  section.data(559).dtTransOffset = 830;
	
	  ;% wss_system__P.HitCrossing_Offset_i
	  section.data(560).logicalSrcIdx = 559;
	  section.data(560).dtTransOffset = 869;
	
	  ;% wss_system__P.LookUpTable_XData_is
	  section.data(561).logicalSrcIdx = 560;
	  section.data(561).dtTransOffset = 870;
	
	  ;% wss_system__P.LookUpTable_YData_g
	  section.data(562).logicalSrcIdx = 561;
	  section.data(562).dtTransOffset = 909;
	
	  ;% wss_system__P.HitCrossing_Offset_o
	  section.data(563).logicalSrcIdx = 562;
	  section.data(563).dtTransOffset = 948;
	
	  ;% wss_system__P.LookUpTable_XData_d
	  section.data(564).logicalSrcIdx = 563;
	  section.data(564).dtTransOffset = 949;
	
	  ;% wss_system__P.LookUpTable_YData_p
	  section.data(565).logicalSrcIdx = 564;
	  section.data(565).dtTransOffset = 988;
	
	  ;% wss_system__P.HitCrossing_Offset_fi
	  section.data(566).logicalSrcIdx = 565;
	  section.data(566).dtTransOffset = 1027;
	
	  ;% wss_system__P.LookUpTable_XData_f
	  section.data(567).logicalSrcIdx = 566;
	  section.data(567).dtTransOffset = 1028;
	
	  ;% wss_system__P.LookUpTable_YData_d
	  section.data(568).logicalSrcIdx = 567;
	  section.data(568).dtTransOffset = 1035;
	
	  ;% wss_system__P.HitCrossing_Offset_l
	  section.data(569).logicalSrcIdx = 568;
	  section.data(569).dtTransOffset = 1042;
	
	  ;% wss_system__P.LookUpTable_XData_n
	  section.data(570).logicalSrcIdx = 569;
	  section.data(570).dtTransOffset = 1043;
	
	  ;% wss_system__P.LookUpTable_YData_ko
	  section.data(571).logicalSrcIdx = 570;
	  section.data(571).dtTransOffset = 1050;
	
	  ;% wss_system__P.HitCrossing_Offset_la
	  section.data(572).logicalSrcIdx = 571;
	  section.data(572).dtTransOffset = 1057;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (wss_system__B)
    ;%
      section.nData     = 101;
      section.data(101)  = dumData; %prealloc
      
	  ;% wss_system__B.Comedi0ADC3
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% wss_system__B.Gain
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% wss_system__B.Integ4
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% wss_system__B.SFunction
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% wss_system__B.Switch
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% wss_system__B.Comedi0ADC4
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% wss_system__B.Gain1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% wss_system__B.Integ4_f
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% wss_system__B.SFunction_d
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% wss_system__B.Switch_d
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% wss_system__B.Comedi2ADC4
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% wss_system__B.Gain2
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% wss_system__B.Integ4_d
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% wss_system__B.SFunction_j
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% wss_system__B.Switch_k
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% wss_system__B.Comedi2ADC5
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% wss_system__B.Gain3
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% wss_system__B.Integ4_ff
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% wss_system__B.SFunction_dm
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% wss_system__B.Switch_a
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% wss_system__B.Comedi2ADC0
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% wss_system__B.Gain_n
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% wss_system__B.Integ4_a
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% wss_system__B.SFunction_jd
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% wss_system__B.Comedi0ADC1
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% wss_system__B.Gain1_d
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% wss_system__B.Integ4_b
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% wss_system__B.SFunction_l
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% wss_system__B.Comedi2ADC1
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% wss_system__B.Gain2_h
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% wss_system__B.Integ4_l
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% wss_system__B.SFunction_b
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% wss_system__B.Comedi2ADC2
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% wss_system__B.Gain3_k
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% wss_system__B.Integ4_b2
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% wss_system__B.SFunction_m
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% wss_system__B.Comedi2ADC7
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% wss_system__B.Gain_i
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% wss_system__B.Integ4_e
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% wss_system__B.SFunction_bt
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% wss_system__B.Switch_n
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% wss_system__B.Comedi0ADC7
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% wss_system__B.Gain1_i
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% wss_system__B.Integ4_o
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% wss_system__B.SFunction_dl
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% wss_system__B.Switch_l
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% wss_system__B.Comedi2ADC3
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% wss_system__B.Gain2_hi
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% wss_system__B.Integ4_f1
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% wss_system__B.SFunction_g
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
	  ;% wss_system__B.Switch_do
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 50;
	
	  ;% wss_system__B.Comedi0ADC6
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 51;
	
	  ;% wss_system__B.Gain3_a
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 52;
	
	  ;% wss_system__B.Integ4_dg
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 53;
	
	  ;% wss_system__B.SFunction_gz
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 54;
	
	  ;% wss_system__B.Switch_kz
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 55;
	
	  ;% wss_system__B.Constant8
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 56;
	
	  ;% wss_system__B.Constant5
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 57;
	
	  ;% wss_system__B.Constant9
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 58;
	
	  ;% wss_system__B.LookUpTable
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 59;
	
	  ;% wss_system__B.Comedi0ADC2
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 60;
	
	  ;% wss_system__B.Gain4
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 61;
	
	  ;% wss_system__B.Integ4_g
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 62;
	
	  ;% wss_system__B.SFunction_ge
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 63;
	
	  ;% wss_system__B.Switch_nj
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 64;
	
	  ;% wss_system__B.Add2
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 65;
	
	  ;% wss_system__B.Add2_m
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 66;
	
	  ;% wss_system__B.Add2_g
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 67;
	
	  ;% wss_system__B.Add2_h
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 68;
	
	  ;% wss_system__B.Gain_iz
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 69;
	
	  ;% wss_system__B.Gain_b
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 70;
	
	  ;% wss_system__B.Gain_c
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 71;
	
	  ;% wss_system__B.Gain_l
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 72;
	
	  ;% wss_system__B.Derivative
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 73;
	
	  ;% wss_system__B.Comedi2ADC6
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 74;
	
	  ;% wss_system__B.Comedi0ADC5
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 75;
	
	  ;% wss_system__B.Comedi0ADC0
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 76;
	
	  ;% wss_system__B.Comedi1ADC0
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 77;
	
	  ;% wss_system__B.Comedi1ADC1
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 78;
	
	  ;% wss_system__B.Comedi1ADC2
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 79;
	
	  ;% wss_system__B.Comedi1ADC3
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 80;
	
	  ;% wss_system__B.Comedi1ADC4
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 81;
	
	  ;% wss_system__B.Comedi1ADC5
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 82;
	
	  ;% wss_system__B.Gain_in
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 83;
	
	  ;% wss_system__B.Gain1_a
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 84;
	
	  ;% wss_system__B.Gain2_i
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 85;
	
	  ;% wss_system__B.Gain3_i
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 86;
	
	  ;% wss_system__B.Gain4_n
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 87;
	
	  ;% wss_system__B.Gain5
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 88;
	
	  ;% wss_system__B.LookUpTable_p
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 89;
	
	  ;% wss_system__B.Derivative_o
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 90;
	
	  ;% wss_system__B.LookUpTable_m
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 91;
	
	  ;% wss_system__B.Derivative_m
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 92;
	
	  ;% wss_system__B.LookUpTable_b
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 93;
	
	  ;% wss_system__B.Derivative_k
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 94;
	
	  ;% wss_system__B.LookUpTable_bh
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 95;
	
	  ;% wss_system__B.Derivative_f
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 96;
	
	  ;% wss_system__B.LookUpTable_e
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 97;
	
	  ;% wss_system__B.Derivative_e
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 98;
	
	  ;% wss_system__B.LookUpTable_j
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 99;
	
	  ;% wss_system__B.Derivative_oi
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 100;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (wss_system__DWork)
    ;%
      section.nData     = 71;
      section.data(71)  = dumData; %prealloc
      
	  ;% wss_system__DWork.Integ4_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% wss_system__DWork.Integ4_DSTATE_g
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_n
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% wss_system__DWork.Integ4_DSTATE_d
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_e
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% wss_system__DWork.Integ4_DSTATE_h
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_b
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% wss_system__DWork.Integ4_DSTATE_a
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_c
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% wss_system__DWork.Integ4_DSTATE_j
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_k
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% wss_system__DWork.Integ4_DSTATE_k
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_d
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% wss_system__DWork.Integ4_DSTATE_b
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_p
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% wss_system__DWork.Integ4_DSTATE_hy
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_f
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% wss_system__DWork.Integ4_DSTATE_e
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_f4
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% wss_system__DWork.Integ4_DSTATE_ag
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_kc
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% wss_system__DWork.Integ4_DSTATE_o
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_nt
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% wss_system__DWork.Integ4_DSTATE_kk
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% wss_system__DWork.UnitDelay_DSTATE_m
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% wss_system__DWork.DiscreteTimeIntegrator_DSTATE
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% wss_system__DWork.DiscreteTimeIntegrator_DSTATE_d
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% wss_system__DWork.DiscreteTimeIntegrator_DSTATE_b
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% wss_system__DWork.DiscreteTimeIntegrator_DSTATE_a
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% wss_system__DWork.Comedi0ADC3_RWORK
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% wss_system__DWork.Comedi0ADC4_RWORK
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 32;
	
	  ;% wss_system__DWork.Comedi2ADC4_RWORK
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 34;
	
	  ;% wss_system__DWork.Comedi2ADC5_RWORK
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 36;
	
	  ;% wss_system__DWork.Comedi2ADC0_RWORK
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 38;
	
	  ;% wss_system__DWork.Comedi0ADC1_RWORK
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 40;
	
	  ;% wss_system__DWork.Comedi2ADC1_RWORK
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 42;
	
	  ;% wss_system__DWork.Comedi2ADC2_RWORK
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 44;
	
	  ;% wss_system__DWork.Comedi2ADC7_RWORK
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 46;
	
	  ;% wss_system__DWork.Comedi0ADC7_RWORK
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 48;
	
	  ;% wss_system__DWork.Comedi2ADC3_RWORK
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 50;
	
	  ;% wss_system__DWork.Comedi0ADC6_RWORK
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 52;
	
	  ;% wss_system__DWork.Comedi0ADC2_RWORK
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 54;
	
	  ;% wss_system__DWork.Derivative_RWORK.TimeStampA
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 56;
	
	  ;% wss_system__DWork.Comedi2ADC6_RWORK
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 57;
	
	  ;% wss_system__DWork.Comedi0ADC5_RWORK
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 59;
	
	  ;% wss_system__DWork.Comedi0ADC0_RWORK
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 61;
	
	  ;% wss_system__DWork.Comedi1ADC0_RWORK
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 63;
	
	  ;% wss_system__DWork.Comedi1ADC1_RWORK
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 65;
	
	  ;% wss_system__DWork.Comedi1ADC2_RWORK
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 67;
	
	  ;% wss_system__DWork.Comedi1ADC3_RWORK
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 69;
	
	  ;% wss_system__DWork.Comedi1ADC4_RWORK
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 71;
	
	  ;% wss_system__DWork.Comedi1ADC5_RWORK
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 73;
	
	  ;% wss_system__DWork.Comedi2DAC0_RWORK
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 75;
	
	  ;% wss_system__DWork.Comedi2DAC1_RWORK
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 77;
	
	  ;% wss_system__DWork.Comedi2DAC2_RWORK
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 79;
	
	  ;% wss_system__DWork.Comedi2DAC3_RWORK
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 81;
	
	  ;% wss_system__DWork.Comedi0DAC4_RWORK
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 83;
	
	  ;% wss_system__DWork.Comedi0DAC5_RWORK
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 85;
	
	  ;% wss_system__DWork.Comedi0DAC2_RWORK
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 87;
	
	  ;% wss_system__DWork.Comedi0DAC1_RWORK
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 89;
	
	  ;% wss_system__DWork.Comedi2DAC4_RWORK
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 91;
	
	  ;% wss_system__DWork.Comedi2DAC5_RWORK
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 93;
	
	  ;% wss_system__DWork.Comedi0DAC0_RWORK
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 95;
	
	  ;% wss_system__DWork.Comedi2DAC6_RWORK
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 97;
	
	  ;% wss_system__DWork.Derivative_RWORK_e.TimeStampA
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 99;
	
	  ;% wss_system__DWork.Derivative_RWORK_l.TimeStampA
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 100;
	
	  ;% wss_system__DWork.Derivative_RWORK_h.TimeStampA
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 101;
	
	  ;% wss_system__DWork.Derivative_RWORK_o.TimeStampA
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 102;
	
	  ;% wss_system__DWork.Derivative_RWORK_m.TimeStampA
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 103;
	
	  ;% wss_system__DWork.Derivative_RWORK_p.TimeStampA
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 104;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 62;
      section.data(62)  = dumData; %prealloc
      
	  ;% wss_system__DWork.Comedi0ADC3_PWORK
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
	  ;% wss_system__DWork.SFunction_PWORK.uBuffers
	  section.data(2).logicalSrcIdx = 72;
	  section.data(2).dtTransOffset = 1;
	
	  ;% wss_system__DWork.Comedi0ADC4_PWORK
	  section.data(3).logicalSrcIdx = 73;
	  section.data(3).dtTransOffset = 2;
	
	  ;% wss_system__DWork.SFunction_PWORK_f.uBuffers
	  section.data(4).logicalSrcIdx = 74;
	  section.data(4).dtTransOffset = 3;
	
	  ;% wss_system__DWork.Comedi2ADC4_PWORK
	  section.data(5).logicalSrcIdx = 75;
	  section.data(5).dtTransOffset = 4;
	
	  ;% wss_system__DWork.SFunction_PWORK_c.uBuffers
	  section.data(6).logicalSrcIdx = 76;
	  section.data(6).dtTransOffset = 5;
	
	  ;% wss_system__DWork.Comedi2ADC5_PWORK
	  section.data(7).logicalSrcIdx = 77;
	  section.data(7).dtTransOffset = 6;
	
	  ;% wss_system__DWork.SFunction_PWORK_a.uBuffers
	  section.data(8).logicalSrcIdx = 78;
	  section.data(8).dtTransOffset = 7;
	
	  ;% wss_system__DWork.PMA_pressures_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 79;
	  section.data(9).dtTransOffset = 8;
	
	  ;% wss_system__DWork.Comedi2ADC0_PWORK
	  section.data(10).logicalSrcIdx = 80;
	  section.data(10).dtTransOffset = 9;
	
	  ;% wss_system__DWork.SFunction_PWORK_i.uBuffers
	  section.data(11).logicalSrcIdx = 81;
	  section.data(11).dtTransOffset = 10;
	
	  ;% wss_system__DWork.Comedi0ADC1_PWORK
	  section.data(12).logicalSrcIdx = 82;
	  section.data(12).dtTransOffset = 11;
	
	  ;% wss_system__DWork.SFunction_PWORK_j.uBuffers
	  section.data(13).logicalSrcIdx = 83;
	  section.data(13).dtTransOffset = 12;
	
	  ;% wss_system__DWork.Comedi2ADC1_PWORK
	  section.data(14).logicalSrcIdx = 84;
	  section.data(14).dtTransOffset = 13;
	
	  ;% wss_system__DWork.SFunction_PWORK_n.uBuffers
	  section.data(15).logicalSrcIdx = 85;
	  section.data(15).dtTransOffset = 14;
	
	  ;% wss_system__DWork.Comedi2ADC2_PWORK
	  section.data(16).logicalSrcIdx = 86;
	  section.data(16).dtTransOffset = 15;
	
	  ;% wss_system__DWork.SFunction_PWORK_g.uBuffers
	  section.data(17).logicalSrcIdx = 87;
	  section.data(17).dtTransOffset = 16;
	
	  ;% wss_system__DWork.ToFile_PWORK.FilePtr
	  section.data(18).logicalSrcIdx = 88;
	  section.data(18).dtTransOffset = 17;
	
	  ;% wss_system__DWork.Comedi2ADC7_PWORK
	  section.data(19).logicalSrcIdx = 89;
	  section.data(19).dtTransOffset = 18;
	
	  ;% wss_system__DWork.SFunction_PWORK_b.uBuffers
	  section.data(20).logicalSrcIdx = 90;
	  section.data(20).dtTransOffset = 19;
	
	  ;% wss_system__DWork.Comedi0ADC7_PWORK
	  section.data(21).logicalSrcIdx = 91;
	  section.data(21).dtTransOffset = 20;
	
	  ;% wss_system__DWork.SFunction_PWORK_l.uBuffers
	  section.data(22).logicalSrcIdx = 92;
	  section.data(22).dtTransOffset = 21;
	
	  ;% wss_system__DWork.Comedi2ADC3_PWORK
	  section.data(23).logicalSrcIdx = 93;
	  section.data(23).dtTransOffset = 22;
	
	  ;% wss_system__DWork.SFunction_PWORK_it.uBuffers
	  section.data(24).logicalSrcIdx = 94;
	  section.data(24).dtTransOffset = 23;
	
	  ;% wss_system__DWork.Comedi0ADC6_PWORK
	  section.data(25).logicalSrcIdx = 95;
	  section.data(25).dtTransOffset = 24;
	
	  ;% wss_system__DWork.SFunction_PWORK_p.uBuffers
	  section.data(26).logicalSrcIdx = 96;
	  section.data(26).dtTransOffset = 25;
	
	  ;% wss_system__DWork.ToFile1_PWORK.FilePtr
	  section.data(27).logicalSrcIdx = 97;
	  section.data(27).dtTransOffset = 26;
	
	  ;% wss_system__DWork.ToFile2_PWORK.FilePtr
	  section.data(28).logicalSrcIdx = 98;
	  section.data(28).dtTransOffset = 27;
	
	  ;% wss_system__DWork.Comedi0ADC2_PWORK
	  section.data(29).logicalSrcIdx = 99;
	  section.data(29).dtTransOffset = 28;
	
	  ;% wss_system__DWork.SFunction_PWORK_o.uBuffers
	  section.data(30).logicalSrcIdx = 100;
	  section.data(30).dtTransOffset = 29;
	
	  ;% wss_system__DWork.ToFile3_PWORK.FilePtr
	  section.data(31).logicalSrcIdx = 101;
	  section.data(31).dtTransOffset = 30;
	
	  ;% wss_system__DWork.ToFile4_PWORK.FilePtr
	  section.data(32).logicalSrcIdx = 102;
	  section.data(32).dtTransOffset = 31;
	
	  ;% wss_system__DWork.ToFile5_PWORK.FilePtr
	  section.data(33).logicalSrcIdx = 103;
	  section.data(33).dtTransOffset = 32;
	
	  ;% wss_system__DWork.ToFile6_PWORK.FilePtr
	  section.data(34).logicalSrcIdx = 104;
	  section.data(34).dtTransOffset = 33;
	
	  ;% wss_system__DWork.WT_pressure_PWORK.LoggedData
	  section.data(35).logicalSrcIdx = 105;
	  section.data(35).dtTransOffset = 34;
	
	  ;% wss_system__DWork.diffp1_PWORK.LoggedData
	  section.data(36).logicalSrcIdx = 106;
	  section.data(36).dtTransOffset = 35;
	
	  ;% wss_system__DWork.opn_deg_PWORK.LoggedData
	  section.data(37).logicalSrcIdx = 107;
	  section.data(37).dtTransOffset = 36;
	
	  ;% wss_system__DWork.Comedi2ADC6_PWORK
	  section.data(38).logicalSrcIdx = 108;
	  section.data(38).dtTransOffset = 37;
	
	  ;% wss_system__DWork.Comedi0ADC5_PWORK
	  section.data(39).logicalSrcIdx = 109;
	  section.data(39).dtTransOffset = 38;
	
	  ;% wss_system__DWork.Comedi0ADC0_PWORK
	  section.data(40).logicalSrcIdx = 110;
	  section.data(40).dtTransOffset = 39;
	
	  ;% wss_system__DWork.Comedi1ADC0_PWORK
	  section.data(41).logicalSrcIdx = 111;
	  section.data(41).dtTransOffset = 40;
	
	  ;% wss_system__DWork.Comedi1ADC1_PWORK
	  section.data(42).logicalSrcIdx = 112;
	  section.data(42).dtTransOffset = 41;
	
	  ;% wss_system__DWork.Comedi1ADC2_PWORK
	  section.data(43).logicalSrcIdx = 113;
	  section.data(43).dtTransOffset = 42;
	
	  ;% wss_system__DWork.Comedi1ADC3_PWORK
	  section.data(44).logicalSrcIdx = 114;
	  section.data(44).dtTransOffset = 43;
	
	  ;% wss_system__DWork.Comedi1ADC4_PWORK
	  section.data(45).logicalSrcIdx = 115;
	  section.data(45).dtTransOffset = 44;
	
	  ;% wss_system__DWork.Comedi1ADC5_PWORK
	  section.data(46).logicalSrcIdx = 116;
	  section.data(46).dtTransOffset = 45;
	
	  ;% wss_system__DWork.Comedi2DAC0_PWORK
	  section.data(47).logicalSrcIdx = 117;
	  section.data(47).dtTransOffset = 46;
	
	  ;% wss_system__DWork.Comedi2DAC1_PWORK
	  section.data(48).logicalSrcIdx = 118;
	  section.data(48).dtTransOffset = 47;
	
	  ;% wss_system__DWork.Comedi2DAC2_PWORK
	  section.data(49).logicalSrcIdx = 119;
	  section.data(49).dtTransOffset = 48;
	
	  ;% wss_system__DWork.Comedi2DAC3_PWORK
	  section.data(50).logicalSrcIdx = 120;
	  section.data(50).dtTransOffset = 49;
	
	  ;% wss_system__DWork.Comedi0DAC4_PWORK
	  section.data(51).logicalSrcIdx = 121;
	  section.data(51).dtTransOffset = 50;
	
	  ;% wss_system__DWork.Comedi0DAC5_PWORK
	  section.data(52).logicalSrcIdx = 122;
	  section.data(52).dtTransOffset = 51;
	
	  ;% wss_system__DWork.Comedi0DAC2_PWORK
	  section.data(53).logicalSrcIdx = 123;
	  section.data(53).dtTransOffset = 52;
	
	  ;% wss_system__DWork.Comedi0DAC1_PWORK
	  section.data(54).logicalSrcIdx = 124;
	  section.data(54).dtTransOffset = 53;
	
	  ;% wss_system__DWork.Comedi2DAC4_PWORK
	  section.data(55).logicalSrcIdx = 125;
	  section.data(55).dtTransOffset = 54;
	
	  ;% wss_system__DWork.Comedi2DAC5_PWORK
	  section.data(56).logicalSrcIdx = 126;
	  section.data(56).dtTransOffset = 55;
	
	  ;% wss_system__DWork.Comedi0DAC0_PWORK
	  section.data(57).logicalSrcIdx = 127;
	  section.data(57).dtTransOffset = 56;
	
	  ;% wss_system__DWork.Comedi2DAC6_PWORK
	  section.data(58).logicalSrcIdx = 128;
	  section.data(58).dtTransOffset = 57;
	
	  ;% wss_system__DWork.Comedi0DO0_PWORK
	  section.data(59).logicalSrcIdx = 129;
	  section.data(59).dtTransOffset = 58;
	
	  ;% wss_system__DWork.Comedi0DO1_PWORK
	  section.data(60).logicalSrcIdx = 130;
	  section.data(60).dtTransOffset = 59;
	
	  ;% wss_system__DWork.Comedi0DO2_PWORK
	  section.data(61).logicalSrcIdx = 131;
	  section.data(61).dtTransOffset = 60;
	
	  ;% wss_system__DWork.Comedi0DO3_PWORK
	  section.data(62).logicalSrcIdx = 132;
	  section.data(62).dtTransOffset = 61;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 58;
      section.data(58)  = dumData; %prealloc
      
	  ;% wss_system__DWork.Comedi0ADC3_IWORK
	  section.data(1).logicalSrcIdx = 133;
	  section.data(1).dtTransOffset = 0;
	
	  ;% wss_system__DWork.SFunction_IWORK.indBeg
	  section.data(2).logicalSrcIdx = 134;
	  section.data(2).dtTransOffset = 1;
	
	  ;% wss_system__DWork.Comedi0ADC4_IWORK
	  section.data(3).logicalSrcIdx = 135;
	  section.data(3).dtTransOffset = 2;
	
	  ;% wss_system__DWork.SFunction_IWORK_a.indBeg
	  section.data(4).logicalSrcIdx = 136;
	  section.data(4).dtTransOffset = 3;
	
	  ;% wss_system__DWork.Comedi2ADC4_IWORK
	  section.data(5).logicalSrcIdx = 137;
	  section.data(5).dtTransOffset = 4;
	
	  ;% wss_system__DWork.SFunction_IWORK_b.indBeg
	  section.data(6).logicalSrcIdx = 138;
	  section.data(6).dtTransOffset = 5;
	
	  ;% wss_system__DWork.Comedi2ADC5_IWORK
	  section.data(7).logicalSrcIdx = 139;
	  section.data(7).dtTransOffset = 6;
	
	  ;% wss_system__DWork.SFunction_IWORK_o.indBeg
	  section.data(8).logicalSrcIdx = 140;
	  section.data(8).dtTransOffset = 7;
	
	  ;% wss_system__DWork.Comedi2ADC0_IWORK
	  section.data(9).logicalSrcIdx = 141;
	  section.data(9).dtTransOffset = 8;
	
	  ;% wss_system__DWork.SFunction_IWORK_aa.indBeg
	  section.data(10).logicalSrcIdx = 142;
	  section.data(10).dtTransOffset = 9;
	
	  ;% wss_system__DWork.Comedi0ADC1_IWORK
	  section.data(11).logicalSrcIdx = 143;
	  section.data(11).dtTransOffset = 10;
	
	  ;% wss_system__DWork.SFunction_IWORK_f.indBeg
	  section.data(12).logicalSrcIdx = 144;
	  section.data(12).dtTransOffset = 11;
	
	  ;% wss_system__DWork.Comedi2ADC1_IWORK
	  section.data(13).logicalSrcIdx = 145;
	  section.data(13).dtTransOffset = 12;
	
	  ;% wss_system__DWork.SFunction_IWORK_l.indBeg
	  section.data(14).logicalSrcIdx = 146;
	  section.data(14).dtTransOffset = 13;
	
	  ;% wss_system__DWork.Comedi2ADC2_IWORK
	  section.data(15).logicalSrcIdx = 147;
	  section.data(15).dtTransOffset = 14;
	
	  ;% wss_system__DWork.SFunction_IWORK_ob.indBeg
	  section.data(16).logicalSrcIdx = 148;
	  section.data(16).dtTransOffset = 15;
	
	  ;% wss_system__DWork.ToFile_IWORK.Count
	  section.data(17).logicalSrcIdx = 149;
	  section.data(17).dtTransOffset = 16;
	
	  ;% wss_system__DWork.Comedi2ADC7_IWORK
	  section.data(18).logicalSrcIdx = 150;
	  section.data(18).dtTransOffset = 17;
	
	  ;% wss_system__DWork.SFunction_IWORK_fw.indBeg
	  section.data(19).logicalSrcIdx = 151;
	  section.data(19).dtTransOffset = 18;
	
	  ;% wss_system__DWork.Comedi0ADC7_IWORK
	  section.data(20).logicalSrcIdx = 152;
	  section.data(20).dtTransOffset = 19;
	
	  ;% wss_system__DWork.SFunction_IWORK_e.indBeg
	  section.data(21).logicalSrcIdx = 153;
	  section.data(21).dtTransOffset = 20;
	
	  ;% wss_system__DWork.Comedi2ADC3_IWORK
	  section.data(22).logicalSrcIdx = 154;
	  section.data(22).dtTransOffset = 21;
	
	  ;% wss_system__DWork.SFunction_IWORK_al.indBeg
	  section.data(23).logicalSrcIdx = 155;
	  section.data(23).dtTransOffset = 22;
	
	  ;% wss_system__DWork.Comedi0ADC6_IWORK
	  section.data(24).logicalSrcIdx = 156;
	  section.data(24).dtTransOffset = 23;
	
	  ;% wss_system__DWork.SFunction_IWORK_m.indBeg
	  section.data(25).logicalSrcIdx = 157;
	  section.data(25).dtTransOffset = 24;
	
	  ;% wss_system__DWork.ToFile1_IWORK.Count
	  section.data(26).logicalSrcIdx = 158;
	  section.data(26).dtTransOffset = 25;
	
	  ;% wss_system__DWork.ToFile2_IWORK.Count
	  section.data(27).logicalSrcIdx = 159;
	  section.data(27).dtTransOffset = 26;
	
	  ;% wss_system__DWork.Comedi0ADC2_IWORK
	  section.data(28).logicalSrcIdx = 160;
	  section.data(28).dtTransOffset = 27;
	
	  ;% wss_system__DWork.SFunction_IWORK_p.indBeg
	  section.data(29).logicalSrcIdx = 161;
	  section.data(29).dtTransOffset = 28;
	
	  ;% wss_system__DWork.ToFile3_IWORK.Count
	  section.data(30).logicalSrcIdx = 162;
	  section.data(30).dtTransOffset = 29;
	
	  ;% wss_system__DWork.ToFile4_IWORK.Count
	  section.data(31).logicalSrcIdx = 163;
	  section.data(31).dtTransOffset = 30;
	
	  ;% wss_system__DWork.ToFile5_IWORK.Count
	  section.data(32).logicalSrcIdx = 164;
	  section.data(32).dtTransOffset = 31;
	
	  ;% wss_system__DWork.ToFile6_IWORK.Count
	  section.data(33).logicalSrcIdx = 165;
	  section.data(33).dtTransOffset = 32;
	
	  ;% wss_system__DWork.Comedi2ADC6_IWORK
	  section.data(34).logicalSrcIdx = 166;
	  section.data(34).dtTransOffset = 33;
	
	  ;% wss_system__DWork.Comedi0ADC5_IWORK
	  section.data(35).logicalSrcIdx = 167;
	  section.data(35).dtTransOffset = 34;
	
	  ;% wss_system__DWork.Comedi0ADC0_IWORK
	  section.data(36).logicalSrcIdx = 168;
	  section.data(36).dtTransOffset = 35;
	
	  ;% wss_system__DWork.Comedi1ADC0_IWORK
	  section.data(37).logicalSrcIdx = 169;
	  section.data(37).dtTransOffset = 36;
	
	  ;% wss_system__DWork.Comedi1ADC1_IWORK
	  section.data(38).logicalSrcIdx = 170;
	  section.data(38).dtTransOffset = 37;
	
	  ;% wss_system__DWork.Comedi1ADC2_IWORK
	  section.data(39).logicalSrcIdx = 171;
	  section.data(39).dtTransOffset = 38;
	
	  ;% wss_system__DWork.Comedi1ADC3_IWORK
	  section.data(40).logicalSrcIdx = 172;
	  section.data(40).dtTransOffset = 39;
	
	  ;% wss_system__DWork.Comedi1ADC4_IWORK
	  section.data(41).logicalSrcIdx = 173;
	  section.data(41).dtTransOffset = 40;
	
	  ;% wss_system__DWork.Comedi1ADC5_IWORK
	  section.data(42).logicalSrcIdx = 174;
	  section.data(42).dtTransOffset = 41;
	
	  ;% wss_system__DWork.Comedi2DAC0_IWORK
	  section.data(43).logicalSrcIdx = 175;
	  section.data(43).dtTransOffset = 42;
	
	  ;% wss_system__DWork.Comedi2DAC1_IWORK
	  section.data(44).logicalSrcIdx = 176;
	  section.data(44).dtTransOffset = 43;
	
	  ;% wss_system__DWork.Comedi2DAC2_IWORK
	  section.data(45).logicalSrcIdx = 177;
	  section.data(45).dtTransOffset = 44;
	
	  ;% wss_system__DWork.Comedi2DAC3_IWORK
	  section.data(46).logicalSrcIdx = 178;
	  section.data(46).dtTransOffset = 45;
	
	  ;% wss_system__DWork.Comedi0DAC4_IWORK
	  section.data(47).logicalSrcIdx = 179;
	  section.data(47).dtTransOffset = 46;
	
	  ;% wss_system__DWork.Comedi0DAC5_IWORK
	  section.data(48).logicalSrcIdx = 180;
	  section.data(48).dtTransOffset = 47;
	
	  ;% wss_system__DWork.Comedi0DAC2_IWORK
	  section.data(49).logicalSrcIdx = 181;
	  section.data(49).dtTransOffset = 48;
	
	  ;% wss_system__DWork.Comedi0DAC1_IWORK
	  section.data(50).logicalSrcIdx = 182;
	  section.data(50).dtTransOffset = 49;
	
	  ;% wss_system__DWork.Comedi2DAC4_IWORK
	  section.data(51).logicalSrcIdx = 183;
	  section.data(51).dtTransOffset = 50;
	
	  ;% wss_system__DWork.Comedi2DAC5_IWORK
	  section.data(52).logicalSrcIdx = 184;
	  section.data(52).dtTransOffset = 51;
	
	  ;% wss_system__DWork.Comedi0DAC0_IWORK
	  section.data(53).logicalSrcIdx = 185;
	  section.data(53).dtTransOffset = 52;
	
	  ;% wss_system__DWork.Comedi2DAC6_IWORK
	  section.data(54).logicalSrcIdx = 186;
	  section.data(54).dtTransOffset = 53;
	
	  ;% wss_system__DWork.Comedi0DO0_IWORK
	  section.data(55).logicalSrcIdx = 187;
	  section.data(55).dtTransOffset = 54;
	
	  ;% wss_system__DWork.Comedi0DO1_IWORK
	  section.data(56).logicalSrcIdx = 188;
	  section.data(56).dtTransOffset = 55;
	
	  ;% wss_system__DWork.Comedi0DO2_IWORK
	  section.data(57).logicalSrcIdx = 189;
	  section.data(57).dtTransOffset = 56;
	
	  ;% wss_system__DWork.Comedi0DO3_IWORK
	  section.data(58).logicalSrcIdx = 190;
	  section.data(58).dtTransOffset = 57;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE
	  section.data(1).logicalSrcIdx = 191;
	  section.data(1).dtTransOffset = 0;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_f
	  section.data(2).logicalSrcIdx = 192;
	  section.data(2).dtTransOffset = 1;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_e
	  section.data(3).logicalSrcIdx = 193;
	  section.data(3).dtTransOffset = 2;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_g
	  section.data(4).logicalSrcIdx = 194;
	  section.data(4).dtTransOffset = 3;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_fl
	  section.data(5).logicalSrcIdx = 195;
	  section.data(5).dtTransOffset = 4;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_o
	  section.data(6).logicalSrcIdx = 196;
	  section.data(6).dtTransOffset = 5;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_k
	  section.data(7).logicalSrcIdx = 197;
	  section.data(7).dtTransOffset = 6;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_a
	  section.data(8).logicalSrcIdx = 198;
	  section.data(8).dtTransOffset = 7;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_d
	  section.data(9).logicalSrcIdx = 199;
	  section.data(9).dtTransOffset = 8;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_df
	  section.data(10).logicalSrcIdx = 200;
	  section.data(10).dtTransOffset = 9;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_b
	  section.data(11).logicalSrcIdx = 201;
	  section.data(11).dtTransOffset = 10;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_m
	  section.data(12).logicalSrcIdx = 202;
	  section.data(12).dtTransOffset = 11;
	
	  ;% wss_system__DWork.Integ4_SYSTEM_ENABLE_i
	  section.data(13).logicalSrcIdx = 203;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 4001604340;
  targMap.checksum1 = 2963605654;
  targMap.checksum2 = 4230837008;
  targMap.checksum3 = 1505625283;

