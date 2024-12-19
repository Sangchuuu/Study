<%
 	String para = request.getParameter("Page");
	if(para != null)
	{
		switch(para)
		{
			case "study":
				pageContext.include("../Study/Main.jsp");
				break;
		}
	}
%>