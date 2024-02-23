Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("images", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSXBLEBkLrKLcYJDDMVxyNGEARF9_n78jmAuYckYnE&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("images_2", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSmKYbjCijwGB0aidJRhOkra2FETFoPKd1nesJqR_k&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("images_3", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRLrl_fqf58JKtWwwZv2L4ewWH78IBAinv5RnKHGMdzbpQTCpKg-YWfPYI&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t60.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("images_4", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSieUazqomi06p53_bUUUwTIOlSGDWHdLVG2HiGNakZRTpT-1rcH4HgYK0&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("images_5", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSbwGY1iBZBWUX_rJqAAyWHENn0QVT7cPdBKFV-1EBuVxsVTuZSdZD8wA0&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("images_6", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTi4QgKkKfSwrFZ6aZTB6PPbgdadB5XrFSfvaAjmTk&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t63.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARaLHyWGNAQAAk1bJeBaROufK5rh9F0TmOlERKM79VlGTSXgIVUKnhpzHvgf02xnNB7mlIE3EzxtezDWWgG9j+IxOBvuxklJ2XT7/gyswSYLboXqxe7pLwO43kKYkT6M+JfGrW76G92TL5t9T4iINpVnH9mok5CwMo5GU3/HCaXivmUBD5OM6djtAuQEY0oSwHsXaBpqG9SjSZ2P3ZYuJR6X59ExQLzbXhkpOw6tYzSghtfKyjs606w==~1; DOMAIN=www.java.com");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARabHyWGNAQAAv1rJeBYaHzF1Uh/0y7xUzVNNTHPTcf/GNfB80zCoEu3s185BOSrkz/2yQLRJQEkF06cerDU6jQP2SzVmGQNtF3FRBJ549IsUhsptwMzIMcZE71+VdSP7m0+aw43y5kW4b1XEy42TIIud+/XuKo+1mg27tlOp7BaDuKNjJpYte8dwdATyhjjAJ06tQvq/ed67TybmVnY4Cb9NBfZXtwjbMbrL1UtM879Pb4chnZI3sQ==~1; DOMAIN=www.java.com");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARafHyWGNAQAAOFvJeBZMc5gL6t9EAsRmH3dDlJOK6YVD6Rlo1PUACu1zoUOkROFIgUSipoiYwRilwpl3ku9QlKLsSY99I67OAiuAe7zrEQeOUcC9eMYfdPdW/wnCmnhTnlF22fhRpFwA9J/SimGTa2co4Z3c9Tce7iSmm2yoR4uQZp+vjUGEq1D+FI9GOwv5sdiH83b4RVngW4SsWn4g7N8WpbK8G1STbhAhOUSoC6vWtFgHNxdy4w==~1; DOMAIN=www.java.com");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARarHyWGNAQAAs1vJeBa8edoJ5XgMlnR9qmkoJbv76bygk3adrnkWW+K4ATeG48wwgQMBi/XR+nPtrSIpK+Cdq/YOFKM2S1M4H1o/2CQGuL9r7g4HL7QG7j0LHK8c/j7Dil/hABLbk3eKX2na41dC8tKv70MnidDUjnvXQjZQyhXVUePUFO3Bb9zl2QQoJlcrNaAVH//X6qV0y0aa33ToTLe9LqeeZI20MvucLOdP0ZzLIe66wW+JxA==~1; DOMAIN=www.java.com");

	web_url("www.java.com", 
		"URL=https://www.java.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/layouts/JCOM-1col_new.html", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/oldcss.css", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/screen.css", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/promise-polyfill.min.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/jcom_redwood.css", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/setupLibs.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/theme.min.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/theme.deferred.min.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/print.css", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cc07/_compdelivery/JCOM-Header-GlobalNav/assets/render.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cc07/_compdelivery/JCOM-SimplePage_Detail/assets/render.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/dependencies/i18n.min.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cc07/_compdelivery/JCOM-Banner-Redwood/assets/render.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cc07/_compdelivery/JCOM-Footer_Detail-Redwood/assets/render.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cc07/_compdelivery/JCOM-Banner-Redwood/assets/design.css", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/content/published/api/v1.1/assets/CONTAC42441D88644D75A6C7B964A1FA1601/native?cb=_cache_0dfd&channelToken=1f7d2611846d4457b213dfc9048724dc", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/translations/header.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/content/published/api/v1.1/assets/CONT32E28F7C5A8446DDA7E9CFA66A3A6DB7/native?cb=_cache_0dfd&channelToken=1f7d2611846d4457b213dfc9048724dc", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/s_code_remote.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/translations/root/header.js", "Referer=https://www.java.com/en/", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/metrics_group1.js", "Referer=https://www.java.com/en/", ENDITEM, 
		LAST);

	web_url("en_structure.json", 
		"URL=https://www.java.com/_cache_9e50/en_structure.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_url("100.json", 
		"URL=https://www.java.com/_cache_9e50/pages/100.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://static.ocecdn.oraclecloud.com/cdn/cec/v23.12.1.3/_sitesclouddelivery/renderer/require.js", "Referer=https://www.java.com/", ENDITEM, 
		LAST);

	web_custom_request("pixel_7fde5d22", 
		"URL=https://www.java.com/akam/13/pixel_7fde5d22", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"Body=ap=true&bt=%7B%22charging%22%3Atrue%2C%22chargingTime%22%3A0%2C%22dischargingTime%22%3A%22Infinity%22%2C%22level%22%3A1%2C%22onchargingchange%22%3Anull%2C%22onchargingtimechange%22%3Anull%2C%22ondischargingtimechange%22%3Anull%2C%22onlevelchange%22%3Anull%7D&fonts=null&fh=null&timing="
		"%7B%221%22%3A51%2C%222%22%3A159%2C%223%22%3A260%2C%224%22%3A363%2C%225%22%3A477%2C%226%22%3A585%2C%22profile%22%3A%7B%22bp%22%3A2%2C%22sr%22%3A0%2C%22dp%22%3A1%2C%22lt%22%3A0%2C%22ps%22%3A1%2C%22cv%22%3A34%2C%22fp%22%3A0%2C%22sp%22%3A0%2C%22br%22%3A0%2C%22ieps%22%3A1%2C%22av%22%3A0%2C%22z1%22%3A8%2C%22jsv%22%3A1%2C%22nav%22%3A1%2C%22nap%22%3A1%2C%22crc%22%3A0%2C%22z2%22%3A0%2C%22z3%22%3A1%2C%22z4%22%3A2%2C%22z5%22%3A0%2C%22z6%22%3A0%7D%2C%22main%22%3A2608%2C%22compute%22%3A51%2C%22send%22%3A585%7D"
		"&bp=2087755996%2C1953464915%2C591862434%2C325835597%2C1068473606%2C-1382186647%2C-365096851%2C-1979186206%2C-108039040%2C-1906852049&sr=%7B%22inner%22%3A%5B1280%2C593%5D%2C%22outer%22%3A%5B1280%2C680%5D%2C%22screen%22%3A%5B0%2C0%5D%2C%22pageOffset%22%3A%5B0%2C0%5D%2C%22avail%22%3A%5B1280%2C680%5D%2C%22size%22%3A%5B1280%2C720%5D%2C%22client%22%3A%5B1264%2C0%5D%2C%22colorDepth%22%3A24%2C%22pixelDepth%22%3A24%7D&dp="
		"%7B%22XDomainRequest%22%3A0%2C%22createPopup%22%3A0%2C%22removeEventListener%22%3A1%2C%22globalStorage%22%3A0%2C%22openDatabase%22%3A0%2C%22indexedDB%22%3A1%2C%22attachEvent%22%3A0%2C%22ActiveXObject%22%3A0%2C%22dispatchEvent%22%3A1%2C%22addBehavior%22%3A0%2C%22addEventListener%22%3A1%2C%22detachEvent%22%3A0%2C%22fireEvent%22%3A0%2C%22MutationObserver%22%3A1%2C%22HTMLMenuItemElement%22%3A0%2C%22Int8Array%22%3A1%2C%22postMessage%22%3A1%2C%22querySelector%22%3A1%2C%22getElementsByClassName%22%3A1%2C"
		"%22images%22%3A1%2C%22compatMode%22%3A%22CSS1Compat%22%2C%22documentMode%22%3A0%2C%22all%22%3A1%2C%22now%22%3A1%2C%22contextMenu%22%3A0%7D&lt=1707127918454%2B5.5&ps=true%2Ctrue&cv=3f2ba45eea7a02b4fa8b1380f69df572c6ddc28c&fp=false&sp=false&br=Chrome&ieps=false&av=false&z=%7B%22a%22%3A2145279280%2C%22b%22%3A1%2C%22c%22%3A1%7D&zh=&jsv=1.5&nav=%7B%22userAgent%22%3A%22Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F121.0.0.0%20Safari%2F537.36%22%2C%22appName%22%3A%22Netscape%22%2C%22appCodeName%22%3A%22Mozilla%22%2C%22appVersion%22%3A%225.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F121.0.0.0%20Safari%2F537.36%22%2C%22appMinorVersion%22%3A0%2C%22product%22%3A%22Gecko%22%2C%22productSub%22%3A%2220030107%22%2C%22vendor%22%3A%22Google%20Inc.%22%2C%22vendorSub%22%3A%22%22%2C%22buildID%22%3A0%2C%22platform%22%3A%22Win32%22%2C%22oscpu%22%3A0%2C%22hardwareConcurrency%22%3A4%2C%22language%22%3A%22en-GB%22%2C%22languages%22%3A%5B%22en-GB%22%5D%2C%22systemLanguage%22%3A0%2C%22userLanguage%22%3A0%2C%22doNotTrack%22%3Anull%2C%22msDoNotTrack%22%3A0%2C%22cookieEnabled%22%3Atrue"
		"%2C%22geolocation%22%3A1%2C%22vibrate%22%3A1%2C%22maxTouchPoints%22%3A0%2C%22webdriver%22%3Afalse%2C%22plugins%22%3A%5B%22PDF%20Viewer%22%2C%22Chrome%20PDF%20Viewer%22%2C%22Chromium%20PDF%20Viewer%22%2C%22Microsoft%20Edge%20PDF%20Viewer%22%2C%22WebKit%20built-in%20PDF%22%5D%7D&crc="
		"%7B%22window.chrome%22%3A%7B%22app%22%3A%7B%22isInstalled%22%3Afalse%2C%22InstallState%22%3A%7B%22DISABLED%22%3A%22disabled%22%2C%22INSTALLED%22%3A%22installed%22%2C%22NOT_INSTALLED%22%3A%22not_installed%22%7D%2C%22RunningState%22%3A%7B%22CANNOT_RUN%22%3A%22cannot_run%22%2C%22READY_TO_RUN%22%3A%22ready_to_run%22%2C%22RUNNING%22%3A%22running%22%7D%7D%7D%7D&t=6cd540709079573cf4730ea0aafad45825963aaf&u=c99cf1ca7913513f91c771e3ae7dffc1&nap=11321144241322243122", 
		EXTRARES, 
		"Url=https://www.oracle.com/asset/web/css/redwood-base.css", "Referer=https://www.java.com/", ENDITEM, 
		"Url=https://www.oracle.com/asset/web/css/redwood-styles.css", "Referer=https://www.java.com/", ENDITEM, 
		"Url=https://c.oracleinfinity.io/acs/account/wh3g12c3gg/js/java/odc.js?_ora.context=analytics:production", "Referer=https://www.java.com/", ENDITEM, 
		"Url=https://c.oracleinfinity.io/acs/account/wh3g12c3gg/js/java/analytics-production.js", "Referer=https://www.java.com/", ENDITEM, 
		"Url=https://static.ocecdn.oraclecloud.com/cdn/cec/v23.12.1.3/_sitesclouddelivery/renderer/renderer.js", "Referer=https://www.java.com/", ENDITEM, 
		"Url=https://c.oracleinfinity.io/acs/common/js/1.3.43/common.js", "Referer=https://www.java.com/", ENDITEM, 
		"Url=https://c.oracleinfinity.io/acs/account/wh3g12c3gg/js/java/analytics-production/analytics.js", "Referer=https://www.java.com/", ENDITEM, 
		"Url=https://www.oracle.com/asset/web/fonts/oraclesansvf.woff2", "Referer=https://www.oracle.com/asset/web/css/redwood-base.css", ENDITEM, 
		LAST);

	web_add_cookie("ORA_FLEX_CACHE_KEY=desktop-chrome_121-windows10-64bit; DOMAIN=www.java.com");

	web_url("items", 
		"URL=https://www.java.com/content/published/api/v1.1/items?q=((id%20eq%20%22COREEACA6644ABED46228A54322C5E14161D%22%20or%20id%20eq%20%22CORE1CE64AD7F2E944B68F223DEBB0AF616A%22%20or%20id%20eq%20%22CORE168A2AB12456492DBDEE32B47DC48D57%22)%20and%20(language%20eq%20%22en%22))&channelToken=1f7d2611846d4457b213dfc9048724dc&cb=_cache_0dfd", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_url("caas_contenttypemap.json", 
		"URL=https://www.java.com/_cache_0dfd/caas_contenttypemap.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.oracle.com/asset/web/analytics/infinity_common.js", "Referer=https://www.java.com/", ENDITEM, 
		LAST);

	web_url("template.html", 
		"URL=https://www.java.com/_cache_cc07/_compdelivery/JCOM-Header-GlobalNav/assets/template.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_url("layout.html", 
		"URL=https://www.java.com/_cache_cc07/_compdelivery/JCOM-Banner-Redwood/assets/layout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARajHyWGNAQAAXVvJeBb2cOORpzj3LCCy3Y2ZljwRkzj6OoWV78OBAsRF6aIiPI1gciepsSnZrRW/JKcEPIlak3fo1n23KoAJ3zPugUVHetu0eqapXfLu+ZRBsfmTQfiPtzvZKYGZvNS31PYyi0NDv8POWte2xNycCY/vVIWh91s4dPkbJusHsSKn3SmAtRcuwA68nF0UZheJBDWqOBYOk8E7mL3tNelnfd8UcHweAGM60WRA8u3gUQ==~1; DOMAIN=www.java.com");

	web_url("layout.html_2", 
		"URL=https://www.java.com/_cache_cc07/_compdelivery/JCOM-SimplePage_Detail/assets/layout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARanHyWGNAQAAplvJeBZ9XRyeGYmnHq2pzPgJh8o45nfMXUGYHzybB93H8PXA07fcqNb+c/JW3sebf6/O6inZ9wS3Sy7+NoZW6eXUW7fSiwTu+4G9sXr8Z+zb9UDj2zqjr0xCocOYz7foHqrdC4yer2kqBlIKzum2yP8nvoLU4rhRHFfK8D1uqH6tGTs45/jpVrudR78Goo8WWxrgMb/v72oKaLjtelOmQI96IgKl99p158hhMZ0bGQ==~1; DOMAIN=www.java.com");

	web_url("layout.html_3", 
		"URL=https://www.java.com/_cache_cc07/_compdelivery/JCOM-Footer_Detail-Redwood/assets/layout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.oracle.com/asset/web/fonts/redwoodicons.woff2", "Referer=https://www.oracle.com/asset/web/css/redwood-base.css", ENDITEM, 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/img/Java-horz-wht.svg", "Referer=https://www.java.com/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/jcom_redwood.css", ENDITEM, 
		LAST);

	web_url("id", 
		"URL=https://dc.oracleinfinity.io/v4/account/wh3g12c3gg/client/id", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASGQkJP_rgD167ShIFDT0fUzwhRWqQGHorRLg=?alt=proto", "Referer=", ENDITEM, 
		"Url=/wh3g12c3gg/dcs.gif?wt.hm_scrolldepth=100&wt.hm_scrolldepthtype=start&wt.dl=125&wt.hm_timespan=12&dcsdat=1707127920685&dcssip=www.java.com&dcsuri=/en/&dcsref=https://www.google.com/&wt.tz=5&wt.bh=15&wt.ul=en-GB&wt.cd=24&wt.sr=1280x720&wt.jo=No&wt.js=Yes&wt.bs=1280x593&wt.ssl=1&wt.es=www.java.com/en/&wt.tv=1.0.4&wt.ce=1&wt.vtid=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&wt.co_f=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&wt.vt_f=1&ora.tag_id=java&ora.tag_config=production&wt.cg_l1=en", "Referer=https://"
		"www.java.com/", ENDITEM, 
		"Url=/wh3g12c3gg/dcs.gif?wt.tm_pageready=3.465&wt.tm_pageredir=0.582&wt.tm_serverconn=0.000&wt.tm_pagedns=0.000&wt.tm_serverresponse=0.002&wt.tm_pagedownload=0.210&wt.tm_domcontentloaded=3.458&wt.tm_redirect=0.582&wt.dl=70&wt.tm_tv=1.0.4&dcsdat=1707127920689&dcssip=www.java.com&dcsuri=/en/&dcsref=https://www.google.com/&wt.tz=5&wt.bh=15&wt.ul=en-GB&wt.cd=24&wt.sr=1280x720&wt.jo=No&wt.js=Yes&wt.bs=1280x593&wt.ssl=1&wt.es=www.java.com/en/&wt.tv=1.0.4&wt.ce=1&wt.vtid="
		"b03d4e03-8590-4f0c-8f04-43eadcfef1f9&wt.co_f=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&ora.tag_id=java&ora.tag_config=production&wt.cg_l1=en", "Referer=https://www.java.com/", ENDITEM, 
		"Url=/wh3g12c3gg/dcs.gif?dcsdat=1707127920700&dcssip=www.java.com&dcsuri=/en/&dcsref=https://www.google.com/&wt.tz=5&wt.bh=15&wt.ul=en-GB&wt.cd=24&wt.sr=1280x720&wt.jo=No&wt.js=Yes&wt.bs=1280x593&wt.dl=0&wt.ssl=1&wt.es=www.java.com/en/&wt.tv=1.0.4&wt.ce=1&wt.vtid=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&wt.co_f=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&ora.tag_id=java&ora.tag_config=production&wt.cg_l1=en&wt.plgcm_tv=1.25&wt.gcm_uid=NotSent&wt.p_status=A&wt.p_cookie_att=0~implied~NoCookie&wt.url_es=https://"
		"www.java.com/en/&wt.z_prev=https://www.google.com/", "Referer=https://www.java.com/", ENDITEM, 
		LAST);

	return 0;
}