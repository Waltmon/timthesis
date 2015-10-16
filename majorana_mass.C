void nh(Double_t del_m12, Double_t del_m32, Double_t del_t12, Double_t del_t23, Double_t del_t13, Double_t del_d) {
//ignore powers of 10

	//note these aren't all the same for ih
//	Double_t m12 = asin(sqrt((7.54 + del_m12)*1.E-5));
//	Double_t m32 = (2.43 + del_m32)*1.E-3));
	Double_t t12 = asin(sqrt(0.308 + del_t12));
	Double_t t23 = asin(sqrt(4.37 + del_t23));
	Double_t t13 = asin(sqrt(0.0234 + del_t13));

	TF1 *fnh=new TF1("fnh",
//need to read PDG thing.  I don't understand how the imaginary phases contribute to the <m_nu>.  Should also understand difference between that and the mass KATRIN measures.

	return;
}
