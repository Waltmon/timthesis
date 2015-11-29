//called from scope_setup.C, spec_setup.C, others?

void mark(Double_t xx, Double_t yy, Color_t kolar) {
	Double_t mx[] = {xx};
	Double_t my[] = {yy};

	TGraph *gmarker=new TGraph(1,mx,my);
	gmarker->SetMarkerStyle(33);
	gmarker->SetMarkerColor(kolar);

	gmarker->Draw("sameP");

	return;
}

void drawlineh(Double_t yy, Double_t x1, Double_t x2, Color_t kolar, Width_t lwid=1, Style_t stile=2) {
	TLine *lline=new TLine(x1,yy,x2,yy);
	lline->SetLineStyle(stile);
	lline->SetLineWidth(lwid);
	lline->SetLineColor(kolar);
	lline->Draw();

	return;
}

void drawlinev(Double_t xx, Double_t y1, Double_t y2, Color_t kolar, Width_t lwid=1, Style_t stile=2) {
	TLine *lline=new TLine(xx,y1,xx,y2);
	lline->SetLineStyle(stile);
	lline->SetLineWidth(lwid);
	lline->SetLineColor(kolar);
	lline->Draw();

	return;
}

void arrow(Double_t xarr1, Double_t xarr2, Double_t yarr1, Double_t yarr2, Color_t colarr) {
	TArrow *arrw=new TArrow(xarr1,yarr1,xarr2,yarr2);
	arrw->SetLineWidth(3);
	arrw->SetLineColor(colarr);
	arrw->SetArrowSize(.01);

	arrw->Draw();

	return;
}

void ellipse(Double_t xmid, Double_t ymid, Double_t xwid, Double_t ywid, Color_t colell) {
	TEllipse *ell=new TEllipse(xmid,ymid,xwid,ywid);
	ell->SetLineColor(colell);
	ell->SetLineWidth(3);
	ell->SetFillStyle(0);

	ell->Draw();

	return;
}

void box(Double_t xb1, Double_t xb2, Double_t yb1, Double_t yb2, Color_t boxcol, Style_t fillsty=1) {

	TBox *boxxx=new TBox();
	boxxx->SetX1(xb1);
	boxxx->SetX2(xb2);
	boxxx->SetY1(yb1);
	boxxx->SetY2(yb2);
	boxxx->SetFillColor(boxcol);
	boxxx->SetFillStyle(fillsty);
	boxxx->Draw();

	return;
}