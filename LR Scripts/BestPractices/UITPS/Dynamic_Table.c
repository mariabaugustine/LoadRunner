Dynamic_Table()
{
	lr_think_time(114);
	
	web_url("dynamictable", 
		"URL=http://uitestingplayground.com/dynamictable", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
