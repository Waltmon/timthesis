void freeze(string legant="") {
	fn++;
	onefrozen=true;
	if(legant!="") {
		leg->AddEntry(&f[fn-1],legant.c_str(),"l");
		leg->Draw();
	}
	return;
}

void melt() {
	c->Clear();
	leg->Clear();
	onefrozen=false;
	return;
}
