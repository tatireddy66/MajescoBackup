   /**********************************************************************************************
   **                                                                                           **
   **                   	             PLEASE NOTE										    **
   **                   	             ===========										    **
   **                                                                                           **
   **      The Script-View you see here is a READ-ONLY representation of the actual script.     **
   **                                                                                           **
   **      For creating, viewing, modifying, running and/or debugging a script, please press    **
   **                                                                                           **
   **      the "Develop Script" button. This will start Firefox,  with the TruClient sidebar    **
   **                                                                                           **
   **      at the left.  Starting Firefox may take a while. Alternatively, you can run          **
   **                                                                                           **
   **      the current script as-is, without starting Firefox, by pressing the "Run" button.    **
   **                                                                                           **
   **********************************************************************************************/


Script_View_Action()
{
	lr_start_transaction("01_Url Load");
	truclient_step("1", "Navigate to 'https://agents.cover-all.com/'", "snapshot=Action_1.inf");
	lr_end_transaction("01_Url Load",0);
	lr_start_transaction("02_Login");
	truclient_step("2", "Log in", "snapshot=Action_2.inf");
	{
		truclient_step("2.2", "Type 'admin' in Username textbox", "snapshot=Action_2.2.inf");
		truclient_step("2.3", "Type ********** in Password passwordbox", "snapshot=Action_2.3.inf");
		truclient_step("2.4", "Click on Log in button", "snapshot=Action_2.4.inf");
	}
	lr_end_transaction("02_Login",0);
	truclient_step("3", "Mouse Over", "snapshot=Action_3.inf");
	{
		truclient_step("3.4", "Move mouse over START button", "snapshot=Action_3.4.inf");
	}
	lr_start_transaction("03_StartNewPolicy");
	truclient_step("4", "Click on button (1) button", "snapshot=Action_4.inf");
	truclient_step("6", "Click on Commercial Auto listitem", "snapshot=Action_6.inf");
	truclient_step("8", "Click on START button", "snapshot=Action_8.inf");
	lr_end_transaction("03_StartNewPolicy",0);
	lr_start_transaction("04_Choose Company");
	truclient_step("10", "Wait 6 seconds", "snapshot=Action_10.inf");
	truclient_step("11", "Click on Company textbox", "snapshot=Action_11.inf");
	truclient_step("12", "Type 'Cover-all Company' in Company textbox", "snapshot=Action_12.inf");
	lr_end_transaction("04_Choose Company",0);
	truclient_step("13", "Type '04/28/2016' in Effective Date textbox", "snapshot=Action_13.inf");
	truclient_step("15", "Click on Name textbox", "snapshot=Action_15.inf");
	truclient_step("16", "Type 'Newbusiness1' in Name textbox", "snapshot=Action_16.inf");
	truclient_step("18", "Click on Street textbox", "snapshot=Action_18.inf");
	truclient_step("19", "Type 'str555555' in Street textbox", "snapshot=Action_19.inf");
	truclient_step("20", "Click on textbox (2) textbox", "snapshot=Action_20.inf");
	truclient_step("22", "Click on Street textbox", "snapshot=Action_22.inf");
	truclient_step("24", "Mouse Over", "snapshot=Action_24.inf");
	{
		truclient_step("24.16", "Move mouse over United States gridcell", "snapshot=Action_24.16.inf");
	}
	truclient_step("25", "Click on Street textbox", "snapshot=Action_25.inf");
	truclient_step("26", "Type 'str12356' in Street textbox", "snapshot=Action_26.inf");
	truclient_step("28", "Type 'Strt233' in Street textbox", "snapshot=Action_28.inf");
	truclient_step("30", "Click on Business DescriptionDoing...", "snapshot=Action_30.inf");
	truclient_step("31", "Click on State/Province CodeCityZip/Postal...", "snapshot=Action_31.inf");
	{
		truclient_step("31.1", "Click on State/Province CodeCityZip/Postal...", "snapshot=Action_31.1.inf");
		truclient_step("31.2", "Enter credentials in authentication dialog", "snapshot=Action_31.2.inf");
	}
	truclient_step("32", "Mouse Over", "snapshot=Action_32.inf");
	{
		truclient_step("32.1", "Move mouse over element (11)", "snapshot=Action_32.1.inf");
	}
	truclient_step("33", "Click on Choose Zip button", "snapshot=Action_33.inf");
	truclient_step("35", "Click on SearchPolicyProducersCommercial...", "snapshot=Action_35.inf");
	truclient_step("37", "Click on Zip textbox", "snapshot=Action_37.inf");
	truclient_step("38", "Type '' in Zip textbox", "snapshot=Action_38.inf");
	truclient_step("40", "Click on State/Province CodeCityZip/Postal...", "snapshot=Action_40.inf");
	truclient_step("41", "Mouse Over", "snapshot=Action_41.inf");
	{
		truclient_step("41.1", "Move mouse over 08205 gridcell", "snapshot=Action_41.1.inf");
	}
	truclient_step("42", "Click on NJAberdeen07747NJAbsecon...", "snapshot=Action_42.inf");
	truclient_step("44", "Click on button (2) button", "snapshot=Action_44.inf");
	truclient_step("46", "Wait 6 seconds", "snapshot=Action_46.inf");
	truclient_step("47", "Click on Zip textbox", "snapshot=Action_47.inf");
	truclient_step("48", "Type '07747' in Zip textbox", "snapshot=Action_48.inf");
	truclient_step("49", "Mouse Over", "snapshot=Action_49.inf");
	{
		truclient_step("49.2", "Move mouse over State/Province CodeCityZip/Postal...", "snapshot=Action_49.2.inf");
	}
	truclient_step("50", "Click on 07747 button", "snapshot=Action_50.inf");
	lr_start_transaction("05_Policy and Product Info_Next");
	truclient_step("52", "Click on Next button", "snapshot=Action_52.inf");
	lr_end_transaction("05_Policy and Product Info_Next",0);
	truclient_step("54", "Wait 6 seconds", "snapshot=Action_54.inf");
	lr_start_transaction("06_Producers_Add");
	truclient_step("55", "Click on Add button", "snapshot=Action_55.inf");
	lr_end_transaction("06_Producers_Add",0);
	truclient_step("57", "Wait 6 seconds", "snapshot=Action_57.inf");
	truclient_step("58", "Type '0000000123' in Producer No. textbox", "snapshot=Action_58.inf");
	truclient_step("60", "Click on Producer No.0000000123Business...", "snapshot=Action_60.inf");
	lr_start_transaction("07_Producers_Next");
	truclient_step("62", "Click on Next button", "snapshot=Action_62.inf");
	lr_end_transaction("07_Producers_Next",0);
	truclient_step("63", "Wait 6 seconds", "snapshot=Action_63.inf");
	lr_start_transaction("08_Done With Producers");
	truclient_step("64", "Click on DONE WITH Producers button", "snapshot=Action_64.inf");
	lr_end_transaction("08_Done With Producers",0);
	truclient_step("66", "Click on Producer No.0000000123Business...", "snapshot=Action_66.inf");
	lr_start_transaction("09_CommercialAuto_Next");
	truclient_step("67", "Click on Next button", "snapshot=Action_67.inf");
	lr_end_transaction("09_CommercialAuto_Next",0);
	truclient_step("69", "Wait 6 seconds", "snapshot=Action_69.inf");
	lr_start_transaction("10_State Coverage Limits_Add");
	truclient_step("70", "Click on Add button", "snapshot=Action_70.inf");
	lr_end_transaction("10_State Coverage Limits_Add",0);
	truclient_step("72", "Wait 6 seconds", "snapshot=Action_72.inf");
	truclient_step("73", "Click on State textbox", "snapshot=Action_73.inf");
	truclient_step("74", "Click on State textbox", "snapshot=Action_74.inf");
	truclient_step("76", "Click on State textbox", "snapshot=Action_76.inf");
	truclient_step("78", "Type 'Alabama' in State textbox", "snapshot=Action_78.inf");
	truclient_step("80", "Click on element (14)", "snapshot=Action_80.inf");
	truclient_step("81", "Mouse Over", "snapshot=Action_81.inf");
	{
		truclient_step("81.1", "Move mouse over Arizona", "snapshot=Action_81.1.inf");
	}
	truclient_step("82", "Click on Alabama button", "snapshot=Action_82.inf");
	truclient_step("84", "Click on State textbox", "snapshot=Action_84.inf");
	truclient_step("85", "Click on State textbox", "snapshot=Action_85.inf");
	truclient_step("87", "Wait 6 seconds", "snapshot=Action_87.inf");
	truclient_step("88", "Check Liability checkbox", "snapshot=Action_88.inf");
	truclient_step("90", "Click on Combined Single Limit textbox", "snapshot=Action_90.inf");
	truclient_step("91", "Type '1000000' in Combined Single Limit textbox", "snapshot=Action_91.inf");
	truclient_step("92", "Type '1000' in Deductible textbox", "snapshot=Action_92.inf");
	lr_start_transaction("11_AddingStatelimits_next");
	truclient_step("94", "Click on Next button", "snapshot=Action_94.inf");
	lr_end_transaction("11_AddingStatelimits_next",0);
	truclient_step("96", "Wait 6 seconds", "snapshot=Action_96.inf");
	lr_start_transaction("12_Done with State coverage");
	truclient_step("97", "Click on DONE WITH State Coverage... button", "snapshot=Action_97.inf");
	lr_end_transaction("12_Done with State coverage",0);
	truclient_step("99", "Wait 6 seconds", "snapshot=Action_99.inf");
	lr_start_transaction("13_Covered Auto Symbols_Next");
	truclient_step("100", "Click on Next button", "snapshot=Action_100.inf");
	lr_end_transaction("13_Covered Auto Symbols_Next",0);
	truclient_step("102", "Wait 6 seconds", "snapshot=Action_102.inf");
	lr_start_transaction("14_Locations_Add");
	truclient_step("103", "Click on Add button", "snapshot=Action_103.inf");
	lr_end_transaction("14_Locations_Add",0);
	truclient_step("105", "Wait 6 seconds", "snapshot=Action_105.inf");
	truclient_step("106", "Check Main Location checkbox", "snapshot=Action_106.inf");
	truclient_step("107", "Click on Street textbox", "snapshot=Action_107.inf");
	truclient_step("108", "Type 'str88676' in Street textbox", "snapshot=Action_108.inf");
	truclient_step("109", "Click on Producer No.0000000123Business...", "snapshot=Action_109.inf");
	truclient_step("110", "Click on Zip textbox", "snapshot=Action_110.inf");
	truclient_step("111", "Type '08201' in Zip textbox", "snapshot=Action_111.inf");
	lr_start_transaction("15_Locations_Next");
	truclient_step("113", "Click on Next button", "snapshot=Action_113.inf");
	lr_end_transaction("15_Locations_Next",0);
	truclient_step("114", "Wait 6 seconds", "snapshot=Action_114.inf");
	lr_start_transaction("16_Donw with Locations");
	truclient_step("115", "Click on DONE WITH Locations button", "snapshot=Action_115.inf");
	lr_end_transaction("16_Donw with Locations",0);
	truclient_step("117", "Wait 6 seconds", "snapshot=Action_117.inf");
	lr_start_transaction("17_Drivers_Add");
	truclient_step("118", "Click on Add button", "snapshot=Action_118.inf");
	lr_end_transaction("17_Drivers_Add",0);
	truclient_step("120", "Wait 6 seconds", "snapshot=Action_120.inf");
	truclient_step("121", "Wait 6 seconds", "snapshot=Action_121.inf");
	truclient_step("122", "Type 'MR.' in Title Prefix textbox", "snapshot=Action_122.inf");
	truclient_step("123", "Wait 6 seconds", "snapshot=Action_123.inf");
	truclient_step("124", "Type 'THOMAS' in First Name textbox", "snapshot=Action_124.inf");
	truclient_step("125", "Wait 6 seconds", "snapshot=Action_125.inf");
	truclient_step("126", "72: Type '' in Middle Name textbox", "snapshot=Action_126.inf");
	{
		truclient_step("126.1", "Type '' in Middle Name textbox", "snapshot=Action_126.1.inf");
		truclient_step("126.2", "Enter credentials in authentication dialog", "snapshot=Action_126.2.inf");
	}
	truclient_step("128", "Click on Last Name textbox", "snapshot=Action_128.inf");
	truclient_step("129", "Type 'LEE' in Last Name textbox", "snapshot=Action_129.inf");
	truclient_step("130", "Type '' in Name Suffix textbox", "snapshot=Action_130.inf");
	truclient_step("131", "Type '10/10/1982' in Date of Birth textbox", "snapshot=Action_131.inf");
	truclient_step("133", "Click on on", "snapshot=Action_133.inf");
	lr_start_transaction("18_Drivers_Next");
	truclient_step("135", "Click on Next button", "snapshot=Action_135.inf");
	lr_end_transaction("18_Drivers_Next",0);
	truclient_step("136", "Wait 6 seconds", "snapshot=Action_136.inf");
	lr_start_transaction("19_Done With Drivers");
	truclient_step("137", "Click on DONE WITH Drivers button", "snapshot=Action_137.inf");
	lr_end_transaction("19_Done With Drivers",0);
	truclient_step("139", "Wait 6 seconds", "snapshot=Action_139.inf");
	lr_start_transaction("20_Vehicles_Add");
	truclient_step("140", "Click on Add button", "snapshot=Action_140.inf");
	lr_end_transaction("20_Vehicles_Add",0);
	truclient_step("142", "Wait 6 seconds", "snapshot=Action_142.inf");
	truclient_step("143", "Click on Year textbox", "snapshot=Action_143.inf");
	truclient_step("144", "Type '2000' in Year textbox", "snapshot=Action_144.inf");
	truclient_step("146", "Click on Make textbox", "snapshot=Action_146.inf");
	truclient_step("147", "Type 'ACURA' in Make textbox", "snapshot=Action_147.inf");
	truclient_step("148", "Type 'MDX' in Model textbox", "snapshot=Action_148.inf");
	truclient_step("150", "Type 'Str3333' in Street textbox", "snapshot=Action_150.inf");
	truclient_step("152", "Click on Zip textbox", "snapshot=Action_152.inf");
	truclient_step("154", "Type '67510' in Zip textbox", "snapshot=Action_154.inf");
	truclient_step("156", "Click on Size textbox", "snapshot=Action_156.inf");
	truclient_step("157", "Type 'Extra-Heavy Truck-Tractors' in Size textbox", "snapshot=Action_157.inf");
	truclient_step("159", "Click on Radius textbox", "snapshot=Action_159.inf");
	truclient_step("160", "Type 'Intermediate(51 To 200 Miles)' in Radius textbox", "snapshot=Action_160.inf");
	truclient_step("161", "Click on Radius textbox", "snapshot=Action_161.inf");
	truclient_step("163", "Click on Special Industry Type textbox", "snapshot=Action_163.inf");
	truclient_step("164", "Type 'Contractors' in Special Industry Type textbox", "snapshot=Action_164.inf");
	truclient_step("166", "Click on Special Industry Class textbox", "snapshot=Action_166.inf");
	truclient_step("167", "Type 'All Other' in Special Industry Class textbox", "snapshot=Action_167.inf");
	lr_start_transaction("21_Done With Vehicles");
	truclient_step("169", "Click on DONE WITH Vehicles button", "snapshot=Action_169.inf");
	truclient_step("171", "Click on DONE WITH Vehicles button", "snapshot=Action_171.inf");
	lr_end_transaction("21_Done With Vehicles",0);
	truclient_step("173", "Wait 6 seconds", "snapshot=Action_173.inf");
	lr_start_transaction("22_Additional Coverages_Next");
	truclient_step("174", "Click on Next button", "snapshot=Action_174.inf");
	lr_end_transaction("22_Additional Coverages_Next",0);
	truclient_step("176", "Wait 6 seconds", "snapshot=Action_176.inf");
	lr_start_transaction("23_Additional Interest_Add");
	truclient_step("177", "Click on Add button", "snapshot=Action_177.inf");
	lr_end_transaction("23_Additional Interest_Add",0);
	truclient_step("179", "Wait 6 seconds", "snapshot=Action_179.inf");
	truclient_step("180", "Click on Name textbox", "snapshot=Action_180.inf");
	truclient_step("181", "Type 'Sample1' in Name textbox", "snapshot=Action_181.inf");
	truclient_step("183", "Click on on", "snapshot=Action_183.inf");
	truclient_step("185", "Click on Producer No.0000000123Business...", "snapshot=Action_185.inf");
	lr_start_transaction("24_Additional Interest_Next");
	truclient_step("186", "Click on Next button", "snapshot=Action_186.inf");
	lr_end_transaction("24_Additional Interest_Next",0);
	truclient_step("187", "Wait 6 seconds", "snapshot=Action_187.inf");
	lr_start_transaction("25_Done With_Additional Interest");
	truclient_step("188", "Click on DONE WITH Additional... button", "snapshot=Action_188.inf");
	lr_end_transaction("25_Done With_Additional Interest",0);
	truclient_step("190", "Wait 6 seconds", "snapshot=Action_190.inf");
	lr_start_transaction("26_Calculate Premium");
	truclient_step("191", "Click on Calculate Premium button", "snapshot=Action_191.inf");
	lr_end_transaction("26_Calculate Premium",0);
	truclient_step("193", "Wait 60 seconds", "snapshot=Action_193.inf");
	lr_start_transaction("27_Premium Summary_Next");
	truclient_step("194", "Click on Next button", "snapshot=Action_194.inf");
	lr_end_transaction("27_Premium Summary_Next",0);
	truclient_step("198", "Wait 60 seconds", "snapshot=Action_198.inf");
	lr_start_transaction("28_Complete");
	truclient_step("199", "Click on Complete button", "snapshot=Action_199.inf");
	lr_end_transaction("28_Complete",0);
	truclient_step("205", "Wait 100 seconds", "snapshot=Action_205.inf");
	truclient_step("206", "Wait for Login", "snapshot=Action_206.inf");
	truclient_step("207", "Wait for Book", "snapshot=Action_207.inf");
	lr_start_transaction("29_Book");
	truclient_step("208", "Click on Book", "snapshot=Action_208.inf");
	lr_end_transaction("29_Book",0);
	truclient_step("212", "Wait 40 seconds", "snapshot=Action_212.inf");
	truclient_step("213", "Click on button (3) button", "snapshot=Action_213.inf");
	lr_start_transaction("30_Sign Out");
	truclient_step("215", "Click on Sign Out button", "snapshot=Action_215.inf");
	lr_end_transaction("30_Sign Out",0);
}
