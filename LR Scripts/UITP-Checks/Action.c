Action()
{

	/* Dynamic Id
	*/

	web_reg_find("Text=Dynamic ID", 
		LAST);

	lr_think_time(71);

	web_url("dynamicid", 
		"URL=http://uitestingplayground.com/dynamicid", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}