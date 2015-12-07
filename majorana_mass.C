{
  #include "plotText.C";
  #include "plot_mark.C";
  #include "majorana_plot.C";
  //#include "majorana_plot2.C";
  #include "majorana_freeze.C";

  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetPalette(1);//1:heat   8000:blue, but 5000 seems to make blue too
  gStyle->SetLabelSize(0.03,"xyz");
  gStyle->SetTitleFont(42,"xyz");
  gStyle->SetLabelFont(42,"xyz");
  gStyle->SetTitleFont(42,"");

  ////////////////////
  Int_t machine = 3;  // NOT IMPLIMENTED FOR PATHS IN THIS (image_setup.C... it IS on spec_setup, and maybe on scope as well, maybe rga, idk)
  //machine key:
  //1 = Dell
  //2 = Iomega
  //3 = ThinkPad
  ////////////////////

  string pathHome;
  Int_t cx, cy, csx, csy;
  if(machine==1)  { //Dell
	  pathHome = "C:/Walton/";
	  cx = 2800;//was 2630 for wide
	  cy = 20;//20 goes near top for long skinny           //was 180     // was 60 for having the menu canvas underneath
	  csx = 2700;
	  csy = 810;
	  /*cx = 2250;//700;
	  cy = 50;
	  csx = 2300;
	  csy = 810;*/
  }
  else if(machine==2) { //Iomega
	  pathHome = "H:/exo/"; //MIGHT NOT ALWAYS BE H:/
	  cx = 30;
	  cy = 50;
	  csx = 70;
	  csy = 400;
  }
  else if(machine==3) { //ThinkPad
	  pathHome = "C:/exo/";
	  cx = 677;
	  cy = 30;
	  csx = 70;
	  csy = 400;
  }

  ///////////////////////////// ---------------------------- //////////////////////////////////
										//1020,700
	TCanvas *c=new TCanvas("c","c",cx,cy,800,800);//x=900 for aight square    x=1030 goes to side         for tall line images, use x=455                    //y was 680, for things like 2-11       //1200 x for wide
	                                        //1040 is standard
  ///////////////////////////// ---------------------------- //////////////////////////////////
	//good square is 600 x 600

  TF1 f[10000];
  //Int_t did[10000];
  Int_t fn=0;
  bool onefrozen=false;
  Color_t col=1;

  TLegend *leg=new TLegend(.35,.85,.75,.99);
  //leg->SetFillStyle(0);
  leg->SetFillColor(0);
  //leg->SetBorderSize(0);
  leg->SetTextFont(42);

  Double_t pi = 3.14159265359;
}
