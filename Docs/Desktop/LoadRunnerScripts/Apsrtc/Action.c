Action()
{

parameter1=1510893087563&parameter2	
	web_reg_save_param("ParamNum1","LB=parameter1=","RB=&parameter")
	web_url("oprs-web", 
		"URL=http://www.apsrtconline.in/oprs-web/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=_assets/images/new/map-icon.png", ENDITEM, 
		"Url=_assets/images/new/bg-home.jpg", ENDITEM, 
		"Url=_assets/images/new/logo.png", ENDITEM, 
		"Url=_assets/images/new/phoneicon.png", ENDITEM, 
		"Url=_assets/images/new/arrow-down-yellow.png", ENDITEM, 
		"Url=_assets/images/new/twoway.png", ENDITEM, 
		"Url=_assets/images/new/cal-icon.png", ENDITEM, 
		"Url=_assets/images/home/others/facebook.png", ENDITEM, 
		"Url=_assets/images/home/others/poweredby.png", ENDITEM, 
		"Url=_assets/images/new/icon-bus.png", ENDITEM, 
		"Url=_assets/images/home/others/twitter.png", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j66&a=247365465&t=pageview&_s=1&dl=http%3A%2F%2Fwww.apsrtconline.in%2Foprs-web%2F&ul=en-in&de=utf-8&dt=APSRTC%20Official%20Website%20for%20Online%20Bus%20Ticket%20Booking%20-%20APSRTConline.in&sd=24-bit&sr=1366x768&vp=1349x674&je=1&fl=14.0%20r0&_u=IEBAAEQ~&jid=1548000669&gjid=985706986&cid=712127139.1510893013&tid=UA-21115933-10&_gid=1356801977.1510893013&_r=1&z=1487475116", ENDITEM, 
		"Url=https://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		"Url=_assets/images/home/LArrow.png", ENDITEM, 
		"Url=_assets/images/home/arrow.png", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	lr_think_time(7);

	lr_start_transaction("Search");

	web_submit_data("services.do", 
		"Action=http://www.apsrtconline.in/oprs-web/avail/services.do", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://www.apsrtconline.in/oprs-web/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ajaxAction", "Value=search", ENDITEM, 
		"Name=contextPath", "Value=/oprs-web", ENDITEM, 
		"Name=currentIndex", "Value=", ENDITEM, 
		"Name=maxPassengerAllowed", "Value=0", ENDITEM, 
		"Name=txtLinkJourneyDate", "Value=", ENDITEM, 
		"Name=startPlaceId", "Value=1386430615487", ENDITEM, 
		"Name=fromPlaceCode", "Value=", ENDITEM, 
		"Name=fromPlaceName", "Value=BENGALURU", ENDITEM, 
		"Name=endPlaceId", "Value=14911", ENDITEM, 
		"Name=toPlaceCode", "Value=", ENDITEM, 
		"Name=toPlaceName", "Value=TIRUPATHI", ENDITEM, 
		"Name=txtJourneyDate", "Value=18/11/2017", ENDITEM, 
		"Name=txtReturnJourneyDate", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j66&a=761204075&t=pageview&_s=1&dl=http%3A%2F%2Fwww.apsrtconline.in%2Foprs-web%2Favail%2Fservices.do&ul=en-in&de=utf-8&dt=APSRTC%20Official%20Website%20for%20Online%20Bus%20Ticket%20Booking%20-%20APSRTConline.in&sd=24-bit&sr=1366x768&vp=1349x674&je=1&fl=14.0%20r0&_u=AACAAEQ~&jid=&gjid=&cid=712127139.1510893013&tid=UA-21115933-10&_gid=1356801977.1510893013&z=1959183136", ENDITEM, 
		"Url=../_assets/images/new/arrow-right-n.png", ENDITEM, 
		"Url=../_assets/images/new/arrow-left-n.png", ENDITEM, 
		"Url=../_assets/images/progressbar/Loader.gif", ENDITEM, 
		"Url=../_assets/images/new/amenities-icons.png", ENDITEM, 
		"Url=../_assets/images/new/icon-rupee.png", ENDITEM, 
		"Url=../_assets/images/new/arrow-down.png", ENDITEM, 
		"Url=../_assets/images/new/items-icon.png", ENDITEM, 
		LAST);

	web_submit_data("linking.do", 
		"Action=http://www.apsrtconline.in/oprs-web/booking/ticket/linking.do?txtJourneyDate=18/11/2017&txtReturnJourneyDate=For%20Roundtrip&endPlaceId=14911&startPlaceId=1386430615487&X=1510893045750", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://www.apsrtconline.in/oprs-web/avail/services.do", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=parameter1", "Value=1510893045750", ENDITEM, 
		"Name=parameter2", "Value=", ENDITEM, 
		"Name=actionType", "Value=bookTickets", ENDITEM, 
		LAST);

	web_submit_data("services.do_2", 
		"Action=http://www.apsrtconline.in/oprs-web/forward/booking/avail/services.do?txtJourneyDate=18/11/2017&startPlaceId=1386430615487&endPlaceId=14911&txtLinkJourneyDate=&ajaxAction=fw&qryType=0&X=1510893045771", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://www.apsrtconline.in/oprs-web/avail/services.do", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=parameter1", "Value=1510893045771", ENDITEM, 
		"Name=parameter2", "Value=", ENDITEM, 
		"Name=actionType", "Value=bookTickets", ENDITEM, 
		LAST);

	lr_end_transaction("Search",LR_AUTO);

	lr_think_time(17);

	web_submit_data("boardPoints.do", 
		"Action=http://www.apsrtconline.in/oprs-web/ajax/forward/layout/boardPoints.do?ajaxAction=fw&txtJourneyDate=18/11/2017&serviceId=18991&startPlaceId=1386430615487&routeCode=1498819286672&endPlaceId=14911&serviceCategoryId=1498918074521&X=1510893064682", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://www.apsrtconline.in/oprs-web/avail/services.do", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=parameter1", "Value=1510893064682", ENDITEM, 
		"Name=parameter2", "Value=", ENDITEM, 
		"Name=actionType", "Value=bookTickets", ENDITEM, 
		LAST);

	lr_think_time(22);

	web_submit_data("view.do", 
		"Action=http://www.apsrtconline.in/oprs-web/ajax/forward/layout/view.do?ajaxAction=fw&endPlaceId=14911&startPlaceId=22131&isLinkTicket=0&linkPlaceId=0&linkStartPlaceId=1386430615487&linkEndPlaceId=14911&searchType=0&concessionId=1347688949874&serviceCategoryId=1498918074521&serviceId=18991&txtJourneyDate=18/11/2017&txtReturnJourneyDate=&srvcTypeCatgId=&layoutId=&returnLayoutId=&returnDynFareDetails=&forwardDynFareDetails=&X=1510893087563", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://www.apsrtconline.in/oprs-web/avail/services.do", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=parameter1", "Value=1510893087563", ENDITEM, 
		"Name=parameter2", "Value=", ENDITEM, 
		"Name=actionType", "Value=bookTickets", ENDITEM, 
		LAST);

	return 0;
}