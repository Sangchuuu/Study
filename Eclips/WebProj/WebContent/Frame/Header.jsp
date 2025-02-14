<style>
font{
	color: #FFFFFF
}
</style>
<div id = 'Header'>
	<div id = 'HeaderContent' style="height:100%; display : inline-flex; margin : 0px 20px 0px 20px;">
		<div class='HMenu' id = 'Menu_Title' onclick="MenuClick(this)" style = "cursor: pointer;">
			<font size="25px" style="font-weight: 600">James</font>
		</div>
		<div class='HMenu'style="font-size: 20px;">
			<div id = "Menu_Profile"onclick="MenuClick(this)" style="margin: 0px 15px 0px 15px; cursor: pointer;">
				<font>Profile</font>
			</div>
			<div id = "Menu_Project" onclick="MenuClick(this)" style="margin: 0px 15px 0px 15px; cursor: pointer;">
				<font>Project</font>
			</div>
			<div id = "Menu_Study" onclick="MenuClick(this)" style="margin: 0px 15px 0px 15px; cursor: pointer;">
				<font>Study</font>
			</div>
			<div id = "Menu_Hobby" onclick="MenuClick(this)" style="margin: 0px 15px 0px 15px; cursor: pointer;">
				<font>Hobby</font>
			</div>
		</div>
	</div>
</div>
<script type="module", src="../Frame/MenuControl.js"></script>