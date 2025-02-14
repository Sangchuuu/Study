function MenuClick(_Menu = null)
{
	if(_Menu != null)
	{
    	var Menu = _Menu.id.split("_")[1];
    	console.log(Menu);
    	/*
    	if(Menu == "Title")
    		location.href = "./Main.jsp";
    	else
    		location.href = "./Main.jsp?Page="+Menu;
    		*/
    	console.log(window.location.href);
    	console.log(window.location.protocol);
    	console.log(window.location.host);
    	console.log(window.location.port);
    	console.log(window.location.pathname);
    	console.log(window.location.search);
    	/*
    	window.location.href = 현재 풀경로
    	window.location.protocol = 프로토콜 표시 ex) "http:"
    	window.location.host = 호스트 표시 ex)"localhost:8080"
    	window.location.port = 포트번호 표시 ex)"8080"
    	window.loaction.pathname = 경로 표시 ex)"/WebProj/Main/Main.jsp"
    	window.location.search = 파라미터 표시 ex) ?Page=Study
    	
    	location.href = location.href + "?Page="+Menu;
    	를 사용하였을 경우 전체경로에 + 파라미터가 계쏙 붙어서 메뉴 이동할때마다 파라미터가 계속 붙게된다.
    	*/
	}
}
window["MenuClick"] = MenuClick;