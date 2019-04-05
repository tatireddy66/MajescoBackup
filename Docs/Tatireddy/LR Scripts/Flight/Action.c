Action()
{

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl",
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search",
		"Snapshot=t12.inf",
		"Mode=HTTP",
		LAST);

	web_url("reservations.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("in_flights.gif",
		"URL=http://127.0.0.1:1080/WebTours/images/in_flights.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights",
		"Snapshot=t14.inf",
		LAST);

	web_url("itinerary.gif",
		"URL=http://127.0.0.1:1080/WebTours/images/itinerary.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights",
		"Snapshot=t15.inf",
		LAST);

	web_url("home.gif",
		"URL=http://127.0.0.1:1080/WebTours/images/home.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights",
		"Snapshot=t16.inf",
		LAST);

	web_url("signoff.gif",
		"URL=http://127.0.0.1:1080/WebTours/images/signoff.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights",
		"Snapshot=t17.inf",
		LAST);

	web_concurrent_end(NULL);

	web_url("button_next.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/button_next.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t18.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}