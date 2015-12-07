void nh(Double_t del_m12=0., Double_t del_m=0., Double_t del_t12=0., Double_t del_t23=0., Double_t del_t13=0., Double_t delta=0., Double_t alpha1=0., Double_t alpha2=0.) {
//ignore powers of 10

	//note these aren't all the same for ih
//	Double_t m12 = asin(sqrt((7.54 + del_m12)*1.E-5));
//	Double_t m32 = (2.43 + del_m32)*1.E-3));
	Double_t t12 = asin(sqrt(0.308 + del_t12));
	Double_t t23 = asin(sqrt(.437 + del_t23));
	Double_t t13 = asin(sqrt(0.0234 + del_t13));
	Double_t Delta_m12_sq = -7.54e-5; //eV_sq  NEGATIVE BECAUSE I HAD IT DEFINED WRONG
	Double_t Delta_m_sq   = 2.43e-3; //eV_sq

	Double_t c12_sq = cos(t12)**2;
	Double_t c13_sq = cos(t13)**2;
	Double_t s12_sq = sin(t12)**2;
	Double_t s13_sq = sin(t13)**2;

	Double_t Re_eialpha1 = cos(alpha1);
	Double_t Re_eialpha2 = cos(alpha2);
	Double_t Re_neg2idelta = cos(-2.*delta);

	Double_t whu1 = sin(alpha1);
	Double_t whu2 = sin(alpha2);
	Double_t whu3 = sin(-2.*delta);

	gPad->SetLogx(kTRUE);
	gPad->SetLogy(kTRUE);

	f[fn]=new TF1(Form("f%d",fn),Form("sqrt((%f*%f*%f*x + %f*%f*%f*sqrt(x**2-%f) + %f*%f*sqrt(%f+x**2+%f/2.))**2 + (%f*%f*%f*x + %f*%f*%f*sqrt(x**2-%f) + %f*%f*sqrt(%f+x**2+%f/2.))**2)",c12_sq,c13_sq,Re_eialpha1,s12_sq,c13_sq,Re_eialpha2,Delta_m12_sq,s13_sq,Re_neg2idelta,Delta_m_sq,Delta_m12_sq,c12_sq,c13_sq,whu1,s12_sq,c13_sq,whu2,Delta_m12_sq,s13_sq,whu3,Delta_m_sq,Delta_m12_sq),1.e-4,1.);
//need to read PDG thing.  I don't understand how the imaginary phases contribute to the <m_nu>.  Should also understand difference between that and the mass KATRIN measures.
	f[fn].SetLineColor(col);
	//f[fn].SetLineWidth(1);
	f[fn].SetTitle("NH;m_{min} (eV);<m_{#beta#beta}> (eV)");
	//f[fn].GetXaxis()->SetRangeUser(1.e-4,1.);
	f[fn].GetYaxis()->SetRangeUser(1.e-3,1.);
	if(onefrozen) f[fn].Draw("same");
	else f[fn].Draw("");

	/*TF1 *ff=new TF1("ff",Form("%f*%f*%f*x + %f*%f*%f*sqrt(x**2-%f) + %f*%f*sqrt(%f+x**2+%f/2.)",c12_sq,c13_sq,Re_eialpha1,s12_sq,c13_sq,Re_eialpha2,Delta_m12_sq,s13_sq,Re_neg2idelta,Delta_m_sq,Delta_m12_sq),1.e-4,1.);
	ff->SetLineColor(col);
	ff->SetTitle("NH;m_{min} (eV);<m_{#beta#beta}> (eV)");
	//ff->GetXaxis()->SetRangeUser(1.e-4,1.);
	ff->GetYaxis()->SetRangeUser(1.e-3,1.);
	if(onefrozen) ff->Draw("same");
	else ff->Draw("");*/

	return;
}

void ih(Double_t del_m12=0., Double_t del_m=0., Double_t del_t12=0., Double_t del_t23=0., Double_t del_t13=0., Double_t delta=0., Double_t alpha1=0., Double_t alpha2=0.) {
//ignore powers of 10

	//note these aren't all the same for ih
//	Double_t m12 = asin(sqrt((7.54 + del_m12)*1.E-5));
//	Double_t m32 = (2.43 + del_m32)*1.E-3));
	Double_t t12 = asin(sqrt(0.308 + del_t12));
	Double_t t23 = asin(sqrt(.455 + del_t23));
	Double_t t13 = asin(sqrt(0.024 + del_t13));
	Double_t Delta_m12_sq = -7.54e-5; //eV_sq
	Double_t Delta_m_sq   = -2.38e-3; //eV_sq

	Double_t c12_sq = cos(t12)**2;
	Double_t c13_sq = cos(t13)**2;
	Double_t s12_sq = sin(t12)**2;
	Double_t s13_sq = sin(t13)**2;

	Double_t Re_eialpha1 = cos(alpha1);
	Double_t Re_eialpha2 = cos(alpha2);
	Double_t Re_neg2idelta = cos(-2.*delta);

	gPad->SetLogx(kTRUE);
	gPad->SetLogy(kTRUE);

	f[fn]=new TF1(Form("f%d",fn),Form("%f*%f*%f*sqrt(x**2-1.5*%f-%f) + %f*%f*%f*sqrt(x**2-0.5*%f-%f) + %f*%f*x",c12_sq,c13_sq,Re_eialpha1,Delta_m12_sq,Delta_m_sq,s12_sq,c13_sq,Re_eialpha2,Delta_m12_sq,Delta_m_sq,s13_sq,Re_neg2idelta),1.e-4,1.);
//need to read PDG thing.  I don't understand how the imaginary phases contribute to the <m_nu>.  Should also understand difference between that and the mass KATRIN measures.
	f[fn].SetLineColor(col);
	//f[fn].SetLineWidth(1);
	f[fn].SetTitle("IH;m_{min} (eV);<m_{#beta#beta}> (eV)");
	//f[fn].GetXaxis()->SetRangeUser(1.e-4,1.);
	f[fn].GetYaxis()->SetRangeUser(1.e-3,1.);
	if(onefrozen) f[fn].Draw("same");
	else f[fn].Draw("");

	/*TF1 *ff=new TF1("ff",Form("%f*%f*%f*x + %f*%f*%f*sqrt(x**2-%f) + %f*%f*sqrt(%f+x**2+%f/2.)",c12_sq,c13_sq,Re_eialpha1,s12_sq,c13_sq,Re_eialpha2,Delta_m12_sq,s13_sq,Re_neg2idelta,Delta_m_sq,Delta_m12_sq),1.e-4,1.);
	ff->SetLineColor(col);
	ff->SetTitle("NH;m_{min} (eV);<m_{#beta#beta}> (eV)");
	//ff->GetXaxis()->SetRangeUser(1.e-4,1.);
	ff->GetYaxis()->SetRangeUser(1.e-3,1.);
	if(onefrozen) ff->Draw("same");
	else ff->Draw("");*/

	return;
}

/*void nh(Double_t del_m12=0., Double_t del_m=0., Double_t del_t12=0., Double_t del_t23=0., Double_t del_t13=0., Double_t delta=0., Double_t alpha1=0., Double_t alpha2=0.) {
//ignore powers of 10

	//note these aren't all the same for ih
//	Double_t m12 = asin(sqrt((7.54 + del_m12)*1.E-5));
//	Double_t m32 = (2.43 + del_m32)*1.E-3));
	Double_t t12 = asin(sqrt(0.308 + del_t12));
	Double_t t23 = asin(sqrt(.437 + del_t23));
	Double_t t13 = asin(sqrt(0.0234 + del_t13));
	Double_t Delta_m12_sq = -7.54e-5; //eV_sq  NEGATIVE BECAUSE I HAD IT DEFINED WRONG
	Double_t Delta_m_sq   = 2.43e-3; //eV_sq

	Double_t c12_sq = cos(t12)**2;
	Double_t c13_sq = cos(t13)**2;
	Double_t s12_sq = sin(t12)**2;
	Double_t s13_sq = sin(t13)**2;

	///////
	Double_t a1 = sqrt(Delta_m12_sq)*s12_sq*c13_sq;
	Double_t b1 = sqrt(Delta_m_sq)*s13_sq;//using that instead of delta m31
	Double_t dotdotdot = alpha2 - alpha1 - 2*delta;
	//////


	Double_t Re_eialpha1 = cos(alpha1);
	Double_t Re_eialpha2 = cos(alpha2);
	Double_t Re_neg2idelta = cos(-2.*delta);

	gPad->SetLogx(kTRUE);
	gPad->SetLogy(kTRUE);

	f[fn]=new TF1(Form("f%d",fn),Form("sqrt((%f+%f*cos(%f))**2 + (%f*sin(%f))**2)",a1,b1,dotdotdot,b1,dotdotdot),1.e-4,1.);
//need to read PDG thing.  I don't understand how the imaginary phases contribute to the <m_nu>.  Should also understand difference between that and the mass KATRIN measures.
	f[fn].SetLineColor(col);
	//f[fn].SetLineWidth(1);
	f[fn].SetTitle("NH;m_{min} (eV);<m_{#beta#beta}> (eV)");
	//f[fn].GetXaxis()->SetRangeUser(1.e-4,1.);
	f[fn].GetYaxis()->SetRangeUser(1.e-3,1.);
	if(onefrozen) f[fn].Draw("same");
	else f[fn].Draw("");

	/*TF1 *ff=new TF1("ff",Form("%f*%f*%f*x + %f*%f*%f*sqrt(x**2-%f) + %f*%f*sqrt(%f+x**2+%f/2.)",c12_sq,c13_sq,Re_eialpha1,s12_sq,c13_sq,Re_eialpha2,Delta_m12_sq,s13_sq,Re_neg2idelta,Delta_m_sq,Delta_m12_sq),1.e-4,1.);
	ff->SetLineColor(col);
	ff->SetTitle("NH;m_{min} (eV);<m_{#beta#beta}> (eV)");
	//ff->GetXaxis()->SetRangeUser(1.e-4,1.);
	ff->GetYaxis()->SetRangeUser(1.e-3,1.);
	if(onefrozen) ff->Draw("same");
	else ff->Draw("");*/
/*
	return;
}

void ih(Double_t del_m12=0., Double_t del_m=0., Double_t del_t12=0., Double_t del_t23=0., Double_t del_t13=0., Double_t delta=0., Double_t alpha1=0., Double_t alpha2=0.) {
//ignore powers of 10

	//note these aren't all the same for ih
//	Double_t m12 = asin(sqrt((7.54 + del_m12)*1.E-5));
//	Double_t m32 = (2.43 + del_m32)*1.E-3));
	Double_t t12 = asin(sqrt(0.308 + del_t12));
	Double_t t23 = asin(sqrt(.455 + del_t23));
	Double_t t13 = asin(sqrt(0.024 + del_t13));
	Double_t Delta_m12_sq = -7.54e-5; //eV_sq
	Double_t Delta_m_sq   = -2.38e-3; //eV_sq

	Double_t c12_sq = cos(t12)**2;
	Double_t c13_sq = cos(t13)**2;
	Double_t s12_sq = sin(t12)**2;
	Double_t s13_sq = sin(t13)**2;

	Double_t Re_eialpha1 = cos(alpha1);
	Double_t Re_eialpha2 = cos(alpha2);
	Double_t Re_neg2idelta = cos(-2.*delta);

	gPad->SetLogx(kTRUE);
	gPad->SetLogy(kTRUE);

	f[fn]=new TF1(Form("f%d",fn),Form("sqrt(%f+x**2)*(1-(sin(2*%f)**2)*(sin(%f*.5)**2))**(.5)",Delta_m_sq,t12,alpha1),1.e-4,1.);
//need to read PDG thing.  I don't understand how the imaginary phases contribute to the <m_nu>.  Should also understand difference between that and the mass KATRIN measures.
	f[fn].SetLineColor(col);
	//f[fn].SetLineWidth(1);
	f[fn].SetTitle("IH;m_{min} (eV);<m_{#beta#beta}> (eV)");
	//f[fn].GetXaxis()->SetRangeUser(1.e-4,1.);
	f[fn].GetYaxis()->SetRangeUser(1.e-3,1.);
	if(onefrozen) f[fn].Draw("same");
	else f[fn].Draw("");

	/*TF1 *ff=new TF1("ff",Form("%f*%f*%f*x + %f*%f*%f*sqrt(x**2-%f) + %f*%f*sqrt(%f+x**2+%f/2.)",c12_sq,c13_sq,Re_eialpha1,s12_sq,c13_sq,Re_eialpha2,Delta_m12_sq,s13_sq,Re_neg2idelta,Delta_m_sq,Delta_m12_sq),1.e-4,1.);
	ff->SetLineColor(col);
	ff->SetTitle("NH;m_{min} (eV);<m_{#beta#beta}> (eV)");
	//ff->GetXaxis()->SetRangeUser(1.e-4,1.);
	ff->GetYaxis()->SetRangeUser(1.e-3,1.);
	if(onefrozen) ff->Draw("same");
	else ff->Draw("");*/
/*
	return;
}*/