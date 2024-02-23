/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("uitestingplayground.com", 
		"URL=http://uitestingplayground.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("SEARCH_SAMESITE=CgQIy5kB; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI7P1GsXY2EsgixNXy-4BGXV7Qo_F9e2NjjJX94Sy1WxFQK9HGmIq8lrATqCcVwwv581D4dg50uDLVTUePegmUvAblGNwKi6K9YnfA2mpIJQVRX1OrA2ZhCDOkFUjzRpd_2Ao0s06TGIJSO9mHLSzhCAOZLnKA; DOMAIN=accounts.google.com");

	web_add_cookie("OTZ=7377526_34_34__34_; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:cLMmfuciuWZBtBeO-z-X4ZWNSBNBNLLuu6ZbQsVBVp7fdjyivMwsmE4Y-_6_9QY-NxBYZpuSsyRrR8h-_eiWiMSyna5pnA:eH3b3_EYB4MuzeXF; DOMAIN=accounts.google.com");

	web_add_cookie("OGPC=19037049-1:; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2024-02-05-05; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=Ae3NU9MO55X1VUHicwTbAOj5WJQ4Eo37eBjPJ1ebfUPeP_dj3-5ho_PPNIM; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=GfgGCYVDeE4LJ2wQorx_djSk_i7y4juq5tXLvGHymyf3u78kmpUafXLf8CmBrRweiuZ_xatU9mZCvh48uHNyvRIJe4UGmQx4Ptlm0Ghb2_NWBLCj2RFv3FWOqGWPwaH9SXC8C7Go4fot_d8Beye3wKAufIcN2j0bk96nqwPL1RO5cnUn4-mTl_cIUB5xH12A8l7VBsxmviDZg9DKzi3h3SdKefqOVUVJfFlEKCjaoBsLtbwvAW9WUZ2NQRUnUXDvypG9y34Obj-y0T_R36uB2kQOcu5V64EGjQ9-HnO20JL_DWSwj1Ae4WXXvs5L1_syfRstooRfebcSTyh4; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_url("fork.png", 
		"URL=http://uitestingplayground.com/static/fork.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://uitestingplayground.com/static/style.css", 
		"Snapshot=t3.inf", 
		LAST);

	return 0;
}
