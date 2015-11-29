void text(string taxt, Color_t taxtCol) {
	TPaveText *ptaxt=new TPaveText(0.6,0.4,0.85,0.46,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	ptaxt->SetFillColor(kWhite);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->SetBorderSize(1);
	ptaxt->Draw();
}

void textSmall(string taxt, Color_t taxtCol) {
	TPaveText *ptaxt=new TPaveText(0.6,0.34,0.7,0.38,"NDC");
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	ptaxt->SetFillColor(kWhite);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->SetBorderSize(1);
	ptaxt->Draw();
}

void textSmallWide(string taxt, Color_t taxtCol) {
	TPaveText *ptaxt=new TPaveText(0.6,0.34,0.77,0.38,"NDC");
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	ptaxt->SetFillColor(kWhite);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->SetBorderSize(1);
	ptaxt->Draw();
}

void textUsr(string taxt, Color_t taxtCol, Double_t x1, Double_t y1, Double_t x2, Double_t y2, bool noborder=0) {
	TPaveText *ptaxt=new TPaveText(x1,y1,x2,y2,"NDC");
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	ptaxt->SetFillColor(kWhite);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->SetBorderSize(1);
	if(noborder) ptaxt->SetBorderSize(0);
	ptaxt->Draw();
}

void textinvisline(string taxt, Color_t taxtCol) {
	TPaveText *ptaxt=new TPaveText(0.6,0.4,0.85,0.46,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->SetBorderSize(0);
	ptaxt->SetTextFont(42);
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	//ptaxt->SetFillColor(kWhite);
	ptaxt->SetFillStyle(0);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->Draw();
}

void textinvislineUsr(string taxt, Color_t taxtCol, Double_t x1, Double_t y1, Double_t x2, Double_t y2, bool transparentfill=true) {
	TPaveText *ptaxt=new TPaveText(x1,y1,x2,y2,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->SetBorderSize(0);
	ptaxt->SetTextFont(42);
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	//ptaxt->SetFillColor(kWhite);

	if(!transparentfill) ptaxt->SetFillColor(kWhite);
	else ptaxt->SetFillStyle(0);

	ptaxt->SetShadowColor(kWhite);
	ptaxt->Draw();
}

void textinvislineUsrsize(string taxt, Color_t taxtCol, Double_t x1, Double_t y1, Double_t x2, Double_t y2, Double_t txtsize) {
	TPaveText *ptaxt=new TPaveText(x1,y1,x2,y2,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->SetBorderSize(0);
	ptaxt->SetTextFont(42);
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	//ptaxt->SetFillColor(kWhite);
	ptaxt->SetFillStyle(0);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->SetTextSize(txtsize);
	ptaxt->Draw();
}

void texti(string taxt, Color_t taxtCol) {
	TPaveText *ptaxt=new TPaveText(0.6,0.4,0.85,0.46,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->SetBorderSize(0);
	ptaxt->SetTextFont(52);
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	//ptaxt->SetFillColor(kWhite);
	ptaxt->SetFillStyle(0);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->Draw();
}

void textiUsr(string taxt, Color_t taxtCol, Double_t x1, Double_t y1, Double_t x2, Double_t y2) {
	TPaveText *ptaxt=new TPaveText(x1,y1,x2,y2,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->SetBorderSize(0);
	ptaxt->SetTextFont(52);
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	//ptaxt->SetFillColor(kWhite);
	ptaxt->SetFillStyle(0);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->Draw();
}

void textb(string taxt, Color_t taxtCol) {
	TPaveText *ptaxt=new TPaveText(0.6,0.4,0.85,0.46,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->SetBorderSize(0);
	ptaxt->SetTextFont(62);
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	//ptaxt->SetFillColor(kWhite);
	ptaxt->SetFillStyle(0);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->Draw();
}

void textbUsr(string taxt, Color_t taxtCol, Double_t x1, Double_t y1, Double_t x2, Double_t y2, bool transparentfill=true) {
	TPaveText *ptaxt=new TPaveText(x1,y1,x2,y2,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->SetBorderSize(0);
	ptaxt->SetTextFont(62);
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	if(!transparentfill) ptaxt->SetFillColor(kWhite);
	else ptaxt->SetFillStyle(0);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->Draw();
}

void textbi(string taxt, Color_t taxtCol) {
	TPaveText *ptaxt=new TPaveText(0.6,0.4,0.85,0.46,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->SetBorderSize(0);
	ptaxt->SetTextFont(72);
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	//ptaxt->SetFillColor(kWhite);
	ptaxt->SetFillStyle(0);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->Draw();
}

void textib(string taxt, Color_t taxtCol) {
	TPaveText *ptaxt=new TPaveText(0.6,0.4,0.85,0.46,"NDC"); //was 0.6,0.34,0.85,0.4,"NDC");
	ptaxt->SetBorderSize(0);
	ptaxt->SetTextFont(72);
	ptaxt->AddText(taxt.c_str());
	ptaxt->SetTextColor(taxtCol);
	//ptaxt->SetFillColor(kWhite);
	ptaxt->SetFillStyle(0);
	ptaxt->SetShadowColor(kWhite);
	ptaxt->Draw();
}

void textangle(string taxt, Color_t taxtCol, Double_t x1, Double_t y1, Double_t angle_deg, Double_t textsiz=.02, bool ital=0) { //position is according to AXES, not fraction of canvas like others

	TLatex *texan=new TLatex(x1,y1,taxt.c_str());
	if(ital) texan->SetTextFont(52);
	else texan->SetTextFont(42);
	texan->SetTextSize(textsiz);
	texan->SetTextColor(taxtCol);
	texan->SetTextAngle(angle_deg);
	texan->Draw();

	return;
}
