<%
 	String para = request.getParameter("Page");
	if(para != null)
	{
		pageContext.include("../Menu/"+para+"/Main.jsp");
	}
%>