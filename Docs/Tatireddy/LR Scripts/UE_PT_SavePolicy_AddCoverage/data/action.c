Action()
{

	web_url("login.max", 
		"URL=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/images/menu-background.png", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/icon_user.gif", "Referer=http://ueatworkuat.maxprocessing.com/style/custom.css", ENDITEM, 
		"Url=/images/shaddow-x.gif", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/ajaxprogressbig.gif", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/h-bg_30x30.png", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/filter.png", "Referer=http://ueatworkuat.maxprocessing.com/style/tablewalker.css", ENDITEM, 
		"Url=/images/ui-icons_222222_256x240.png", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/DataTable/sort_asc.png", "Referer=http://ueatworkuat.maxprocessing.com/style/DataTable/DataTable.css", ENDITEM, 
		"Url=/images/DataTable/sort_both.png", "Referer=http://ueatworkuat.maxprocessing.com/style/DataTable/DataTable.css", ENDITEM, 
		"Url=/images/DataTable/back_disabled.png", "Referer=http://ueatworkuat.maxprocessing.com/style/DataTable/DataTable.css", ENDITEM, 
		"Url=/images/DataTable/sort_desc.png", "Referer=http://ueatworkuat.maxprocessing.com/style/DataTable/DataTable.css", ENDITEM, 
		"Url=/images/DataTable/forward_disabled.png", "Referer=http://ueatworkuat.maxprocessing.com/style/DataTable/DataTable.css", ENDITEM, 
		"Url=/images/ui-bg_glass_55_fbf9ee_1x400.png", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/ui-bg_glass_75_dadada_1x400.png", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/title.gif", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/info.gif", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/menu-backgroundalt.png", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=http://ueatworkuat.maxprocessing.com/script/main.js", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		"Url=http://ueatworkuat.maxprocessing.com/JavaScriptSpellCheck/translations/en.js", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		"Url=http://ueatworkuat.maxprocessing.com/ckeditor/ckeditor.js", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		"Url=http://ueatworkuat.maxprocessing.com/JavaScriptSpellCheck/themes/modern/context-menu.css", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		LAST);

	lr_start_transaction("Login");

	web_submit_data("login.max_2", 
		"Action=http://ueatworkuat.maxprocessing.com/login.max?t=1466686616251", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		"Name=SubmitAct", "Value=submit", ENDITEM, 
		"Name=UserName", "Value=sdash", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=redirect", "Value=", ENDITEM, 
		"Name=SubmissionID", "Value=", ENDITEM, 
		"Name=PolicyNumber", "Value=", ENDITEM, 
		"Name=EntryMode", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=/images/loadinganimation.gif", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		LAST);

	web_submit_data("callback.max", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686619846", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("IconTray.max", 
		"Action=http://ueatworkuat.maxprocessing.com/IconTray.max?action=gettooltip&t=1466686619837", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("applist.max", 
		"Action=http://ueatworkuat.maxprocessing.com/applist.max?preprocess=true&AJAX_ACTION=tbw&TBW_TBLID=resulttable&RULE=applist&CURRENT=1&NEXT=11&CURRENT=1&NEXT=11&t=1466686619827", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		EXTRARES, 
		"Url=/images/32px-Crystal_Clear_action_info.png", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		LAST);

	web_submit_data("IconTray.max_2", 
		"Action=http://ueatworkuat.maxprocessing.com/IconTray.max?action=workflow&t=1466686619838", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		EXTRARES, 
		"Url=/images/32px-Crystal_Clear_app_access_red.png", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		LAST);

	web_submit_data("callback.max_2", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686620673", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("Search Claim");

	web_submit_data("APPLIST.max", 
		"Action=http://ueatworkuat.maxprocessing.com/APPLIST.max?t=1466686636769", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		"Name=SubmitAct", "Value=ClaimsSearch", ENDITEM, 
		"Name=ClaimsProducts", "Value=-1", ENDITEM, 
		"Name=LossDate", "Value=", ENDITEM, 
		"Name=ClaimsStartDate", "Value=", ENDITEM, 
		"Name=ClaimsEndDate", "Value=", ENDITEM, 
		"Name=ClaimsClaimantName", "Value=", ENDITEM, 
		"Name=ClaimsClaimStatus", "Value=1", ENDITEM, 
		"Name=ClaimsMemberName", "Value=", ENDITEM, 
		"Name=ClaimsAnalyst", "Value=-1", ENDITEM, 
		"Name=ClaimsMemberNum", "Value=", ENDITEM, 
		"Name=ClaimsLoss", "Value=-1", ENDITEM, 
		"Name=ClaimsStateMemberInstitution", "Value=-1", ENDITEM, 
		"Name=ClaimsWrong", "Value=-1", ENDITEM, 
		"Name=ClaimsPolicyCode", "Value=", ENDITEM, 
		"Name=ClaimsClaimNum", "Value=", ENDITEM, 
		"Name=ClaimsAddFactors", "Value=-1", ENDITEM, 
		LAST);

	web_submit_data("callback.max_3", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686639054", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_search_result.max", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_search_result.max?preprocess=true&AJAX_ACTION=tbw&TBW_TBLID=SearchResults&RULE=claims_search_result&CURRENT=1&NEXT=11&CURRENT=1&NEXT=11&t=1466686639053", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("Search Claim",LR_AUTO);

	lr_think_time(22);

	lr_start_transaction("Select Claim No");

	web_submit_data("claims_egl_page1.max", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_egl_page1.max?CLMID=70433&t=1466686669125", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		"Name=preprocess", "Value=true", ENDITEM, 
		LAST);

	web_submit_data("callback.max_4", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686673124", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("CLAIMS_EGL_PAGE1.max", 
		"Action=http://ueatworkuat.maxprocessing.com/CLAIMS_EGL_PAGE1.max?preprocess=true&AJAX_ACTION=tbw&TBW_TBLID=tbw_CSpolInfo&RULE=CLAIMS_EGL_PAGE1&CURRENT=1&NEXT=6&CURRENT=1&NEXT=6&t=1466686673113", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("CLAIMS_EGL_PAGE1.max_2", 
		"Action=http://ueatworkuat.maxprocessing.com/CLAIMS_EGL_PAGE1.max?preprocess=true&AJAX_ACTION=tbw&TBW_TBLID=tbw_RelClaims&RULE=CLAIMS_EGL_PAGE1&CURRENT=1&NEXT=11&CURRENT=1&NEXT=11&t=1466686673099", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("CLAIMS_EGL_PAGE1.max_3", 
		"Action=http://ueatworkuat.maxprocessing.com/CLAIMS_EGL_PAGE1.max?preprocess=true&AJAX_ACTION=tbw&TBW_TBLID=Lawsuit_Table&RULE=CLAIMS_EGL_PAGE1&CURRENT=1&NEXT=11&CURRENT=1&NEXT=11&t=1466686673121", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("callback.max_5", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686674620", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("callback.max_6", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686674955", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("callback.max_7", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686674512", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("Select Claim No",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("Click On Claim Details");

	web_submit_data("CLAIMS_EGL_PAGE1.max_4", 
		"Action=http://ueatworkuat.maxprocessing.com/CLAIMS_EGL_PAGE1.max?t=1466686690972", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		"Name=SubmitAct", "Value=CLAIMS_MODIFY2", ENDITEM, 
		"Name=SupervisorID", "Value=", ENDITEM, 
		"Name=supervisor_name1", "Value=Vicki Higman", ENDITEM, 
		"Name=PlanOfAction", "Value=", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=watchlistitem&t=1466686700479", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_2", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?Action=BUILDPOLDATATABLE&NewclaimMadeDate=&cmd_change=1&NewdateOfLoss=04/04/2016&IsShowAllPolicy=0&t=1466686700498", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("callback.max_8", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686700534", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_3", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?preprocess=true&AJAX_ACTION=tbw&TBW_TBLID=resulttable&RULE=claims_modify2&CURRENT=1&NEXT=11&CURRENT=1&NEXT=11&t=1466686700494", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("callback.max_9", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686703440", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("Click On Claim Details",LR_AUTO);

	lr_think_time(22);

	lr_start_transaction("Select Show All Policies");

	web_submit_data("claims_modify2.max_4", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?Action=BUILDPOLDATATABLE&NewclaimMadeDate=&cmd_change=1&NewdateOfLoss=04/04/2016&IsShowAllPolicy=1&t=1466686725545", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("Select Show All Policies",LR_AUTO);

	lr_think_time(27);

	lr_start_transaction("FillData");

	web_submit_data("claims_modify2.max_5", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=CauseOfLoss&LineOfBusiness=PL&t=1466686754715", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("FillData",LR_AUTO);

	lr_think_time(28);

	lr_start_transaction("Click On Save");

	web_submit_data("claims_modify2.max_6", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=SavePolicyIds&POLICYIDS=139431&egPDCIds=210838&closereason=-1&t=1466686785201", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_7", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=SaveSelectedRTR&SelectedRTR=0&t=1466686785199", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_8", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?Action=BUILDPOLDATATABLE&NewclaimMadeDate=06/01/2016&cmd_change=1&NewdateOfLoss=04/04/2016&IsShowAllPolicy=1&t=1466686797860", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_9", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=SaveSelectedRTR&SelectedRTR=0&t=1466686806222", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("Click On Save",LR_AUTO);

	web_add_cookie("NID=79=WSeyG_rz3Rch6puJBVqT7Pqrt4Ir4vVfclTmqYO5G7XghNG-BfgdDWxGr_m4WFDiQsYWNhe-SCm-TDmX9YMTCNDdYswKef0ouSS1NrOPtvHg2NaJkKBf5ln_N1uztyIC; DOMAIN=safebrowsing.google.com");

	web_add_cookie("NID=79=WSeyG_rz3Rch6puJBVqT7Pqrt4Ir4vVfclTmqYO5G7XghNG-BfgdDWxGr_m4WFDiQsYWNhe-SCm-TDmX9YMTCNDdYswKef0ouSS1NrOPtvHg2NaJkKBf5ln_N1uztyIC; DOMAIN=safebrowsing-cache.google.com");

	web_custom_request("downloads", 
		"URL=https://safebrowsing.google.com/safebrowsing/downloads?client=googlechrome&appver=51.0.2704.103&pver=3.0&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&ext=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.safebrowsing-update", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=goog-malware-shavar;a:231885-244525:s:226966-227452,227454-227631,227633-227656,227658-227812,227814-227922,227924-227932,227934-228020,228022-228210,228212-228235,228237-228262,228264-228487,228489-228490,228492-228512,228514-229075,229077-229211,229213-229393,229395-230069,230071-230357,230359-230614,230616-231001,231003-231103,231105-232022,232024-232878,232880-239994\ngoog-phish-shavar;a:442630-450986:s:263113-264408,264410-264444,264446-265038,265040-265333,265335-265394,265396-265466,"
		"265469,265471,265473-265595,265597-271593\ngoog-badbinurl-shavar;a:103916-107354:s:105279-105289,105291-105300,105302-105308,105310-105339,105341-105423,105425-105660,105662-105691,105693-109989\ngoog-csdwhite-sha256;a:3-84:s:1-5\ngoog-downloadwhite-digest256;a:5-82:s:2-7,10-56\ngoog-csdinclusionwhite-sha256;\ngoog-badcrxids-digestvar;a:2-1043:s:1,3-113\ngoog-badip-digest256;a:2774\ngoog-unwanted-shavar;a:58345-73385:s:50997-50998,51000-51001,51003-51004,51006-51010,51012-51013,51015-51026,"
		"51030-51055,51057-51069,51071,51073-51077,51080-51089,51091-51094,51096-51117,51119,51121-51129,51131-51152,51154-51156,51158-51159,51161-51167,51169-51174,51176,51178,51180-51183,51185-51186,51188-51196,51199-51208,51213,51215-51229,51231-51234,51237,51239-51241,51244-51246,51248,51250-51254,51256-51260,51262-51264,51266-51267,51269,51272-51274,51277-51279,51281-51283,51285-51293,51295,51297,51299-51301,51303-51321,51324-51347,51349-51367,51369-51394,51396-51399,51403-51434,51436-51444,"
		"51446-51479,51481-51482,51484-51485,51487-51508,51510-51511,51513,51515-51525,51527-51539,51541-51551,51553-51562,51564-51568,51570-51575,51577-51579,51581,51584-51586,51588-51594,51596,51598-51605,51607-51611,51613-51616,51619,51621-51624,51626-51627,51630-51643,51645-51657,51659,51661-51670,51672-51684,51686-51687,51691,51694-51695,51698,51701-51706,51708,51710,51712,51714,51717-51736,51738-51747,51749-51781,51783,51785-51792,51794-51807,51810-51812,51814-51815,51817-51821,51824-51830,"
		"51832-51834,51837-51844,51846-51888,51890-51903,51905-51914,51916-51924,51926-51928,51930-51943,51945-51948,51950-51961,51963-51969,51971-51981,51983-52007,52009-52013,52015-52028,52030-52031,52033-52034,52036-52052,52054-52064,52067-52081,52083-52091,52093-52094,52096-52100,52102-52104,52106-52127,52129-52137,52139-52140,52143-52149,52152-52170,52172-52176,52178-52179,52181,52183-52187,52190-52195,52198-52205,52207-52220,52222-52224,52226,52228-52234,52236-52238,52240-52265,52267-52272,"
		"52275-52277,52279-52306,52309-52313,52315-52319,52321-52360,52362-52401,52403,52405-52407,52409-52416,52418-52422,52424-52459,52461-52465,52467-52489,52491-52495,52497-52500,52502-52518,52520-52522,52524-52526,52528-52540,52542-52555,52557,52560,52563,52565,52567-52576,52578-52595,52597-52599,52601-52604,52606-52613,52615-52665,52667-52669,52671-52678,52680-52740,52742-52792,52795-52826,52828-52844,52846-52860,52862-52863,52865-52874,52876-52888,52890-52902,52904-52911,52913-52918,52920-52930,"
		"52932-52937,52939-52941,52943-52945,52947-52953,52955-52962,52965,52967,52970-52973,52976-52983,52985-53016,53018-53026,53028-53047,53049-53053,53055-53058,53060-53062,53064,53066,53069-53085,53087-53095,53097-53148,53150-53172,53174-53186,53188-53193,53195-53200,53202-53212,53214-53216,53218,53220,53222-53245,53247-53273,53276-53285,53287-53290,53292,53294-53300,53302-53303,53305-53314,53316-53319,53321,53323-53324,53326-53339,53341-53344,53346,53348-53362,53364-53373,53375-53382,53384-53394,"
		"53396-53409,53411-53412,53414-53422,53424-53425,53428-53430,53432-53433,53435-53443,53446-53451,53455-53457,53460,53462-53468,53471,53473-53474,53476-53477,53479,53481-53485,53487-53506,53509-53511,53513-53525,53527-53532,53534-53540,53542,53544,53546-53549,53551-53558,53560-53565,53567-53584,53586-53644,53646-53688,53690-53702,53704-53724,53726-53740,53742-53751,53753-53776,53778-53791,53793-53800,53802-53808,53810-53816,53819-53829,53831-53832,53834-53837,53839-53841,53843-53849,53851-53888,"
		"53890-53895,53897-53913,53915-53926,53929-53933,53935-53954,53956-53958,53960-53964,53966-53983,53985-53989,53992-54002,54005-54006,54015-54019,54021-54022,54024-54046,54048,54050-54055,54058-54060,54062-54065,54067-54073,54075-54124,54126-54137,54139-54144,54146-54157,54159-54160,54162-54163,54165-54168,54170-54195,54197-54208,54210-54303,54305-54351,54353-54388,54390-54394,54396-54406,54408-54413,54415-54449,54451-54464,54466-54483,54485,54487-54492,54494-54497,54499-54528,54530-54533,"
		"54535-54536,54538,54540-54559,54561-54649,54651-54664,54666-54673,54675-54682,54684-54704,54706-54727,54729-54738,54740-54745,54747-54749,54751-54754,54756-54774,54776-54782,54786-54787,54789-54792,54795-54818,54820-54831,54833-54840,54842-54860,54862-54865,54867,54869-54887,54889,54891-54898,54900,54903,54905-54914,54916-54925,54927-54928,54930-54936,54938-54945,54947,54949,54951-54986,54988-55035,55037-55048,55052-55055,55057-55066,55068-55076,55078-55081,55084-55110,55112-55163,55165-55192,"
		"55194-55231,55233-55237,55239-55259,55261-55270,55273-55275,55277-55278,55280,55282-55285,55287-55290,55292-55296,55299-55308,55310-55322,55324-55367,55369-55374,55377-55378,55380-55383,55385-55389,55391-55401,55404-55421,55423-55443,55445-55473,55475-55478,55480-55482,55484-55493,55495-55496,55498-55499,55501-55505,55508-55511,55513-55518,55520-55548,55550-55563,55565-55572,55574,55576,55578-55607,55609-55621,55623-55637,55639-55640,55642-55707,55709,55711-55713,55715-55732,55734-55744,55746,"
		"55748-55760,55762-55775,55777-55796,55799-55837,55839-55842,55844-55850,55852-55853,55855-55860,55862-55863,55865-55872,55874,55876-55877,55879-55907,55909-55913,55915-55931,55933-55941,55943-55963,55965-55968,55978,55981-55982,55984-55989,55992-55996,55999-56004,56006,56009-56013,56015-56020,56022,56024-56030,56032-56033,56035-56058,56060-56082,56084-56086,56089,56091,56093-56100,56102-56105,56107-56113,56115-56117,56119-56225,56227-56275,56277-56308,56310-56323,56325-56373,56375-56406,"
		"56408-56422,56424-56436,56438-56445,56447-56449,56451-56695,56697-56925,56927-57069,57071-57158,57160-57168,57170-57200,57202-57203,57205-57322,57324-57327,57329-57502,57504-57526,57528-57686,57688-57710,57712-57960,57962-58038,58040-58727,58729-58812,58814-59062,59064-59073,59075-59165,59167-59171,59173-59286,59288-59378,59380-59396,59398-59449,59451-59598,59600-59848,59850-59925,59927-59929,59931-60222,60224-60244,60246-60324,60326-60413,60415-60437,60439-60492,60494-60594,60596-60630,"
		"60632-60800,60802-60982,60984-60998,61000-61001,61003-61050,61052-61066,61068-61111,61113-61156,61158-61223,61225-61359,61361-61677,61679-61817,61819-61861,61863-62179,62181-62478,62480-62507,62509-62689,62691-62755,62757-63233,63235-63252,63254-67769\ngoog-whitemodule-digest256;a:1-23\ngoog-badresource-shavar;a:1-6\n", 
		EXTRARES, 
		"Url=https://safebrowsing-cache.google.com/safebrowsing/rd/ChVnb29nLWJhZGJpbnVybC1zaGF2YXI4AUACSgwIABDbxgYY28YGIAE", "Referer=", ENDITEM, 
		"Url=https://safebrowsing-cache.google.com/safebrowsing/rd/ChNnb29nLW1hbHdhcmUtc2hhdmFyOAFAAkoMCAEQ-9IOGPvSDiABSgwIABCu9g4YsPYOIAE", "Referer=", ENDITEM, 
		"Url=https://safebrowsing-cache.google.com/safebrowsing/rd/ChFnb29nLXBoaXNoLXNoYXZhcjgBQAJKDAgBEOrJEBjqyRAgAUoMCAAQq8MbGK3DGyAB", "Referer=", ENDITEM, 
		"Url=https://safebrowsing-cache.google.com/safebrowsing/rd/ChRnb29nLXVud2FudGVkLXNoYXZhcjgBQAJKDAgAEKq9BBiqvQQgAQ", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(7);

	lr_start_transaction("Save");

	web_submit_data("claims_modify2.max_10", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=CauseOfLoss&LineOfBusiness=PL&t=1466686829644", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_submit_data("claims_modify2.max_11", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=SavePolicyIds&POLICYIDS=139431&egPDCIds=210838&closereason=-1&t=1466686838944", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_12", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=SaveSelectedRTR&SelectedRTR=0&t=1466686838943", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("CLAIMS_MODIFY2.max", 
		"Action=http://ueatworkuat.maxprocessing.com/CLAIMS_MODIFY2.max?t=1466686838995", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		"Name=SubmitAct", "Value=save", ENDITEM, 
		"Name=PDC_IDList", "Value=210838", ENDITEM, 
		"Name=PolicyIDList", "Value=139431", ENDITEM, 
		"Name=ProductList", "Value=LPL", ENDITEM, 
		"Name=LOB_IDList", "Value=PL", ENDITEM, 
		"Name=EndorsementsList", "Value=LPL,", ENDITEM, 
		"Name=CovTriggerList", "Value=CM", ENDITEM, 
		"Name=Email", "Value=", ENDITEM, 
		"Name=AttachEmailAddress", "Value=", ENDITEM, 
		"Name=cCD_FileType", "Value=CLAIM", ENDITEM, 
		"Name=claimStatus", "Value=Open", ENDITEM, 
		"Name=hSelectedReinsuer", "Value=0", ENDITEM, 
		"Name=closeReason", "Value=-1", ENDITEM, 
		"Name=clReportedBy", "Value=MEM", ENDITEM, 
		"Name=PerOccDate", "Value=06/01/2016", ENDITEM, 
		"Name=cCD_DateOfLoss", "Value=04/04/2016", ENDITEM, 
		"Name=cCD_LossReportDate", "Value=03/24/2016", ENDITEM, 
		"Name=ShowAllPolicy", "Value=1", ENDITEM, 
		"Name=hybrid", "Value=No", ENDITEM, 
		"Name=PolList_length", "Value=10", ENDITEM, 
		"Name=LPD201500068800", "Value=PL", ENDITEM, 
		"Name=PolSelNote", "Value=", ENDITEM, 
		"Name=firstCause", "Value=AIRCRAFT", ENDITEM, 
		"Name=ReserveStatus1", "Value=5", ENDITEM, 
		"Name=litStatus1", "Value=324", ENDITEM, 
		"Name=reportedToReinsurer", "Value=0", ENDITEM, 
		"Name=WatchListItem", "Value=0", ENDITEM, 
		"Name=cCD_LossDesc1", "Value=PT LoSS Description", ENDITEM, 
		"Name=LossState", "Value=GA", ENDITEM, 
		"Name=claimGroup", "Value=CCG_CA", ENDITEM, 
		"Name=cCD_ClaimAdjuster", "Value=881", ENDITEM, 
		"Name=NoteType", "Value=-1", ENDITEM, 
		"Name=userName", "Value=Subrat Dash", ENDITEM, 
		"Name=notesSubject", "Value=", ENDITEM, 
		"Name=notesCategory", "Value=Claim/FNOL", ENDITEM, 
		"Name=notesDescription", "Value=", ENDITEM, 
		"Name=noteID", "Value=", ENDITEM, 
		"Name=al_EditFlag", "Value=", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_13", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?Action=BUILDPOLDATATABLE&NewclaimMadeDate=06/01/2016&cmd_change=1&NewdateOfLoss=04/04/2016&IsShowAllPolicy=0&t=1466686848553", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_14", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=watchlistitem&t=1466686848536", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_15", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?AJAX_ACTION=CauseOfLoss&LineOfBusiness=PL&t=1466686849518", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("callback.max_10", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686848567", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claims_modify2.max_16", 
		"Action=http://ueatworkuat.maxprocessing.com/claims_modify2.max?preprocess=true&AJAX_ACTION=tbw&TBW_TBLID=resulttable&RULE=claims_modify2&CURRENT=1&NEXT=11&CURRENT=1&NEXT=11&t=1466686848549", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("callback.max_11", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686851282", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("Save",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("Click On Coverage");

	web_submit_data("CLAIMS_MODIFY2.max_2", 
		"Action=http://ueatworkuat.maxprocessing.com/CLAIMS_MODIFY2.max?t=1466686868566", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		"Name=SubmitAct", "Value=CLAIMINFO_COVERAGES", ENDITEM, 
		"Name=PDC_IDList", "Value=210838", ENDITEM, 
		"Name=PolicyIDList", "Value=139431", ENDITEM, 
		"Name=ProductList", "Value=LPL", ENDITEM, 
		"Name=LOB_IDList", "Value=PL", ENDITEM, 
		"Name=EndorsementsList", "Value=LPL,", ENDITEM, 
		"Name=CovTriggerList", "Value=CM", ENDITEM, 
		"Name=Email", "Value=", ENDITEM, 
		"Name=AttachEmailAddress", "Value=", ENDITEM, 
		"Name=cCD_FileType", "Value=CLAIM", ENDITEM, 
		"Name=claimStatus", "Value=Open", ENDITEM, 
		"Name=hSelectedReinsuer", "Value=0", ENDITEM, 
		"Name=closeReason", "Value=-1", ENDITEM, 
		"Name=clReportedBy", "Value=MEM", ENDITEM, 
		"Name=PerOccDate", "Value=06/01/2016", ENDITEM, 
		"Name=cCD_DateOfLoss", "Value=04/04/2016", ENDITEM, 
		"Name=cCD_LossReportDate", "Value=03/24/2016", ENDITEM, 
		"Name=hybrid", "Value=No", ENDITEM, 
		"Name=PolList_length", "Value=10", ENDITEM, 
		"Name=LPD201500068800", "Value=PL", ENDITEM, 
		"Name=PolSelNote", "Value=", ENDITEM, 
		"Name=firstCause", "Value=AIRCRAFT", ENDITEM, 
		"Name=ReserveStatus1", "Value=5", ENDITEM, 
		"Name=litStatus1", "Value=324", ENDITEM, 
		"Name=reportedToReinsurer", "Value=0", ENDITEM, 
		"Name=WatchListItem", "Value=0", ENDITEM, 
		"Name=cCD_LossDesc1", "Value=PT LoSS Description", ENDITEM, 
		"Name=LossState", "Value=GA", ENDITEM, 
		"Name=claimGroup", "Value=CCG_CA", ENDITEM, 
		"Name=cCD_ClaimAdjuster", "Value=881", ENDITEM, 
		"Name=NoteType", "Value=-1", ENDITEM, 
		"Name=userName", "Value=Subrat Dash", ENDITEM, 
		"Name=notesSubject", "Value=", ENDITEM, 
		"Name=notesCategory", "Value=Claim/FNOL", ENDITEM, 
		"Name=notesDescription", "Value=", ENDITEM, 
		"Name=noteID", "Value=", ENDITEM, 
		"Name=al_EditFlag", "Value=", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetCovTable&CLID=-1&t=1466686873491", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_2", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetFNETable&CLID=-1&t=1466686873492", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_3", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetScheduleTable&CLID=-1&t=1466686873492", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("callback.max_12", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686873501", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_custom_request("Logging.max", 
		"URL=http://ueatworkuat.maxprocessing.com/Logging.max?action=log&Source=Comm.Client%20Condition%20(2.7.1.0)&VRMName=CLAIMINFO_COVERAGES&Message=Invalid%20left-hand%20side%20in%20assignment%20[0]&t=1466686873480", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"Body=id=AD09471A1B1F4A118D56834EED7E7D8950B3CF&sccstmp=0&ReqList=No ReqList", 
		LAST);

	lr_end_transaction("Click On Coverage",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("Select Claimant");

	web_submit_data("claiminfo_coverages.max_4", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetCovTable&CLID=120715&t=1466686889384", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_5", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetFNETable&CLID=120715&t=1466686889386", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		EXTRARES, 
		"Url=/images/button_uncheck.png", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_6", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetScheduleTable&CLID=120715&t=1466686889385", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_think_time(10);

	web_submit_data("claiminfo_coverages.max_7", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=checkWFcondition&CovID=95547&ischecked=1&t=1466686901509", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_8", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=UpdateCoverage&CovID=95547&ischecked=1&t=1466686902418", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_9", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetScheduleTable&CLID=120715&t=1466686903163", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_10", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetFNETable&CLID=120715&t=1466686903164", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_11", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetCovTable&CLID=120715&t=1466686903162", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		EXTRARES, 
		"Url=/images/button_check.png", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		LAST);

	lr_end_transaction("Select Claimant",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("Click On Coverage For Save");

	web_submit_data("IconTray.max_3", 
		"Action=http://ueatworkuat.maxprocessing.com/IconTray.max?action=workflow&t=1466686924058", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("CLAIMINFO_COVERAGES.max", 
		"Action=http://ueatworkuat.maxprocessing.com/CLAIMINFO_COVERAGES.max?t=1466686925905", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		"Name=SubmitAct", "Value=CLAIMINFO_COVERAGES", ENDITEM, 
		"Name=ClmntDD", "Value=120715", ENDITEM, 
		"Name=MemberBenefitresults_length", "Value=10", ENDITEM, 
		LAST);

	web_submit_data("callback.max_13", 
		"Action=http://ueatworkuat.maxprocessing.com/callback.max?t=1466686930055", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_12", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetScheduleTable&CLID=-1&t=1466686930044", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_13", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetCovTable&CLID=-1&t=1466686930044", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("claiminfo_coverages.max_14", 
		"Action=http://ueatworkuat.maxprocessing.com/claiminfo_coverages.max?AJAX_ACTION=GetFNETable&CLID=-1&t=1466686930044", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_custom_request("Logging.max_2", 
		"URL=http://ueatworkuat.maxprocessing.com/Logging.max?action=log&Source=Comm.Client%20Condition%20(2.7.1.0)&VRMName=CLAIMINFO_COVERAGES&Message=Invalid%20left-hand%20side%20in%20assignment%20[0]&t=1466686930039", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"Body=id=AD09471A1B1F4A118D56834EED7E7D8950B3CF&sccstmp=0&ReqList=No ReqList", 
		LAST);

	lr_end_transaction("Click On Coverage For Save",LR_AUTO);

	web_custom_request("update2", 
		"URL=https://clients2.google.com/service/update2?cup2key=6:4216953270&cup2hreq=ce2dcf56f178cd5541242603e15e5cf1e4503451ba1e3c3401050d78e585e20e", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.0\" version=\"chrome-51.0.2704.103\" prodversion=\"51.0.2704.103\" requestid=\"{DBC74668-BCA9-4F66-8756-35134B9B5051}\" lang=\"en-US\" updaterchannel=\"m\" prodchannel=\"m\" os=\"win\" arch=\"x86\" nacl_arch=\"x86-64\" wow64=\"1\"><hw physmemory=\"8\"/><os platform=\"Windows\" version=\"6.1 SP1\" arch=\"x86_64\"/><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"1.4.8.885\" brand=\"GGLS\"><updatecheck /><ping rd=\"3461\" "
		"ping_freshness=\"{C896F1F0-723B-4643-918D-252BF314DC49}\" /></app><app appid=\"oafdbfcohdcjandcenmccfopbeklnicp\" version=\"7\" brand=\"GGLS\"><updatecheck /><ping rd=\"3461\" ping_freshness=\"{F44B30B5-2A14-4484-882D-6741E0624298}\" /></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"67\" brand=\"GGLS\"><updatecheck /><ping rd=\"3461\" ping_freshness=\"{2BD8EC43-1CBD-4566-90EE-E2271D48A9DB}\" /></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"7.58.0\" brand=\"GGLS\">"
		"<updatecheck /><ping rd=\"3461\" ping_freshness=\"{A854CDC9-EB76-426E-8BE1-4C61E9D48330}\" /></app><app appid=\"bcpgokokgekmnfkohklccmonnakdimfh\" version=\"0.0.0.0\" brand=\"GGLS\"><updatecheck /><ping rd=\"3461\" ping_freshness=\"{F04A7024-045E-4F86-B20E-BA9916C1DEE1}\" /></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"3081\" brand=\"GGLS\"><updatecheck /><ping rd=\"3461\" ping_freshness=\"{A3978E5C-4480-48E7-990E-5A64188956C3}\" /></app></request>", 
		LAST);

	web_custom_request("update2_2", 
		"URL=https://clients2.google.com/service/update2?cup2key=6:319805849&cup2hreq=8e0edbf82ae45be0771e93557d1f605b87a30862f947be9ad0922cec2e66b100", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.0\" version=\"chrome-51.0.2704.103\" prodversion=\"51.0.2704.103\" requestid=\"{11179245-E917-4242-91CB-ED5B52F24C87}\" lang=\"en-US\" updaterchannel=\"m\" prodchannel=\"m\" os=\"win\" arch=\"x86\" nacl_arch=\"x86-64\" wow64=\"1\"><hw physmemory=\"8\"/><os platform=\"Windows\" version=\"6.1 SP1\" arch=\"x86_64\"/><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" version=\"0.0.0.0\" brand=\"GGLS\"><updatecheck /><ping rd=\"3461\" "
		"ping_freshness=\"{2253E1CE-65B7-41E0-AE40-2A5A34B5DA4E}\" /></app><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"22.0.0.192\" brand=\"GGLS\"><updatecheck /><ping rd=\"3461\" ping_freshness=\"{A5268A5F-4435-445C-926B-8A45B5EA4735}\" /></app><app appid=\"nhfgdggnnopgbfdlpeoalgcjdgfafocg\" version=\"3.2.6.45159\" brand=\"GGLS\"><updatecheck /><ping rd=\"3461\" ping_freshness=\"{76C44FD8-56A6-4710-87F3-40D85C952F18}\" /></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\""
		"0.52.38.9180\" brand=\"GGLS\"><updatecheck /><ping rd=\"3461\" ping_freshness=\"{4F64C08A-A7E1-4B0D-B38F-6676DC88C441}\" /><packages><package fp=\"1.fa8ef1c56cd340ade8544231d4f6c0f0e58ed32b0eb51b06b096fbaf1bbb2343\"/></packages></app></request>", 
		LAST);

	lr_think_time(16);

	lr_start_transaction("Click+Claim Financial Summary");

	web_submit_data("nb_claimtitle.max", 
		"Action=http://ueatworkuat.maxprocessing.com/nb_claimtitle.max?AJAX_Action=LoadFinancial&CLMID=70433&t=1466686953996", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("Click+Claim Financial Summary",LR_AUTO);

	lr_start_transaction("Logout");

	web_submit_data("doc_lock_status.max", 
		"Action=http://ueatworkuat.maxprocessing.com/doc_lock_status.max?AJAX_ACTION=UnLockALLatLogOut&USR_ID=16769&t=1466686992072", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=AD09471A1B1F4A118D56834EED7E7D8950B3CF", ENDITEM, 
		"Name=sccstmp", "Value=0", ENDITEM, 
		LAST);

	web_url("login.max_3", 
		"URL=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/JavaScriptSpellCheck/translations/en.js", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		"Url=/style/global.css", "Referer=http://ueatworkuat.maxprocessing.com/style/global.css", ENDITEM, 
		"Url=/images/menu-background.png", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		"Url=/images/shaddow-x.gif", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		"Url=/images/icon_user.gif", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		"Url=/script/main.js", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		"Url=/ckeditor/ckeditor.js", "Referer=http://ueatworkuat.maxprocessing.com/login.max?preprocess=true", ENDITEM, 
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	return 0;
}